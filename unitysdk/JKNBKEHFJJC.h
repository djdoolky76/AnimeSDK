#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
class HEKHCLACHJE;
class JKNBKEHFJJC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JKNBKEHFJJC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1C54FFB0)
#define JKNBKEHFJJC_BIKCBLEJEGP_OFFSET UNITYSDK_OFFSET(0x1C56A7B0)
#define JKNBKEHFJJC_CFHBJPHHCPO_OFFSET UNITYSDK_OFFSET(0x1C56AAD0)
#define JKNBKEHFJJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C56A780)
#define JKNBKEHFJJC_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C552950)
#define JKNBKEHFJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53D210)
#define JKNBKEHFJJC_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x1C54F1F0)
#define JKNBKEHFJJC_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1C567640)
#define JKNBKEHFJJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C56AC10)
#define JKNBKEHFJJC_FIFCCCJOLNE_OFFSET UNITYSDK_OFFSET(0x1C56AB60)
#define JKNBKEHFJJC_HJJJMLPEIOA_OFFSET UNITYSDK_OFFSET(0x1C54F090)
#define JKNBKEHFJJC_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0x1C56A9E0)
#define JKNBKEHFJJC_IOLJKPIJPMN_OFFSET UNITYSDK_OFFSET(0x1C56AA80)
#define JKNBKEHFJJC_JMJPLGOAHNJ_OFFSET UNITYSDK_OFFSET(0x1C568F30)
#define JKNBKEHFJJC_NKDAHLGNOKN_OFFSET UNITYSDK_OFFSET(0x1C545FC0)
#define JKNBKEHFJJC_PDKFNECNHNM_OFFSET UNITYSDK_OFFSET(0x1C54FE40)
#define JKNBKEHFJJC_PELAJMBNCNO_OFFSET UNITYSDK_OFFSET(0x1C53DA40)
#define JKNBKEHFJJC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C54EB40)
#define JKNBKEHFJJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C56B230)
#define JKNBKEHFJJC__ITERATEALL_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C56B3A0)

inline static constexpr unsigned int JKNBKEHFJJC_TypeDefinitionIndex = 41730;

	class JKNBKEHFJJC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* GBEGIIICHCN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_CTOR_2_OFFSET))(this, a1);
		}

		::System::Int32 ACMKLFOMPFC(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> IAONPECOKLB(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_IAONPECOKLB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* BIKCBLEJEGP()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_BIKCBLEJEGP_OFFSET))(this);
		}

		::System::Int32 IOLJKPIJPMN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_IOLJKPIJPMN_OFFSET))(this);
		}

		::System::Boolean NKDAHLGNOKN(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_NKDAHLGNOKN_OFFSET))(this, a1);
		}

		::System::Boolean CFHBJPHHCPO(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_CFHBJPHHCPO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* HJJJMLPEIOA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_HJJJMLPEIOA_OFFSET))(this);
		}

		::System::Int32 PDKFNECNHNM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_PDKFNECNHNM_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Void PELAJMBNCNO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_PELAJMBNCNO_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::JKNBKEHFJJC* FIFCCCJOLNE(::HEKHCLACHJE* a1)
		{
			return ((::JKNBKEHFJJC*(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_FIFCCCJOLNE_OFFSET))(this, a1);
		}

		::System::Void JMJPLGOAHNJ(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_JMJPLGOAHNJ_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean Equals(::HEKHCLACHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNBKEHFJJC_TOSTRING_OFFSET))(this);
		}

		::System::Object* _IterateAll_b__6_0(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + JKNBKEHFJJC__ITERATEALL_B__6_0_OFFSET))(this, a1);
		}

	};
