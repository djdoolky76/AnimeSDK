#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFIKKAEOGFF;
namespace RPG::GameCore { class FiveDimGravitySwitchLineConfig; }

#define NCGGJCFDLBJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C943980)
#define NCGGJCFDLBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C943A10)

	class NCGGJCFDLBJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimGravitySwitchLineConfig* EABKOHGCHFP; // 0x10
		::AFIKKAEOGFF* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGJCFDLBJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGJCFDLBJ_CLEAR_OFFSET))(this);
		}

	};
