#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::GameCore { class GridFightBasicBonusConfigRow; }
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKDLGOAKJKG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC7CE4C0)
#define OKDLGOAKJKG_HCHMIIALFPN_OFFSET UNITYSDK_OFFSET(0xC7CE5C0)
#define OKDLGOAKJKG_JBIMJAHMNHA_OFFSET UNITYSDK_OFFSET(0xC7CE980)

inline static constexpr unsigned int OKDLGOAKJKG_TypeDefinitionIndex = 65890;

	class OKDLGOAKJKG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* FPKLDCGAJGP(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OKDLGOAKJKG_FPKLDCGAJGP_OFFSET))(a1);
		}

		static ::System::Void JBIMJAHMNHA(::RPG::GameCore::GridFightCombinationBonusConfigRow* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCombinationBonusConfigRow*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + OKDLGOAKJKG_JBIMJAHMNHA_OFFSET))(a1, a2);
		}

		static ::System::Void HCHMIIALFPN(::RPG::GameCore::GridFightBasicBonusConfigRow* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBasicBonusConfigRow*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + OKDLGOAKJKG_HCHMIIALFPN_OFFSET))(a1, a2, a3);
		}

	};
