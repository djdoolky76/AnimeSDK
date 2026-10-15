#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetGraphDynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRAPHDYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4EB0)
#define RPG_GAMECORE_SETGRAPHDYNAMICSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB4EC0)
#define RPG_GAMECORE_SETGRAPHDYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB4E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGraphDynamicString_TypeDefinitionIndex = 20711;

	class SetGraphDynamicString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean TargetSelf; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::UInt32>* TargetIDs; // 0x28
		::RPG::GameCore::DynamicString* Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
