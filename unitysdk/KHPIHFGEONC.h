#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define KHPIHFGEONC_CTOR_OFFSET UNITYSDK_OFFSET(0xB416390)
#define KHPIHFGEONC_GHIDBNBCICB_OFFSET UNITYSDK_OFFSET(0xB4161F0)
#define KHPIHFGEONC_IFMDIELKPGL_OFFSET UNITYSDK_OFFSET(0xB416340)
#define KHPIHFGEONC_OODEPOBHJLO_OFFSET UNITYSDK_OFFSET(0xB4162F0)

	class KHPIHFGEONC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AHAEIFEOELB; // 0x10
		::System::Int32 DPLMENILLLL; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint HKOJCEMPDGE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPIHFGEONC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GHIDBNBCICB(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHPIHFGEONC_GHIDBNBCICB_OFFSET))(this, a1);
		}

		::System::Void OODEPOBHJLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPIHFGEONC_OODEPOBHJLO_OFFSET))(this);
		}

		::System::Void IFMDIELKPGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPIHFGEONC_IFMDIELKPGL_OFFSET))(this);
		}

	};
