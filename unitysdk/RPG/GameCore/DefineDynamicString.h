#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStringContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DefineDynamicString; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_DEFINEDYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FA870)
#define RPG_GAMECORE_DEFINEDYNAMICSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FA880)
#define RPG_GAMECORE_DEFINEDYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FA840)

namespace RPG::GameCore
{
	class DefineDynamicString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DynamicKey; // 0x18
		::RPG::GameCore::DynamicString* ResetValue; // 0x20
		::RPG::GameCore::DynamicStringContextScope ContextScope; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DefineDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DefineDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DefineDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DefineDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
