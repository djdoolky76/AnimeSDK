#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLKEAGCAIFG_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0x158364C0)
#define FLKEAGCAIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15837320)
#define FLKEAGCAIFG_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15836510)
#define FLKEAGCAIFG_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0x15836470)
#define FLKEAGCAIFG_OIEFPJIJCAF_OFFSET UNITYSDK_OFFSET(0x15836EE0)

	class FLKEAGCAIFG : public ::FJNNEOKOCJD
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKEAGCAIFG_CTOR_OFFSET))(this);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + FLKEAGCAIFG_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + FLKEAGCAIFG_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + FLKEAGCAIFG_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIEFPJIJCAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKEAGCAIFG_OIEFPJIJCAF_OFFSET))(this);
		}

	};
