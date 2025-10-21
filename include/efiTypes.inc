; efiTypes.inc

; only adding types as necessary

struc UINT64 {

    align   8
    . rq    1

}

struc UINT32 {

    align   4
    . rd    1

}

struc CHAR16 {

    align   2
    . rw    1

}