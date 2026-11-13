#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OODACBBPJEJ;
namespace RPG::Client::ComicDessert { class ComicDessertComicUnlockBubbleEntryViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CINIOJKAGED_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x16E64D90)
#define CINIOJKAGED_EEHEGJHGMLN_OFFSET UNITYSDK_OFFSET(0x16E646A0)

inline static constexpr unsigned int CINIOJKAGED_TypeDefinitionIndex = 77099;

	class CINIOJKAGED : public ::System::Object
	{
	public:
		// static const ::System::Object MPLIHDPBEAO; // 0x0
		// static const ::System::Object BADKPHIHPEF; // 0x0
		// static const ::System::Object HCHIACEPGJM; // 0x0
		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>* EEHEGJHGMLN(::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertComicUnlockBubbleEntryViewModel*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>*, ::System::String*))((::PBYTE)hIl2Cpp + CINIOJKAGED_EEHEGJHGMLN_OFFSET))(a1, a2);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CINIOJKAGED_DPFOPKIHKNO_OFFSET))(a1, a2);
		}

	};
