#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LEHAHJKOHKP;
class MDHIBNLFCFL;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBOEKIBLHFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEF4D0)
#define PBOEKIBLHFD_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0xBFEF030)
#define PBOEKIBLHFD_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xBFEED40)
#define PBOEKIBLHFD_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0xBFEECD0)

inline static constexpr unsigned int PBOEKIBLHFD_TypeDefinitionIndex = 77454;

	class PBOEKIBLHFD : public ::FJNNEOKOCJD
	{
	public:
		::MDHIBNLFCFL* CEFLLELKFOP; // 0x10
		::LEHAHJKOHKP* HBIFBEDEAIA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOEKIBLHFD_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + PBOEKIBLHFD_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + PBOEKIBLHFD_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + PBOEKIBLHFD_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3);
		}

	};
