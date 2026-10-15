#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class BKOBHMFCKJH;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGHDAGGIMPF_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0xE83F3D0)
#define DGHDAGGIMPF_CTOR_OFFSET UNITYSDK_OFFSET(0xE83FB30)
#define DGHDAGGIMPF_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xE83F480)
#define DGHDAGGIMPF_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0xE83F430)

inline static constexpr unsigned int DGHDAGGIMPF_TypeDefinitionIndex = 77463;

	class DGHDAGGIMPF : public ::FJNNEOKOCJD
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::BKOBHMFCKJH* LGEFCADNPMN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHDAGGIMPF_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + DGHDAGGIMPF_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + DGHDAGGIMPF_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + DGHDAGGIMPF_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
