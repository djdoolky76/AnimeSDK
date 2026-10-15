#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class DFDIEEHGJED;
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJNNEOKOCJD_CTOR_OFFSET UNITYSDK_OFFSET(0x157E2DA0)
#define FJNNEOKOCJD_EDBDAAKMDFI_1_OFFSET UNITYSDK_OFFSET(0x157E2C80)
#define FJNNEOKOCJD_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x157E2B90)
#define FJNNEOKOCJD_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x157E2AA0)

	class FJNNEOKOCJD : public ::LDCOFDFFPBD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNNEOKOCJD_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + FJNNEOKOCJD_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + FJNNEOKOCJD_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EDBDAAKMDFI_1(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + FJNNEOKOCJD_EDBDAAKMDFI_1_OFFSET))(this, a1, a2, a3);
		}

	};
