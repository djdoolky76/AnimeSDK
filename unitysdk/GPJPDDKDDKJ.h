#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLPANDDGHG.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IFAMBENCHMD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPJPDDKDDKJ_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x13DF9360)
#define GPJPDDKDDKJ_EMCONPCLKCO_OFFSET UNITYSDK_OFFSET(0x13DF9610)
#define GPJPDDKDDKJ_KJOBIOEPEEB_OFFSET UNITYSDK_OFFSET(0x13DF92F0)
#define GPJPDDKDDKJ_LAGCLLNBKIG_OFFSET UNITYSDK_OFFSET(0x13DF9600)
#define GPJPDDKDDKJ_MILCMHOMBEF_OFFSET UNITYSDK_OFFSET(0x13DF9620)
#define GPJPDDKDDKJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13DF96C0)
#define GPJPDDKDDKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13DF9260)
#define GPJPDDKDDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF9350)

inline static constexpr unsigned int GPJPDDKDDKJ_TypeDefinitionIndex = 43846;

class GPJPDDKDDKJ : public ::BFLPANDDGHG
{
public:
	::MoleMole::Config::CampType _EGJBDLPPMKH_k__BackingField; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void KJOBIOEPEEB(::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_KJOBIOEPEEB_OFFSET))(this, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 POBLGIHBMOG, ::IFAMBENCHMD* DNOHELNGGLJ, ::System::UInt32 NIJJDPKCADM, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGDAPONDHCE, ::System::Int32 MOBNMDEDJIP, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::MoleMole::Config::CampType ENMLFHNKPPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IFAMBENCHMD*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_EDEFLFIKNFK_OFFSET))(this, POBLGIHBMOG, DNOHELNGGLJ, NIJJDPKCADM, CKPGOKHECCH, HBOHIAPEIMH, OLNAFBAENGH, EGDAPONDHCE, MOBNMDEDJIP, OJBJBOJKFJO, ENMLFHNKPPL);
	}

	::MoleMole::Config::CampType LAGCLLNBKIG()
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_LAGCLLNBKIG_OFFSET))(this);
	}

	::System::Void EMCONPCLKCO(::MoleMole::Config::CampType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_EMCONPCLKCO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MILCMHOMBEF(::System::String* MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_MILCMHOMBEF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJPDDKDDKJ_OHFHFOHMBJH_OFFSET))(this);
	}
};
