#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }

#define GNGPLDGOEAI_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15B08780)
#define GNGPLDGOEAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B08AB0)
#define GNGPLDGOEAI_DDGDOBDOMKD_OFFSET UNITYSDK_OFFSET(0x15B08A20)
#define GNGPLDGOEAI_DHHAGHKLIJI_OFFSET UNITYSDK_OFFSET(0x15B08810)
#define GNGPLDGOEAI_FHNEEELAEGK_OFFSET UNITYSDK_OFFSET(0x15B089C0)
#define GNGPLDGOEAI_KFJLGBHOONO_OFFSET UNITYSDK_OFFSET(0x15B087D0)
#define GNGPLDGOEAI_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15B08730)
#define GNGPLDGOEAI_KLFECPACMFD_OFFSET UNITYSDK_OFFSET(0x15B088E0)
#define GNGPLDGOEAI_OBKNANIDMKH_OFFSET UNITYSDK_OFFSET(0x15B08890)
#define GNGPLDGOEAI_OCMKMOHFIID_OFFSET UNITYSDK_OFFSET(0x15B08960)
#define GNGPLDGOEAI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15B086F0)
#define GNGPLDGOEAI_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0x15B08920)
#define GNGPLDGOEAI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15B08A60)
#define GNGPLDGOEAI_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x15B08850)

	class GNGPLDGOEAI : public ::System::Object
	{
	public:
		::RPG::Client::MonoExUICamera* NCGDIGMOANP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::GNGPLDGOEAI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*, ::System::Object*))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void CHAHBFGGIDL(::GNGPLDGOEAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void KFJLGBHOONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_KFJLGBHOONO_OFFSET))(this);
		}

		::System::Void DHHAGHKLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_DHHAGHKLIJI_OFFSET))(this);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void OBKNANIDMKH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_OBKNANIDMKH_OFFSET))(this, a1);
		}

		::System::Void KLFECPACMFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_KLFECPACMFD_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_PEDFLCNLIOC_OFFSET))(this);
		}

		::System::Void OCMKMOHFIID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_OCMKMOHFIID_OFFSET))(this, a1);
		}

		::System::Void FHNEEELAEGK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_FHNEEELAEGK_OFFSET))(this, a1);
		}

		::System::Void DDGDOBDOMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_DDGDOBDOMKD_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGPLDGOEAI_PJPFIHFAHGO_OFFSET))(this);
		}

	};
