#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4E3FA0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E3F90)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0x1A4E3D60)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0x1A4E3EC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationMockAnimator_TypeDefinitionIndex = 81180;

	class ChimeraEvaluationMockAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* ChimeraAnimator; // 0x18
		static ::System::Int32* StaticGet_DICPICIGDKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraEvaluationMockAnimator")->GetStaticField(0x132A0);
		}

		static ::System::Int32* StaticGet_FLDGLNNLAFK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraEvaluationMockAnimator")->GetStaticField(0x132A4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_CCTOR_OFFSET))();
		}

		::System::Void LikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET))(this);
		}

		::System::Void UnlikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET))(this);
		}

	};
}
