#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/MatchTargetFields.h"

#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9630)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET UNITYSDK_OFFSET(0x1D6E95E0)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1D6E9620)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MatchTargetFieldConstants_TypeDefinitionIndex = 39708;

	class MatchTargetFieldConstants : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Rotation()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)UnitySDK::FromName("UnityEngine.Timeline", "MatchTargetFieldConstants")->GetStaticField(0xC1E0);
		}

		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_None()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)UnitySDK::FromName("UnityEngine.Timeline", "MatchTargetFieldConstants")->GetStaticField(0xC1E4);
		}

		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_All()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)UnitySDK::FromName("UnityEngine.Timeline", "MatchTargetFieldConstants")->GetStaticField(0xC1E8);
		}

		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Position()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)UnitySDK::FromName("UnityEngine.Timeline", "MatchTargetFieldConstants")->GetStaticField(0xC1EC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_CCTOR_OFFSET))();
		}

		static ::System::Boolean HasAny(::UnityEngine::Timeline::MatchTargetFields a1, ::UnityEngine::Timeline::MatchTargetFields a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields a1, ::UnityEngine::Timeline::MatchTargetFields a2)
		{
			return ((::UnityEngine::Timeline::MatchTargetFields(*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET))(a1, a2);
		}

	};
}
