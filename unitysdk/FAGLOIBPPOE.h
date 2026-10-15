#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAGLOIBPPOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1566F7C0)
#define FAGLOIBPPOE_FOIHOEHAOJD_OFFSET UNITYSDK_OFFSET(0x1566EFD0)

inline static constexpr unsigned int FAGLOIBPPOE_TypeDefinitionIndex = 64064;

	class FAGLOIBPPOE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGLOIBPPOE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* FOIHOEHAOJD(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + FAGLOIBPPOE_FOIHOEHAOJD_OFFSET))(this, a1, a2);
		}

	};
