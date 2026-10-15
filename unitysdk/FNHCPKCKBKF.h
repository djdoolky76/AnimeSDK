#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;

#define FNHCPKCKBKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15870CE0)
#define FNHCPKCKBKF_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x15870D10)

	class FNHCPKCKBKF : public ::HBLDGJCDJPF
	{
	public:
		::System::Int32 EGAKBLAGLPJ; // 0x10
		::System::Int32 DDAHAJMOOMK; // 0x14
		::System::Int32 BJHHAGGONAJ; // 0x18
		::System::Int32 NOMMFKJOBOD; // 0x1C
		::System::Int32 NDBEJOPFPOC; // 0x20
		::System::Int32 PGPLOHEEHLN; // 0x24
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FNHCPKCKBKF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + FNHCPKCKBKF_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
