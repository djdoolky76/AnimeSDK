#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class BKOBHMFCKJH;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJPDKBPFNEM_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0xBFC14C0)
#define LJPDKBPFNEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC1890)
#define LJPDKBPFNEM_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xBFC1520)

inline static constexpr unsigned int LJPDKBPFNEM_TypeDefinitionIndex = 80230;

	class LJPDKBPFNEM : public ::FJNNEOKOCJD
	{
	public:
		::BKOBHMFCKJH* LGEFCADNPMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPDKBPFNEM_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + LJPDKBPFNEM_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + LJPDKBPFNEM_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
