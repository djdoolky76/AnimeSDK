#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class BAELLFLPIPF;
class CGEAHGGAADH;
class DGKFMEELDNN;
class EEFEDNHNOJO;
class GGBEEJNPPOP;
class JBGMFIFOMMG;
class JNBEDKMHFMN;
class JOOHEPGEHNK;
class NDCLBAKBEIP;
class PJPPGJEDCOG;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGKFMEELDNN_JBMAEFHONHA_BOFKCJNCNCO_OFFSET UNITYSDK_OFFSET(0xE84E970)
#define DGKFMEELDNN_JBMAEFHONHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE84D9D0)
#define DGKFMEELDNN_JBMAEFHONHA_CTOR_OFFSET UNITYSDK_OFFSET(0xE84D9B0)
#define DGKFMEELDNN_JBMAEFHONHA_GMEMGOAODFJ_OFFSET UNITYSDK_OFFSET(0xE84E440)

	class DGKFMEELDNN_JBMAEFHONHA : public ::System::Object
	{
	public:
		::GGBEEJNPPOP* KHLEHDEPMGJ; // 0x10
		::BAELLFLPIPF* EIFAMFJPMCE; // 0x18
		::CGEAHGGAADH* CKFIMAJPOOA; // 0x20
		::JOOHEPGEHNK* PONKAEHCHGF; // 0x28
		::JBGMFIFOMMG* MPHBMLDHCHI; // 0x30
		::NDCLBAKBEIP* AFKPGPDBMKH; // 0x38
		::System::Void _ctor(::GGBEEJNPPOP* a1, ::NDCLBAKBEIP* a2, ::JBGMFIFOMMG* a3, ::JOOHEPGEHNK* a4, ::BAELLFLPIPF* a5)
		{
			return ((::System::Void(*)(::PVOID, ::GGBEEJNPPOP*, ::NDCLBAKBEIP*, ::JBGMFIFOMMG*, ::JOOHEPGEHNK*, ::BAELLFLPIPF*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JBMAEFHONHA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DGKFMEELDNN* BPLPBPMEODA(::JNBEDKMHFMN* a1)
		{
			return ((::DGKFMEELDNN*(*)(::PVOID, ::JNBEDKMHFMN*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JBMAEFHONHA_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EEFEDNHNOJO*>* GMEMGOAODFJ(::PJPPGJEDCOG* a1, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a2, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a3)
		{
			return ((::System::Collections::Generic::List_1<::EEFEDNHNOJO*>*(*)(::PVOID, ::PJPPGJEDCOG*, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JBMAEFHONHA_GMEMGOAODFJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::EEFEDNHNOJO*>* BOFKCJNCNCO(::PJPPGJEDCOG* a1, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a2, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a3)
		{
			return ((::System::Collections::Generic::List_1<::EEFEDNHNOJO*>*(*)(::PVOID, ::PJPPGJEDCOG*, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JBMAEFHONHA_BOFKCJNCNCO_OFFSET))(this, a1, a2, a3);
		}

	};
