#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class MonoInflatableFighter; }
namespace UnityEngine { class Animator; }

#define EMKMGGFFECN_CJDKBGPNHDB_OFFSET UNITYSDK_OFFSET(0x187E2070)
#define EMKMGGFFECN_CTOR_OFFSET UNITYSDK_OFFSET(0x187E1AD0)
#define EMKMGGFFECN_DEKDFPPJOIM_OFFSET UNITYSDK_OFFSET(0x187E1F40)
#define EMKMGGFFECN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187E1C40)
#define EMKMGGFFECN_EDELFKMAOMN_OFFSET UNITYSDK_OFFSET(0x187E1C90)
#define EMKMGGFFECN_GET_OVERRIDELOCKED_OFFSET UNITYSDK_OFFSET(0x187E21F0)
#define EMKMGGFFECN_HPGBPPKCKBF_OFFSET UNITYSDK_OFFSET(0x187E1EC0)
#define EMKMGGFFECN_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0x187E1BE0)
#define EMKMGGFFECN_KOAAPEPCHKD_OFFSET UNITYSDK_OFFSET(0x187E2130)
#define EMKMGGFFECN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x187E1AE0)
#define EMKMGGFFECN_NHLIFJCFOPG_OFFSET UNITYSDK_OFFSET(0x187E1E10)
#define EMKMGGFFECN_PHGGAJIPFPM_OFFSET UNITYSDK_OFFSET(0x187E1DC0)
#define EMKMGGFFECN_SET_OVERRIDELOCKED_OFFSET UNITYSDK_OFFSET(0x187E2200)

inline static constexpr unsigned int EMKMGGFFECN_TypeDefinitionIndex = 70618;

	class EMKMGGFFECN : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* CPIIOIPAAKK; // 0x10
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x20
		::System::Boolean _OverrideLocked_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 FMJJAGNFHEE; // 0x2C
		::System::Single IBLNALICOLD; // 0x30
		::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1, ::ACGKMEPLIBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::ACGKMEPLIBJ*))((::PBYTE)hIl2Cpp + EMKMGGFFECN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKMGGFFECN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JFMILGOGGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKMGGFFECN_JFMILGOGGHP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKMGGFFECN_DISPOSE_OFFSET))(this);
		}

		::System::Void EDELFKMAOMN(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKMGGFFECN_EDELFKMAOMN_OFFSET))(this, a1, a2);
		}

		::System::Void PHGGAJIPFPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKMGGFFECN_PHGGAJIPFPM_OFFSET))(this, a1);
		}

		::System::Void NHLIFJCFOPG(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + EMKMGGFFECN_NHLIFJCFOPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPGBPPKCKBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMKMGGFFECN_HPGBPPKCKBF_OFFSET))(this, a1);
		}

		::System::Void DEKDFPPJOIM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMKMGGFFECN_DEKDFPPJOIM_OFFSET))(this, a1);
		}

		::System::Void CJDKBGPNHDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMKMGGFFECN_CJDKBGPNHDB_OFFSET))(this, a1);
		}

		::System::Void KOAAPEPCHKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKMGGFFECN_KOAAPEPCHKD_OFFSET))(this);
		}

		::System::Boolean get_OverrideLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKMGGFFECN_GET_OVERRIDELOCKED_OFFSET))(this);
		}

		::System::Void set_OverrideLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKMGGFFECN_SET_OVERRIDELOCKED_OFFSET))(this, a1);
		}

	};
