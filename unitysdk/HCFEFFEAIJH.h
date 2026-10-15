#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCFEFFEAIJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C0D5D0)
#define HCFEFFEAIJH_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x15C0D530)
#define HCFEFFEAIJH_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15C0D260)

inline static constexpr unsigned int HCFEFFEAIJH_TypeDefinitionIndex = 77483;

	class HCFEFFEAIJH : public ::FJNNEOKOCJD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEFFEAIJH_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + HCFEFFEAIJH_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + HCFEFFEAIJH_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
