#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOCURVESCALE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x14019A00)
#define RPG_CLIENT_MONOCURVESCALE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x14019A40)
#define RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_0_OFFSET UNITYSDK_OFFSET(0x14019A50)
#define RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_1_OFFSET UNITYSDK_OFFSET(0x14019AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveScale___c_TypeDefinitionIndex = 73027;

	class MonoCurveScale___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Keyframe>** StaticGet___9__10_1()
		{
			return (::System::Comparison_1<::UnityEngine::Keyframe>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x684B0);
		}

		static ::System::Comparison_1<::UnityEngine::Keyframe>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::UnityEngine::Keyframe>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x684B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x684C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateReverseCurve_b__10_0(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GenerateReverseCurve_b__10_1(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_1_OFFSET))(this, a1, a2);
		}

	};
}
