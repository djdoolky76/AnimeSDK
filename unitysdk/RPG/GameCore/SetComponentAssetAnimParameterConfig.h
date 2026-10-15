#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetComponentAssetAnimParameterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D030)
#define RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9CED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetAnimParameterConfig_TypeDefinitionIndex = 22811;

	class SetComponentAssetAnimParameterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorParameterType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::Single Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComponentAssetAnimParameterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComponentAssetAnimParameterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
