#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
class GFKHDOCGBJE;
class JEBFGDPAHDO;
class JHIGAEIELKO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODHMHHGKCJP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD93C60)
#define ODHMHHGKCJP_CEFPFNBOAPL_OFFSET UNITYSDK_OFFSET(0xBD93C20)
#define ODHMHHGKCJP_CLEAR_OFFSET UNITYSDK_OFFSET(0xBD930D0)
#define ODHMHHGKCJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD93C50)
#define ODHMHHGKCJP_FAKEKMHJIBI_OFFSET UNITYSDK_OFFSET(0xBD935A0)
#define ODHMHHGKCJP_GFJNINACIEO_OFFSET UNITYSDK_OFFSET(0xBD934D0)
#define ODHMHHGKCJP_JKHJHIOCADO_OFFSET UNITYSDK_OFFSET(0xBD93610)
#define ODHMHHGKCJP_KBFMDBNJIHP_OFFSET UNITYSDK_OFFSET(0xBD93C10)
#define ODHMHHGKCJP_KLDPIEICGEA_OFFSET UNITYSDK_OFFSET(0xBD932C0)
#define ODHMHHGKCJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD93070)
#define ODHMHHGKCJP_LHJKDDLCIBF_OFFSET UNITYSDK_OFFSET(0xBD93B50)
#define ODHMHHGKCJP_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0xBD93C40)
#define ODHMHHGKCJP_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0xBD93C30)

	class ODHMHHGKCJP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GFKHDOCGBJE*>* NHPINNPGLCF; // 0x10
		::JHIGAEIELKO* CFKHNPGEAJA; // 0x18
		::JEBFGDPAHDO* LAHJMFDLJPL; // 0x20
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x28
		::System::Int32 FFNBLDFFMCN; // 0x30
		static ::System::Int32* StaticGet_DHDFOHGKFHB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ODHMHHGKCJP")->GetStaticField(0x147B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHMHHGKCJP_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::JHIGAEIELKO* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::JHIGAEIELKO*, ::System::Int32))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_CLEAR_OFFSET))(this);
		}

		::System::Void KLDPIEICGEA(::GFKHDOCGBJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFKHDOCGBJE*))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_KLDPIEICGEA_OFFSET))(this, a1);
		}

		::System::Void GFJNINACIEO(::GFKHDOCGBJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFKHDOCGBJE*))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_GFJNINACIEO_OFFSET))(this, a1);
		}

		::System::Void FAKEKMHJIBI(::HJIOMFDJLLA a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_FAKEKMHJIBI_OFFSET))(this, a1);
		}

		::System::Void JKHJHIOCADO(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_JKHJHIOCADO_OFFSET))(this, a1, a2);
		}

		::JEBFGDPAHDO* LHJKDDLCIBF()
		{
			return ((::JEBFGDPAHDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_LHJKDDLCIBF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GFKHDOCGBJE*>* KBFMDBNJIHP()
		{
			return ((::System::Collections::Generic::List_1<::GFKHDOCGBJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_KBFMDBNJIHP_OFFSET))(this);
		}

		::JHIGAEIELKO* CEFPFNBOAPL()
		{
			return ((::JHIGAEIELKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_CEFPFNBOAPL_OFFSET))(this);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_PCKEJOJIOOM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNLDMBGAJIF()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMHHGKCJP_MNLDMBGAJIF_OFFSET))(this);
		}

	};
