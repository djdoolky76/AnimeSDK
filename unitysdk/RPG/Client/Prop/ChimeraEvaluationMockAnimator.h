#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC779B0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDC779A0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xDC77770)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xDC778D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationMockAnimator_TypeDefinitionIndex = 78446;

	class ChimeraEvaluationMockAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* ChimeraAnimator; // 0x18
		static ::System::Int32* StaticGet_FLDGLNNLAFK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraEvaluationMockAnimator")->GetStaticField(0x12080);
		}

		static ::System::Int32* StaticGet_DICPICIGDKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraEvaluationMockAnimator")->GetStaticField(0x12084);
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
