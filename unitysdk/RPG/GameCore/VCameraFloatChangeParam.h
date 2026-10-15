#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraFloatChangeParam; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7E5E0)
#define RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7E2E0)

namespace RPG::GameCore
{
	class VCameraFloatChangeParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single TargetValue; // 0x14
		::System::Single Time; // 0x18
		::System::Single Duration; // 0x1C
		::System::String* ChangeCurvePath; // 0x20
		::System::Single RecoveryTime; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* RecoveryCurvePath; // 0x30
		::System::Boolean RecoveryToDefaultValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraFloatChangeParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraFloatChangeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
