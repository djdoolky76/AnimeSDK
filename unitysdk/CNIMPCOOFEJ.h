#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNIMPCOOFEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA55730)
#define CNIMPCOOFEJ_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0xDA556D0)
#define CNIMPCOOFEJ_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xDA552B0)

inline static constexpr unsigned int CNIMPCOOFEJ_TypeDefinitionIndex = 77463;

	class CNIMPCOOFEJ : public ::FJNNEOKOCJD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIMPCOOFEJ_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CNIMPCOOFEJ_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CNIMPCOOFEJ_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
