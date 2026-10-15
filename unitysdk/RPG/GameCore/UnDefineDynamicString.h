#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnDefineDynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_UNDEFINEDYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC723C0)
#define RPG_GAMECORE_UNDEFINEDYNAMICSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC723D0)
#define RPG_GAMECORE_UNDEFINEDYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC72390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnDefineDynamicString_TypeDefinitionIndex = 23819;

	class UnDefineDynamicString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicStringKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNDEFINEDYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnDefineDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnDefineDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNDEFINEDYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnDefineDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnDefineDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNDEFINEDYNAMICSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
