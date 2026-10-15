#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePauseEnvironmentData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D436AF0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D436880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePauseEnvironmentData_TypeDefinitionIndex = 22801;

	class BattlePauseEnvironmentData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::RPG::Client::TextID Desc; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Params; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePauseEnvironmentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePauseEnvironmentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
