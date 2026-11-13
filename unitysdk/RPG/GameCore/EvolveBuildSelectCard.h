#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOJMGEMDNN;
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::GameCore { class EvolveBuildSelectCard; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATEFROMSELECTINFO_OFFSET UNITYSDK_OFFSET(0x175137D0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATE_OFFSET UNITYSDK_OFFSET(0x175136E0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CTOR_OFFSET UNITYSDK_OFFSET(0x175137C0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_CARDDATA_OFFSET UNITYSDK_OFFSET(0x17513820)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_REROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x17513840)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_CARDDATA_OFFSET UNITYSDK_OFFSET(0x17513830)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_REROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x17513850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCard_TypeDefinitionIndex = 54738;

	class EvolveBuildSelectCard : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildCard* _CardData_k__BackingField; // 0x10
		::System::UInt32 _ReRollCount_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildSelectCard* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EvolveBuildSelectCard* CreateFromSelectInfo(::HKOJMGEMDNN* a1)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::HKOJMGEMDNN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATEFROMSELECTINFO_OFFSET))(a1);
		}

		::RPG::Client::EvolveBuildCard* get_CardData()
		{
			return ((::RPG::Client::EvolveBuildCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_CARDDATA_OFFSET))(this);
		}

		::System::Void set_CardData(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_CARDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReRollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_REROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_ReRollCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_REROLLCOUNT_OFFSET))(this, a1);
		}

	};
}
