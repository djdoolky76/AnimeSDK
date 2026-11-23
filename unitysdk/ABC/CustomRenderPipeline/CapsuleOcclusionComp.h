#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class FF25D157E21C4F1F;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace ABC::CustomRenderPipeline { class CapsuleAOConfiguration; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x282E840)
#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_A577F30BC765EAD0_OFFSET UNITYSDK_OFFSET(0x282E100)
#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_AD3D2611CDB7F761_OFFSET UNITYSDK_OFFSET(0x282E2F0)
#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_BB6FB7398CC752B2_OFFSET UNITYSDK_OFFSET(0x282E990)
#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x282E920)
#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_E26E68CFEA818ABE_OFFSET UNITYSDK_OFFSET(0x282E1E0)
#define ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int CapsuleOcclusionComp_TypeDefinitionIndex = 16935;

	class CapsuleOcclusionComp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* smallBall; // 0x20
		::ABC::CustomRenderPipeline::CapsuleAOConfiguration* capsuleConfig; // 0x28
		::ABC::Collections::Pooled::PooledList_1<::FF25D157E21C4F1F*>* E5305F48B36FE21F; // 0x30

		::System::Void AD3D2611CDB7F761()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_AD3D2611CDB7F761_OFFSET))(this);
		}

		::UnityEngine::Transform* E26E68CFEA818ABE(::UnityEngine::Transform* EFE497ABF6BF98D8, ::System::String* BE8B7E45242FF4BA)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_E26E68CFEA818ABE_OFFSET))(this, EFE497ABF6BF98D8, BE8B7E45242FF4BA);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Boolean A577F30BC765EAD0(::System::Single BD6C291D0888AAEF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_A577F30BC765EAD0_OFFSET))(this, BD6C291D0888AAEF);
		}

		::ABC::Collections::Pooled::PooledList_1<::FF25D157E21C4F1F*>* BB6FB7398CC752B2()
		{
			return ((::ABC::Collections::Pooled::PooledList_1<::FF25D157E21C4F1F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEOCCLUSIONCOMP_BB6FB7398CC752B2_OFFSET))(this);
		}
	};
}
