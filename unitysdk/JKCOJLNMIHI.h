#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GNEEDEDGCOI.h"
class IDCOJJANCCK;
class IDGDNHILLDK;
namespace RPG::Client::B51Racing { class B51RacingGameplayResultDialogViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKCOJLNMIHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB214CF0)
#define JKCOJLNMIHI_GAPCBNFPHAL_OFFSET UNITYSDK_OFFSET(0xB2148F0)
#define JKCOJLNMIHI_GKDBCODEMHJ_OFFSET UNITYSDK_OFFSET(0xB214A70)
#define JKCOJLNMIHI_LBJBNDKNMNP_OFFSET UNITYSDK_OFFSET(0xB214C80)
#define JKCOJLNMIHI_PMEHHPHPICA_OFFSET UNITYSDK_OFFSET(0xB2149A0)

inline static constexpr unsigned int JKCOJLNMIHI_TypeDefinitionIndex = 81942;

	class JKCOJLNMIHI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCOJLNMIHI_CTOR_OFFSET))(this);
		}

		::IDCOJJANCCK* GAPCBNFPHAL()
		{
			return ((::IDCOJJANCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCOJLNMIHI_GAPCBNFPHAL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* PMEHHPHPICA(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Single a6, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a7)
		{
			return ((::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>*, ::System::Int32, ::System::String*, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + JKCOJLNMIHI_PMEHHPHPICA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void LBJBNDKNMNP(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*))((::PBYTE)hIl2Cpp + JKCOJLNMIHI_LBJBNDKNMNP_OFFSET))(this, a1);
		}

		static ::IDGDNHILLDK* GKDBCODEMHJ()
		{
			return ((::IDGDNHILLDK*(*)())((::PBYTE)hIl2Cpp + JKCOJLNMIHI_GKDBCODEMHJ_OFFSET))();
		}

	};
