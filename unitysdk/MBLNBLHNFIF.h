#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIActionType.h"
#include "unitysdk/System/Object.h"
class GCBMADADMDJ;

#define MBLNBLHNFIF_CLKMLMJNJBD_OFFSET UNITYSDK_OFFSET(0xB864660)
#define MBLNBLHNFIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB864900)
#define MBLNBLHNFIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB864610)
#define MBLNBLHNFIF_GFFBHAIMBOD_OFFSET UNITYSDK_OFFSET(0xB8647F0)
#define MBLNBLHNFIF_JEJABFOJKIO_OFFSET UNITYSDK_OFFSET(0xB864860)
#define MBLNBLHNFIF_KIPBHEJCBCJ_OFFSET UNITYSDK_OFFSET(0xB8648B0)
#define MBLNBLHNFIF_MEIFDMDGNKE_OFFSET UNITYSDK_OFFSET(0xB864780)

	class MBLNBLHNFIF : public ::System::Object
	{
	public:
		::GCBMADADMDJ* HPHDJHNJIAG; // 0x10
		::RPG::GameCore::AIActionType BCMKMNHPPPK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_DISPOSE_OFFSET))(this);
		}

		::System::Void MEIFDMDGNKE(::RPG::GameCore::AIActionType a1, ::GCBMADADMDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIActionType, ::GCBMADADMDJ*))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_MEIFDMDGNKE_OFFSET))(this, a1, a2);
		}

		::System::Void GFFBHAIMBOD(::RPG::GameCore::AIActionType a1, ::GCBMADADMDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIActionType, ::GCBMADADMDJ*))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_GFFBHAIMBOD_OFFSET))(this, a1, a2);
		}

		::System::Void JEJABFOJKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_JEJABFOJKIO_OFFSET))(this);
		}

		::System::Boolean KIPBHEJCBCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_KIPBHEJCBCJ_OFFSET))(this);
		}

		::System::Void CLKMLMJNJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNBLHNFIF_CLKMLMJNJBD_OFFSET))(this);
		}

	};
