#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define GMMOHDLFNOL_BJNPOBJLADP_OFFSET UNITYSDK_OFFSET(0x13DF1B20)
#define GMMOHDLFNOL_DMHFGLPELIC_OFFSET UNITYSDK_OFFSET(0x13DF1B80)
#define GMMOHDLFNOL_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x13DF1AA0)
#define GMMOHDLFNOL_LBEDHMPFMLM_OFFSET UNITYSDK_OFFSET(0x13DF1BD0)
#define GMMOHDLFNOL__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF1A90)

inline static constexpr unsigned int GMMOHDLFNOL_TypeDefinitionIndex = 38601;

class GMMOHDLFNOL : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_PODKGCNPKNI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GMMOHDLFNOL_TypeDefinitionIndex)->GetStaticField(0x137C0);
	}
	// static const ::System::Single HDIKKDGGJOM; // 0x0
	::UnityEngine::NAPRenderPipeline0::RTHandle* BPCNKODJLMK; // 0x10
	::System::UInt32 MGMDJCCEAIB; // 0x18

	::System::Void _ctor(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMMOHDLFNOL__CTOR_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMOHDLFNOL_JJEJHGOJOII_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* DMHFGLPELIC()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMOHDLFNOL_DMHFGLPELIC_OFFSET))(this);
	}

	::System::Boolean BJNPOBJLADP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMOHDLFNOL_BJNPOBJLADP_OFFSET))(this);
	}

	::System::Boolean LBEDHMPFMLM(::System::Single AAFFIOPHLDE, ::System::Single DCJNCHEOFCG, ::System::String* AOPKIEIEPJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + GMMOHDLFNOL_LBEDHMPFMLM_OFFSET))(this, AAFFIOPHLDE, DCJNCHEOFCG, AOPKIEIEPJC);
	}
};
