#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/LMNEKOLMGEM.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEPCKFHMMHD.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Nullable_1.h"
class AJHEFPNNKKC;
class HEJLOAOKDGE;
class IPFNLCFACJH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGGBPMDINLI_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xBC6F600)
#define KGGBPMDINLI_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBC6ED70)
#define KGGBPMDINLI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC70CD0)
#define KGGBPMDINLI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6EBC0)
#define KGGBPMDINLI_EHOLCGEHFNG_OFFSET UNITYSDK_OFFSET(0xBC6FFD0)
#define KGGBPMDINLI_IBPGEHIFGNB_1_OFFSET UNITYSDK_OFFSET(0xBC70D30)
#define KGGBPMDINLI_IBPGEHIFGNB_OFFSET UNITYSDK_OFFSET(0xBC70CE0)
#define KGGBPMDINLI_JFGKDBPJECF_OFFSET UNITYSDK_OFFSET(0xBC70DC0)
#define KGGBPMDINLI_LCBJGBBOKPO_OFFSET UNITYSDK_OFFSET(0xBC701E0)
#define KGGBPMDINLI_LLOEECDEKCE_OFFSET UNITYSDK_OFFSET(0xBC6F160)
#define KGGBPMDINLI_NLKAEEJPMEO_OFFSET UNITYSDK_OFFSET(0xBC6FF60)
#define KGGBPMDINLI_POOKFNJFJDF_OFFSET UNITYSDK_OFFSET(0xBC6EE80)
#define KGGBPMDINLI___BUILDCONFIGS_B__13_0_OFFSET UNITYSDK_OFFSET(0xBC70E50)

inline static constexpr unsigned int KGGBPMDINLI_TypeDefinitionIndex = 64184;

	class KGGBPMDINLI : public ::System::Object
	{
	public:
		::IPFNLCFACJH* DCJCONLGILD; // 0x10
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x18
		::System::Collections::Generic::Dictionary_2<::APCGKBOPGJL, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>*>* BPFIPAODMKI; // 0x20
		::HEJLOAOKDGE* KAMLEMCONJK; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* KBLHNKNCEPL; // 0x30
		::System::Boolean AEIKJOHFEJJ; // 0x38
		static ::LMNEKOLMGEM* StaticGet_BBCDHBJACNE()
		{
			return (::LMNEKOLMGEM*)UnitySDK::FromName("", "KGGBPMDINLI")->GetStaticField(0xD480);
		}

		::System::Void _ctor(::IPFNLCFACJH* a1, ::AJHEFPNNKKC* a2, ::HEJLOAOKDGE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*, ::AJHEFPNNKKC*, ::HEJLOAOKDGE*))((::PBYTE)hIl2Cpp + KGGBPMDINLI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGBPMDINLI_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>* ACMKLFOMPFC(::APCGKBOPGJL a1)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + KGGBPMDINLI_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillConfig> ACMKLFOMPFC_1(::APCGKBOPGJL a1, ::DEPCKFHMMHD a2)
		{
			return ((::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillConfig>(*)(::PVOID, ::APCGKBOPGJL, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + KGGBPMDINLI_ACMKLFOMPFC_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean NLKAEEJPMEO(::DNFDBKCPBNM a1, ::DNFDBKCPBNM a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KGGBPMDINLI_NLKAEEJPMEO_OFFSET))(this, a1, a2);
		}

		::System::Boolean EHOLCGEHFNG(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KGGBPMDINLI_EHOLCGEHFNG_OFFSET))(this, a1);
		}

		::System::Void POOKFNJFJDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGBPMDINLI_POOKFNJFJDF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>* LLOEECDEKCE(::APCGKBOPGJL a1)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + KGGBPMDINLI_LLOEECDEKCE_OFFSET))(this, a1);
		}

		static ::RPG::AvatarSystem::SeriesSkillConfig LCBJGBBOKPO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::SeriesSkillConfig(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KGGBPMDINLI_LCBJGBBOKPO_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>* IBPGEHIFGNB(::APCGKBOPGJL a1)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*>*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + KGGBPMDINLI_IBPGEHIFGNB_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillConfig> IBPGEHIFGNB_1(::APCGKBOPGJL a1, ::DEPCKFHMMHD a2)
		{
			return ((::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillConfig>(*)(::PVOID, ::APCGKBOPGJL, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + KGGBPMDINLI_IBPGEHIFGNB_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean JFGKDBPJECF(::DNFDBKCPBNM a1, ::DNFDBKCPBNM a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KGGBPMDINLI_JFGKDBPJECF_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildConfigs_b__13_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGGBPMDINLI___BUILDCONFIGS_B__13_0_OFFSET))(this, a1);
		}

	};
