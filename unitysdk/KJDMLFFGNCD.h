#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class BKOBHMFCKJH;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJDMLFFGNCD_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0x19F026A0)
#define KJDMLFFGNCD_CTOR_OFFSET UNITYSDK_OFFSET(0x19F02B50)
#define KJDMLFFGNCD_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x19F02AB0)
#define KJDMLFFGNCD_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x19F02700)

inline static constexpr unsigned int KJDMLFFGNCD_TypeDefinitionIndex = 80215;

	class KJDMLFFGNCD : public ::FJNNEOKOCJD
	{
	public:
		::BKOBHMFCKJH* LGEFCADNPMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDMLFFGNCD_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + KJDMLFFGNCD_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + KJDMLFFGNCD_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + KJDMLFFGNCD_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
