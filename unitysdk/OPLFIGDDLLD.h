#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPLFIGDDLLD_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0xBFB31B0)
#define OPLFIGDDLLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3C20)
#define OPLFIGDDLLD_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0xBFB3BC0)
#define OPLFIGDDLLD_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xBFB3200)

inline static constexpr unsigned int OPLFIGDDLLD_TypeDefinitionIndex = 77460;

	class OPLFIGDDLLD : public ::FJNNEOKOCJD
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFIGDDLLD_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + OPLFIGDDLLD_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + OPLFIGDDLLD_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + OPLFIGDDLLD_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
