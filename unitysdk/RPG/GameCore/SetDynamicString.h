#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicStringBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicString; }

#define RPG_GAMECORE_SETDYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA72350)
#define RPG_GAMECORE_SETDYNAMICSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA72360)
#define RPG_GAMECORE_SETDYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA72320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicString_TypeDefinitionIndex = 23818;

	class SetDynamicString : public ::RPG::GameCore::SetDynamicStringBase
	{
	public:
		::RPG::GameCore::DynamicString* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
