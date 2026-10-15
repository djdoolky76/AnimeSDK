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

#define KAAIHICBBOH_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0xB2D0260)
#define KAAIHICBBOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D0790)
#define KAAIHICBBOH_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xB2D02C0)

	class KAAIHICBBOH : public ::LDCOFDFFPBD
	{
	public:
		::LEHAHJKOHKP* DBJJLAGHKFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAIHICBBOH_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + KAAIHICBBOH_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + KAAIHICBBOH_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
