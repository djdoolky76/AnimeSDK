#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define OJNCGKHPMDA_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x15F79A20)
#define OJNCGKHPMDA_EJAANMAEHON_OFFSET UNITYSDK_OFFSET(0x15F79A80)
#define OJNCGKHPMDA_HILDAIFICNI_OFFSET UNITYSDK_OFFSET(0x15F79AE0)
#define OJNCGKHPMDA_HLBKDLLLHEB_OFFSET UNITYSDK_OFFSET(0x15F7A400)
#define OJNCGKHPMDA_ICBDDPCPOBI_OFFSET UNITYSDK_OFFSET(0x15F79B40)
#define OJNCGKHPMDA_IMBJCEPJBAI_OFFSET UNITYSDK_OFFSET(0x15F7A3A0)
#define OJNCGKHPMDA_LMBJEGGABFJ_OFFSET UNITYSDK_OFFSET(0x15F79DE0)
#define OJNCGKHPMDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F79A00)

inline static constexpr unsigned int OJNCGKHPMDA_TypeDefinitionIndex = 55324;

class OJNCGKHPMDA : public ::System::Object
{
public:
	static ::UnityEngine::RectTransform** StaticGet_MELPBPOPDMB()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(OJNCGKHPMDA_TypeDefinitionIndex)->GetStaticField(0x3F980);
	}
	static ::UnityEngine::RectTransform** StaticGet_DCMJFHLNNBE()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(OJNCGKHPMDA_TypeDefinitionIndex)->GetStaticField(0x3F988);
	}
	static ::UnityEngine::Canvas** StaticGet_LHHCBJMINFM()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(OJNCGKHPMDA_TypeDefinitionIndex)->GetStaticField(0x3F990);
	}
	static ::UnityEngine::RectTransform** StaticGet_ICPDNFEIGGJ()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(OJNCGKHPMDA_TypeDefinitionIndex)->GetStaticField(0x3F998);
	}
	static ::System::Single* StaticGet__INNDFICMHOI_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OJNCGKHPMDA_TypeDefinitionIndex)->GetStaticField(0xEAF0);
	}
	static ::System::Boolean* StaticGet__MHGOOINMGBA_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OJNCGKHPMDA_TypeDefinitionIndex)->GetStaticField(0xEAF4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNCGKHPMDA__CCTOR_OFFSET))();
	}

	static ::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJNCGKHPMDA_DILABNGJPMN_OFFSET))();
	}

	static ::System::Void EJAANMAEHON(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OJNCGKHPMDA_EJAANMAEHON_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single HILDAIFICNI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + OJNCGKHPMDA_HILDAIFICNI_OFFSET))();
	}

	static ::System::Void ICBDDPCPOBI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNCGKHPMDA_ICBDDPCPOBI_OFFSET))();
	}

	static ::System::Void LMBJEGGABFJ(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OJNCGKHPMDA_LMBJEGGABFJ_OFFSET))(MKHLBMMKCJL);
	}

	static ::System::Void IMBJCEPJBAI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + OJNCGKHPMDA_IMBJCEPJBAI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void HLBKDLLLHEB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNCGKHPMDA_HLBKDLLLHEB_OFFSET))();
	}
};
