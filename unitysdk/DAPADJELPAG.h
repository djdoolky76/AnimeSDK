#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class MPKPFCNKECG;
class PBGNKMMDBGD;

#define DAPADJELPAG_ABPBNLMECCB_OFFSET UNITYSDK_OFFSET(0x1C5D89F0)
#define DAPADJELPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D81B0)
#define DAPADJELPAG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5D8210)
#define DAPADJELPAG_IGECEJEPOHO_OFFSET UNITYSDK_OFFSET(0x1C5D8AE0)
#define DAPADJELPAG_MDKNCBOOCEC_OFFSET UNITYSDK_OFFSET(0x1C5D8270)

	class DAPADJELPAG : public ::System::Object
	{
	public:
		::MPKPFCNKECG* HMDIEDFGNEI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DAPADJELPAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPADJELPAG_EXECUTE_OFFSET))(this);
		}

		::System::Void MDKNCBOOCEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPADJELPAG_MDKNCBOOCEC_OFFSET))(this);
		}

		::System::Void ABPBNLMECCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPADJELPAG_ABPBNLMECCB_OFFSET))(this);
		}

		::System::Void IGECEJEPOHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPADJELPAG_IGECEJEPOHO_OFFSET))(this);
		}

	};
