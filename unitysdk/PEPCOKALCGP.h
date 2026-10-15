#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEPCOKALCGP_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F8760)
#define PEPCOKALCGP_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0xC1F80F0)
#define PEPCOKALCGP_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xC1F7AB0)

inline static constexpr unsigned int PEPCOKALCGP_TypeDefinitionIndex = 77498;

	class PEPCOKALCGP : public ::FJNNEOKOCJD
	{
	public:
		// static const ::System::String* NOIGFGJJDLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPCOKALCGP_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + PEPCOKALCGP_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + PEPCOKALCGP_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
