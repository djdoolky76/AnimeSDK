#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuff.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddClientMazeBuff; }

#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA0690)
#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAA06A0)
#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAA0660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddClientMazeBuff_TypeDefinitionIndex = 22143;

	class AddClientMazeBuff : public ::RPG::GameCore::AddMazeBuff
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
