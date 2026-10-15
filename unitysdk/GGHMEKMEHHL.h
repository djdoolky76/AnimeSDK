#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGHMEKMEHHL_CTOR_OFFSET UNITYSDK_OFFSET(0x159F9950)
#define GGHMEKMEHHL_FOIHOEHAOJD_OFFSET UNITYSDK_OFFSET(0x159F9260)

inline static constexpr unsigned int GGHMEKMEHHL_TypeDefinitionIndex = 64065;

	class GGHMEKMEHHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHMEKMEHHL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* FOIHOEHAOJD(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + GGHMEKMEHHL_FOIHOEHAOJD_OFFSET))(this, a1, a2);
		}

	};
