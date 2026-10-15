#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
class CBCJHEDMHOK;
class FABNLDDIMIG;
class FLKLJKIEEPM;
class FNBGDIAOCAL;
class LEODIDNFCKO;
class MLEMMDNMHCG;
class PEKPNJMOGLC;
class PHCMIJEDENP;
class PIIOAKOEACN;
class PJPPGJEDCOG;
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCGPFFFEBIK_BFCFPLCLCIG_OFFSET UNITYSDK_OFFSET(0x1C5588E0)
#define HCGPFFFEBIK_BGHCHFAKMLA_OFFSET UNITYSDK_OFFSET(0x1C546380)
#define HCGPFFFEBIK_BKCLEICKEHF_OFFSET UNITYSDK_OFFSET(0x1C558890)
#define HCGPFFFEBIK_BLFCHHCEFBH_OFFSET UNITYSDK_OFFSET(0x1C558C20)
#define HCGPFFFEBIK_CMDEKLDALHK_OFFSET UNITYSDK_OFFSET(0x1C558980)
#define HCGPFFFEBIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C557EB0)
#define HCGPFFFEBIK_DOGBBAEKEEC_OFFSET UNITYSDK_OFFSET(0x1C5583E0)
#define HCGPFFFEBIK_FGIEGIHFKBI_OFFSET UNITYSDK_OFFSET(0x1C558120)
#define HCGPFFFEBIK_LDKHGOAOLMI_OFFSET UNITYSDK_OFFSET(0x1C558EE0)
#define HCGPFFFEBIK_LKCDOEFBFDG_OFFSET UNITYSDK_OFFSET(0x1C558440)
#define HCGPFFFEBIK_NLFOANGOPFD_1_OFFSET UNITYSDK_OFFSET(0x1C54C310)
#define HCGPFFFEBIK_NLFOANGOPFD_OFFSET UNITYSDK_OFFSET(0x1C558660)
#define HCGPFFFEBIK_NNLJPBMDOGC_OFFSET UNITYSDK_OFFSET(0x1C558930)
#define HCGPFFFEBIK_OMLBMKMAHOJ_1_OFFSET UNITYSDK_OFFSET(0x1C54C280)
#define HCGPFFFEBIK_OMLBMKMAHOJ_OFFSET UNITYSDK_OFFSET(0x1C558180)
#define HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE__COMPARE_OFFSET UNITYSDK_OFFSET(0x1C558060)
#define HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE___COMPARE_OFFSET UNITYSDK_OFFSET(0x1C558070)
#define HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_MECHCRAFT_MECHCRAFTCHIPTRAITTYPE__COMPARE_OFFSET UNITYSDK_OFFSET(0x1C558170)
#define HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE_SYSTEM_INT32___COMPARE_OFFSET UNITYSDK_OFFSET(0x1C558080)

inline static constexpr unsigned int HCGPFFFEBIK_TypeDefinitionIndex = 41899;

	class HCGPFFFEBIK : public ::System::Object
	{
	public:
		::FNBGDIAOCAL* FPNMIGDJBIE; // 0x10
		::LEODIDNFCKO* CDKHAIMKMLO; // 0x18
		::FABNLDDIMIG* DGAFKAIOAFO; // 0x20
		::CBCJHEDMHOK* KGJMIFOJIAF; // 0x28
		::PEKPNJMOGLC* OEKIFIHCFJO; // 0x30
		::System::Void _ctor(::FNBGDIAOCAL* a1, ::CBCJHEDMHOK* a2, ::PEKPNJMOGLC* a3, ::LEODIDNFCKO* a4, ::FABNLDDIMIG* a5)
		{
			return ((::System::Void(*)(::PVOID, ::FNBGDIAOCAL*, ::CBCJHEDMHOK*, ::PEKPNJMOGLC*, ::LEODIDNFCKO*, ::FABNLDDIMIG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Nullable* BGHCHFAKMLA(::PIIOAKOEACN* a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_BGHCHFAKMLA_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_Generic_IComparer_RPG_Client_MechCraft_MechCraftAttributeType__Compare(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE__COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_IComparer_RPG_Client_MechCraft_MechCraftAttributeType___Compare(::System::Nullable* a1, ::System::Nullable* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE___COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_IComparer_System_Collections_Generic_KeyValuePair_RPG_Client_MechCraft_MechCraftAttributeType_System_Int32___Compare(::System::Collections::Generic::KeyValuePair* a1, ::System::Collections::Generic::KeyValuePair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE_SYSTEM_INT32___COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>* FGIEGIHFKBI(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_FGIEGIHFKBI_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_Generic_IComparer_RPG_Client_MechCraft_MechCraftChipTraitType__Compare(::RPG::Client::MechCraft::MechCraftChipTraitType a1, ::RPG::Client::MechCraft::MechCraftChipTraitType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_MECHCRAFT_MECHCRAFTCHIPTRAITTYPE__COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean OMLBMKMAHOJ(::PIIOAKOEACN* a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_OMLBMKMAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean OMLBMKMAHOJ_1(::System::Nullable* a1, ::System::Nullable* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable*, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_OMLBMKMAHOJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DOGBBAEKEEC(::System::Nullable* a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_DOGBBAEKEEC_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKCDOEFBFDG(::System::Nullable* a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_LKCDOEFBFDG_OFFSET))(this, a1, a2);
		}

		::System::Boolean NLFOANGOPFD(::PIIOAKOEACN* a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_NLFOANGOPFD_OFFSET))(this, a1, a2);
		}

		::System::Boolean NLFOANGOPFD_1(::PIIOAKOEACN* a1, ::System::Nullable* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_NLFOANGOPFD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* BKCLEICKEHF(::FABNLDDIMIG* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::FABNLDDIMIG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_BKCLEICKEHF_OFFSET))(this, a1);
		}

		::System::Boolean BFCFPLCLCIG(::PHCMIJEDENP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_BFCFPLCLCIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>* NNLJPBMDOGC(::MLEMMDNMHCG* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>*(*)(::PVOID, ::MLEMMDNMHCG*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_NNLJPBMDOGC_OFFSET))(this, a1);
		}

		::System::String* CMDEKLDALHK(::System::UInt32 a1, ::RPG::Client::MechCraft::MechCraftPartType a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_CMDEKLDALHK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* BLFCHHCEFBH(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_BLFCHHCEFBH_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LDKHGOAOLMI(::FLKLJKIEEPM* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::FLKLJKIEEPM*))((::PBYTE)hIl2Cpp + HCGPFFFEBIK_LDKHGOAOLMI_OFFSET))(this, a1);
		}

	};
