#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class BFMHFBHIAAL;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LEHAHJKOHKP;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPNLLDEHONN_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0x15B56530)
#define GPNLLDEHONN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B56C00)
#define GPNLLDEHONN_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x15B56950)
#define GPNLLDEHONN_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15B565F0)
#define GPNLLDEHONN_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0x15B56590)

inline static constexpr unsigned int GPNLLDEHONN_TypeDefinitionIndex = 77479;

	class GPNLLDEHONN : public ::FJNNEOKOCJD
	{
	public:
		::BFMHFBHIAAL* EEFMDEHLLFI; // 0x10
		::LEHAHJKOHKP* DBJJLAGHKFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLLDEHONN_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + GPNLLDEHONN_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + GPNLLDEHONN_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + GPNLLDEHONN_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + GPNLLDEHONN_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
