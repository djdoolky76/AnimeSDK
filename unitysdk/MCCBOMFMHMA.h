#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }
namespace System { class Object; }

#define MCCBOMFMHMA_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB873E70)
#define MCCBOMFMHMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB873D90)
#define MCCBOMFMHMA_FHNEEELAEGK_OFFSET UNITYSDK_OFFSET(0xB874140)
#define MCCBOMFMHMA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB873E20)
#define MCCBOMFMHMA_KLFECPACMFD_OFFSET UNITYSDK_OFFSET(0xB873F20)
#define MCCBOMFMHMA_OBKNANIDMKH_OFFSET UNITYSDK_OFFSET(0xB873EC0)
#define MCCBOMFMHMA_OCMKMOHFIID_OFFSET UNITYSDK_OFFSET(0xB8740D0)
#define MCCBOMFMHMA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB873DE0)
#define MCCBOMFMHMA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB8741B0)

	class MCCBOMFMHMA : public ::GNGPLDGOEAI
	{
	public:
		::RPG::Client::MonoExUICamera_CameraOutInfo* IDKOLBAHOOL; // 0x18
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::GNGPLDGOEAI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*, ::System::Object*))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void CHAHBFGGIDL(::GNGPLDGOEAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void OBKNANIDMKH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_OBKNANIDMKH_OFFSET))(this, a1);
		}

		::System::Void KLFECPACMFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_KLFECPACMFD_OFFSET))(this);
		}

		::System::Void OCMKMOHFIID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_OCMKMOHFIID_OFFSET))(this, a1);
		}

		::System::Void FHNEEELAEGK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_FHNEEELAEGK_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCBOMFMHMA_PJPFIHFAHGO_OFFSET))(this);
		}

	};
