#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBMBFECHHLB;
namespace System { class String; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define FBMBFECHHLB_ACMHOPJPEIF_OFFSET UNITYSDK_OFFSET(0x165BD890)
#define FBMBFECHHLB_AHBCLDGBENB_OFFSET UNITYSDK_OFFSET(0x165BDE80)
#define FBMBFECHHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x165BD560)
#define FBMBFECHHLB_EAIICCPNFCN_OFFSET UNITYSDK_OFFSET(0x165BD570)
#define FBMBFECHHLB_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x165BD3D0)
#define FBMBFECHHLB_KHDDKBAMFIM_OFFSET UNITYSDK_OFFSET(0x165BE210)
#define FBMBFECHHLB_KMOILMDCEBF_OFFSET UNITYSDK_OFFSET(0x165BE170)
#define FBMBFECHHLB_LEDPNJMKGOJ_OFFSET UNITYSDK_OFFSET(0x165BDB90)
#define FBMBFECHHLB_ONAMGOODPBA_OFFSET UNITYSDK_OFFSET(0x165BE630)

inline static constexpr unsigned int FBMBFECHHLB_TypeDefinitionIndex = 48331;

	class FBMBFECHHLB : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::VolumeComponent* HKDPMHAOMLE; // 0x10
		::System::String* PCKFAMEEOPE; // 0x18
		::UnityEngine::Rendering::VolumeProfile* EICIFNFMNLI; // 0x20
		::UnityEngine::Rendering::VolumeComponent* FAEABHPMKPB; // 0x28
		::UnityEngine::Rendering::VolumeProfile* FEDGFMPPLDO; // 0x30
		::UnityEngine::Rendering::VolumeProfile* MLDCLNDMLPC; // 0x38
		::UnityEngine::Rendering::VolumeProfile* MGJHACGONOM; // 0x40
		::UnityEngine::Rendering::VolumeComponent* IJDKCIGFHGF; // 0x48
		::UnityEngine::Rendering::VolumeProfile* DLHIAKOOEKB; // 0x50
		::UnityEngine::Rendering::VolumeComponent* EFFHCCPENGA; // 0x58
		::System::Single AMBPOMOJFME; // 0x60
		::System::Single MFCPOAPFNCP; // 0x64
		static ::FBMBFECHHLB** StaticGet_FLMODBLFAGD()
		{
			return (::FBMBFECHHLB**)UnitySDK::FromName("", "FBMBFECHHLB")->GetStaticField(0x45510);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBFECHHLB_CTOR_OFFSET))(this);
		}

		static ::FBMBFECHHLB* GGBLHEHJBDO()
		{
			return ((::FBMBFECHHLB*(*)())((::PBYTE)hIl2Cpp + FBMBFECHHLB_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void EAIICCPNFCN(::UnityEngine::Rendering::VolumeProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + FBMBFECHHLB_EAIICCPNFCN_OFFSET))(this, a1);
		}

		::System::Void ACMHOPJPEIF(::UnityEngine::Rendering::VolumeProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + FBMBFECHHLB_ACMHOPJPEIF_OFFSET))(this, a1);
		}

		::System::Void LEDPNJMKGOJ(::UnityEngine::Rendering::VolumeProfile* a1, ::UnityEngine::Rendering::VolumeProfile* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*, ::UnityEngine::Rendering::VolumeProfile*, ::System::Single))((::PBYTE)hIl2Cpp + FBMBFECHHLB_LEDPNJMKGOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AHBCLDGBENB(::UnityEngine::Rendering::VolumeProfile* a1, ::UnityEngine::Rendering::VolumeProfile* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*, ::UnityEngine::Rendering::VolumeProfile*, ::System::Single))((::PBYTE)hIl2Cpp + FBMBFECHHLB_AHBCLDGBENB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KMOILMDCEBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBMBFECHHLB_KMOILMDCEBF_OFFSET))(this, a1);
		}

		::System::Void KHDDKBAMFIM(::UnityEngine::Rendering::VolumeProfile* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*, ::System::Single))((::PBYTE)hIl2Cpp + FBMBFECHHLB_KHDDKBAMFIM_OFFSET))(this, a1, a2);
		}

		::System::Void ONAMGOODPBA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBMBFECHHLB_ONAMGOODPBA_OFFSET))(this, a1);
		}

	};
