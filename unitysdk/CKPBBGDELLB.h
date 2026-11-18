#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CKPBBGDELLB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1155B6C0)
#define CKPBBGDELLB_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1155AED0)
#define CKPBBGDELLB_RELEASE_OFFSET UNITYSDK_OFFSET(0x1155B590)
#define CKPBBGDELLB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1155B640)
#define CKPBBGDELLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1155B630)

inline static constexpr unsigned int CKPBBGDELLB_TypeDefinitionIndex = 40385;

class CKPBBGDELLB : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_DFBHLIAPNAM()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(CKPBBGDELLB_TypeDefinitionIndex)->GetStaticField(0x430A0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_CBLODDHPLLH()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(CKPBBGDELLB_TypeDefinitionIndex)->GetStaticField(0x430A8);
	}
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* ENEJEBGHNOE; // 0x10
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* KGHECJGMEDI; // 0x18
	::COCJHGGDBCA* DFAJBFNNHJG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPBBGDELLB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPBBGDELLB__CCTOR_OFFSET))();
	}

	::System::Void ProvideCharacterRenderingTransforms(::UnityEngine::Vector3& DFCAPDBFMIA, ::UnityEngine::Matrix4x4& FPCFHFNGFMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CKPBBGDELLB_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET))(this, DFCAPDBFMIA, FPCFHFNGFMM);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPBBGDELLB_RELEASE_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::COCJHGGDBCA* DFAJBFNNHJG)
	{
		return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + CKPBBGDELLB_BBOMJDBNHIC_OFFSET))(this, DFAJBFNNHJG);
	}
};
