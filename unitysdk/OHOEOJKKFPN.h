#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define OHOEOJKKFPN_BNNIAILKNAD_OFFSET UNITYSDK_OFFSET(0x11B31090)
#define OHOEOJKKFPN_CGOEBEKBHOC_OFFSET UNITYSDK_OFFSET(0x11B31040)
#define OHOEOJKKFPN_ECJNMIHBCCJ_OFFSET UNITYSDK_OFFSET(0x11B305B0)
#define OHOEOJKKFPN_EMGCEPPODKB_OFFSET UNITYSDK_OFFSET(0x11B30530)
#define OHOEOJKKFPN_EMPKLEKAIFP_OFFSET UNITYSDK_OFFSET(0x11B313D0)
#define OHOEOJKKFPN_GKNHLGNMAJC_OFFSET UNITYSDK_OFFSET(0x11B30C00)
#define OHOEOJKKFPN_LBFFLJHBBCK_OFFSET UNITYSDK_OFFSET(0x11B305C0)
#define OHOEOJKKFPN_NOBKCEINIPP_OFFSET UNITYSDK_OFFSET(0x11B30980)
#define OHOEOJKKFPN_PBCDCNKKHFK_OFFSET UNITYSDK_OFFSET(0x11B31320)
#define OHOEOJKKFPN__CTOR_OFFSET UNITYSDK_OFFSET(0x11B304F0)

inline static constexpr unsigned int OHOEOJKKFPN_TypeDefinitionIndex = 71318;

class OHOEOJKKFPN : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__HCNLOAMPFBP_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OHOEOJKKFPN_TypeDefinitionIndex)->GetStaticField(0xD600);
	}
	// static const ::System::String* CJGFHNPCDNH; // 0x0
	::System::Int32 CJGJJGPOPCF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN__CTOR_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* EMGCEPPODKB()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_EMGCEPPODKB_OFFSET))(this);
	}

	static ::System::Void ECJNMIHBCCJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_ECJNMIHBCCJ_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void LBFFLJHBBCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_LBFFLJHBBCK_OFFSET))(this);
	}

	::System::Void GKNHLGNMAJC(::System::Int32 GOCLGFBDADB, ::UnityEngine::Texture2D* EKIGNANMGLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_GKNHLGNMAJC_OFFSET))(this, GOCLGFBDADB, EKIGNANMGLF);
	}

	::System::Void CGOEBEKBHOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_CGOEBEKBHOC_OFFSET))(this);
	}

	::System::Void NOBKCEINIPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_NOBKCEINIPP_OFFSET))(this);
	}

	::System::Void BNNIAILKNAD(::UnityEngine::Camera* AIJNNBOOPOB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_BNNIAILKNAD_OFFSET))(this, AIJNNBOOPOB);
	}

	static ::System::Boolean EMPKLEKAIFP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHOEOJKKFPN_EMPKLEKAIFP_OFFSET))();
	}

	::System::Void PBCDCNKKHFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN_PBCDCNKKHFK_OFFSET))(this);
	}
};
