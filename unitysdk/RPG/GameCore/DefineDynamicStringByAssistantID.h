#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DefineDynamicStringByAssistantID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FAA10)
#define RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FAA20)
#define RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FA9E0)

namespace RPG::GameCore
{
	class DefineDynamicStringByAssistantID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicStringKey; // 0x18
		::RPG::GameCore::DynamicFloat* AssistantID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DefineDynamicStringByAssistantID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DefineDynamicStringByAssistantID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DefineDynamicStringByAssistantID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DefineDynamicStringByAssistantID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
