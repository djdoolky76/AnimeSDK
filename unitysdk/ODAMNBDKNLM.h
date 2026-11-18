#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define ODAMNBDKNLM_AIJDJPEKLPJ_OFFSET UNITYSDK_OFFSET(0x1B7752A0)
#define ODAMNBDKNLM_DGPCILPDONO_OFFSET UNITYSDK_OFFSET(0x1B775340)
#define ODAMNBDKNLM_GCAOOHJHIID_OFFSET UNITYSDK_OFFSET(0x1B7754C0)
#define ODAMNBDKNLM_IPKCJENLJKL_OFFSET UNITYSDK_OFFSET(0x1B775400)
#define ODAMNBDKNLM_JKBEHIFPDOD_OFFSET UNITYSDK_OFFSET(0x1B775200)
#define ODAMNBDKNLM_MPJNJIAOBOC_OFFSET UNITYSDK_OFFSET(0x1B775160)
#define ODAMNBDKNLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B775100)
#define ODAMNBDKNLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7750F0)

inline static constexpr unsigned int ODAMNBDKNLM_TypeDefinitionIndex = 82327;

class ODAMNBDKNLM : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_HHINKOIBDDI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ODAMNBDKNLM_TypeDefinitionIndex)->GetStaticField(0xD210);
	}
	static ::System::Int32* StaticGet_GIGIDNPFAIH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ODAMNBDKNLM_TypeDefinitionIndex)->GetStaticField(0xD214);
	}
	static ::System::Int32* StaticGet_CDFOLBFJDGD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ODAMNBDKNLM_TypeDefinitionIndex)->GetStaticField(0xD218);
	}
	::UnityEngine::Material* FEDEMLCMDIC; // 0x10

	::System::Void _ctor(::UnityEngine::Material* FEDEMLCMDIC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + ODAMNBDKNLM__CTOR_OFFSET))(this, FEDEMLCMDIC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODAMNBDKNLM__CCTOR_OFFSET))();
	}

	::System::Boolean MPJNJIAOBOC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAMNBDKNLM_MPJNJIAOBOC_OFFSET))(this);
	}

	::UnityEngine::Color JKBEHIFPDOD()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAMNBDKNLM_JKBEHIFPDOD_OFFSET))(this);
	}

	::UnityEngine::Color AIJDJPEKLPJ()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAMNBDKNLM_AIJDJPEKLPJ_OFFSET))(this);
	}

	::System::Void DGPCILPDONO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODAMNBDKNLM_DGPCILPDONO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IPKCJENLJKL(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ODAMNBDKNLM_IPKCJENLJKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCAOOHJHIID(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ODAMNBDKNLM_GCAOOHJHIID_OFFSET))(this, EGEGIMGMJHN);
	}
};
