#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class DiscreteBar; }
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FHCFEKEFPKM_AKAEGLAAKAA_OFFSET UNITYSDK_OFFSET(0x15766FB0)
#define FHCFEKEFPKM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15767160)
#define FHCFEKEFPKM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15767280)
#define FHCFEKEFPKM_CGDHDBMIMOA_OFFSET UNITYSDK_OFFSET(0x157670D0)
#define FHCFEKEFPKM_CIBEIOEJGDN_OFFSET UNITYSDK_OFFSET(0x15767040)
#define FHCFEKEFPKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15767370)
#define FHCFEKEFPKM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15766A00)
#define FHCFEKEFPKM_GCBPNCJIDNG_OFFSET UNITYSDK_OFFSET(0x15766E50)
#define FHCFEKEFPKM_GEFDFLMKNHI_OFFSET UNITYSDK_OFFSET(0x15766B40)
#define FHCFEKEFPKM_HAGHLMJJPKI_OFFSET UNITYSDK_OFFSET(0x15766F30)
#define FHCFEKEFPKM__ONBIND_OFFSET UNITYSDK_OFFSET(0x157668E0)

inline static constexpr unsigned int FHCFEKEFPKM_TypeDefinitionIndex = 71821;

	class FHCFEKEFPKM : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::DiscreteBar* DEILOFCIGJF; // 0x60
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x68
		::UnityEngine::Transform* FKCDFLJLPCA; // 0x70
		::UnityEngine::Transform* KGMDBKMPJIL; // 0x78
		// static const ::System::Object HMKLIAOONMP; // 0x0
		// static const ::System::Object ADJPGMEGAII; // 0x0
		// static const ::System::Object PGHNEGAHLGE; // 0x0
		// static const ::System::Object LCOOKCKEONA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void GCBPNCJIDNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_GCBPNCJIDNG_OFFSET))(this);
		}

		::System::Void GEFDFLMKNHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_GEFDFLMKNHI_OFFSET))(this);
		}

		::System::Int32 HAGHLMJJPKI(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_HAGHLMJJPKI_OFFSET))(this, a1);
		}

		::System::String* AKAEGLAAKAA(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_AKAEGLAAKAA_OFFSET))(this, a1);
		}

		::System::Void CIBEIOEJGDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_CIBEIOEJGDN_OFFSET))(this, a1);
		}

		::System::Void CGDHDBMIMOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_CGDHDBMIMOA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFEKEFPKM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
