#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHEDAFDNMPB.h"

namespace UnityEngine { class Camera; }

#define PHLELLGLPML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194A1F60)
#define PHLELLGLPML_DNKKGPOMHAK_OFFSET UNITYSDK_OFFSET(0x194A21E0)
#define PHLELLGLPML_ONCREATE_OFFSET UNITYSDK_OFFSET(0x194A1F20)
#define PHLELLGLPML_UPDATE_OFFSET UNITYSDK_OFFSET(0x194A1FA0)
#define PHLELLGLPML__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A2430)
#define PHLELLGLPML__CTOR_OFFSET UNITYSDK_OFFSET(0x194A2410)

inline static constexpr unsigned int PHLELLGLPML_TypeDefinitionIndex = 57088;

class PHLELLGLPML
{
public:
	static ::System::Boolean* StaticGet_BKHPPILCCOD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PHLELLGLPML_TypeDefinitionIndex)->GetStaticField(0xD260);
	}
	::BHEDAFDNMPB BMBLDIGHDLE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLELLGLPML__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLELLGLPML__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLELLGLPML_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLELLGLPML_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHLELLGLPML_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::BHEDAFDNMPB DNKKGPOMHAK(::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::BHEDAFDNMPB(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PHLELLGLPML_DNKKGPOMHAK_OFFSET))(this, KONLMDBCDCK);
	}
};
