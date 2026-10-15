#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FinishActionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishActionConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FINISHACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A8CB0)
#define RPG_GAMECORE_FINISHACTIONCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6A8CC0)
#define RPG_GAMECORE_FINISHACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A8B30)

namespace RPG::GameCore
{
	class FinishActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FinishActionType FinishActionType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* FinishActionPara; // 0x18
		::Il2CppArray<::System::String*>* FinishActionParaString; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FinishActionConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FinishActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
