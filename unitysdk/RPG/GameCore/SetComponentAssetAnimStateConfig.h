#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetComponentAssetAnimParameterConfig; }
namespace RPG::GameCore { class SetComponentAssetAnimStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6F900)
#define RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6F7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetAnimStateConfig_TypeDefinitionIndex = 22812;

	class SetComponentAssetAnimStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FromStateName; // 0x10
		::System::String* ToStateName; // 0x18
		::Il2CppArray<::RPG::GameCore::SetComponentAssetAnimParameterConfig*>* Parameters; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComponentAssetAnimStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComponentAssetAnimStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
