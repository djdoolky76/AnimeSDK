#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LEHAHJKOHKP;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPPGBPFHKLP_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0xBA3F5F0)
#define MPPGBPFHKLP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3F990)
#define MPPGBPFHKLP_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xBA3F650)

inline static constexpr unsigned int MPPGBPFHKLP_TypeDefinitionIndex = 77464;

	class MPPGBPFHKLP : public ::LDCOFDFFPBD
	{
	public:
		::LEHAHJKOHKP* DBJJLAGHKFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPGBPFHKLP_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + MPPGBPFHKLP_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + MPPGBPFHKLP_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
