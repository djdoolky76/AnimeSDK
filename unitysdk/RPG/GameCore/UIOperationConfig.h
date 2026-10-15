#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIOperation; }
namespace RPG::GameCore { class UIOperationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_UIOPERATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC70000)
#define RPG_GAMECORE_UIOPERATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6EFC0)

namespace RPG::GameCore
{
	class UIOperationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabName; // 0x10
		::Il2CppArray<::RPG::GameCore::UIOperation*>* UIOperations; // 0x18
		::System::Boolean AdjustIndentBySafeArea; // 0x20
		::System::Boolean AdjustIndentByScreenAspect; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIOperationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIOperationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
