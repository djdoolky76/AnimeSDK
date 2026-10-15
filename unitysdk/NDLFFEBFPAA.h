#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FGNIPLCEDPE.h"
class ECJGCFIJJKD;
class FNHHCDAKILF;
class GHLLLMOJHBN;
class HEKHCLACHJE;
class MPHJECLHDKJ;
class NDCLBAKBEIP;
class OBJANKHLNGO;
class PGKCICIKLMB;
class POJNGHHJCNC;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftProductUI3DViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDLFFEBFPAA_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBB4DB20)
#define NDLFFEBFPAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB4C460)
#define NDLFFEBFPAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4BDD0)
#define NDLFFEBFPAA_KAGFKKKENNB_OFFSET UNITYSDK_OFFSET(0xBB4C5B0)

inline static constexpr unsigned int NDLFFEBFPAA_TypeDefinitionIndex = 79756;

	class NDLFFEBFPAA : public ::System::Object
	{
	public:
		::GHLLLMOJHBN* HPKAMOIPAKN; // 0x10
		::MPHJECLHDKJ* IDJNMDGBKKI; // 0x18
		::PGKCICIKLMB* MHMMAHBDOHD; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Collections::Generic::List_1<::RPG::Client::MechCraft::MechCraftPartType>*>* BCFJCDDJJLE; // 0x28
		::FNHHCDAKILF* JIFFPCDGGID; // 0x30
		::NDCLBAKBEIP* AFKPGPDBMKH; // 0x38
		::OBJANKHLNGO* GJALMBBNNOF; // 0x40
		// static const ::System::Object FJAMFAGLBNL; // 0x0
		// static const ::System::Object DDMIIEDCDNJ; // 0x0
		::System::Void _ctor(::GHLLLMOJHBN* a1, ::NDCLBAKBEIP* a2, ::PGKCICIKLMB* a3, ::OBJANKHLNGO* a4, ::MPHJECLHDKJ* a5, ::FNHHCDAKILF* a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHLLLMOJHBN*, ::NDCLBAKBEIP*, ::PGKCICIKLMB*, ::OBJANKHLNGO*, ::MPHJECLHDKJ*, ::FNHHCDAKILF*))((::PBYTE)hIl2Cpp + NDLFFEBFPAA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* BPLPBPMEODA(::POJNGHHJCNC* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*(*)(::PVOID, ::POJNGHHJCNC*))((::PBYTE)hIl2Cpp + NDLFFEBFPAA_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* BPLPBPMEODA_1(::ECJGCFIJJKD* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*(*)(::PVOID, ::ECJGCFIJJKD*))((::PBYTE)hIl2Cpp + NDLFFEBFPAA_BPLPBPMEODA_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FGNIPLCEDPE>* KAGFKKKENNB(::HEKHCLACHJE* a1, ::HEKHCLACHJE* a2)
		{
			return ((::System::Collections::Generic::List_1<::FGNIPLCEDPE>*(*)(::PVOID, ::HEKHCLACHJE*, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + NDLFFEBFPAA_KAGFKKKENNB_OFFSET))(this, a1, a2);
		}

	};
