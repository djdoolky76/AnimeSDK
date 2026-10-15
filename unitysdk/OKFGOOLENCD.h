#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OKFGOOLENCD_COOGNCHJOMF_OFFSET UNITYSDK_OFFSET(0xBED7BF0)
#define OKFGOOLENCD_OLHCIHEPAFD_OFFSET UNITYSDK_OFFSET(0xBED7CF0)
#define OKFGOOLENCD_PACFMNIDLKH_OFFSET UNITYSDK_OFFSET(0xBED7E70)

	class OKFGOOLENCD : public ::System::Object
	{
	public:
		static ::System::Void COOGNCHJOMF(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + OKFGOOLENCD_COOGNCHJOMF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OLHCIHEPAFD(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*))((::PBYTE)hIl2Cpp + OKFGOOLENCD_OLHCIHEPAFD_OFFSET))(a1, a2);
		}

		static ::System::Void PACFMNIDLKH(::System::String* a1, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + OKFGOOLENCD_PACFMNIDLKH_OFFSET))(a1, a2);
		}

	};
