#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraVector3ChangeParam; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FBA0)
#define RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7E990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraVector3ChangeParam_TypeDefinitionIndex = 16408;

	class VCameraVector3ChangeParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 TargetValue; // 0x14
		::System::Single Time; // 0x20
		::System::Single Duration; // 0x24
		::System::String* ChangeCurvePath; // 0x28
		::System::Single RecoveryTime; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* RecoveryCurvePath; // 0x38
		::System::Boolean IsWorldOffset; // 0x40
		::System::Boolean UsePlayerToLookAtTargetForward; // 0x41
		::System::Boolean RecoveryToDefaultValue; // 0x42
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraVector3ChangeParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraVector3ChangeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
