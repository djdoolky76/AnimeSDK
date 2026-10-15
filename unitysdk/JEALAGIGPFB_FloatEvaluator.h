#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEALAGIGPFB_Evaluator.h"
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define JEALAGIGPFB_FLOATEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x16615CA0)
#define JEALAGIGPFB_FLOATEVALUATOR_DHHJFBFCDKJ_OFFSET UNITYSDK_OFFSET(0x16615D30)
#define JEALAGIGPFB_FLOATEVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16615CC0)
#define JEALAGIGPFB_FLOATEVALUATOR_EOPMJAGNECJ_OFFSET UNITYSDK_OFFSET(0x16615000)
#define JEALAGIGPFB_FLOATEVALUATOR_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x166160E0)
#define JEALAGIGPFB_FLOATEVALUATOR_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x16616100)
#define JEALAGIGPFB_FLOATEVALUATOR_IAFNGKMDDLF_OFFSET UNITYSDK_OFFSET(0x166150A0)
#define JEALAGIGPFB_FLOATEVALUATOR_IPOJOPHFEEO_OFFSET UNITYSDK_OFFSET(0x16615D90)
#define JEALAGIGPFB_FLOATEVALUATOR_OBKONJIFPNC_OFFSET UNITYSDK_OFFSET(0x16615E60)

inline static constexpr unsigned int JEALAGIGPFB_FloatEvaluator_TypeDefinitionIndex = 57434;

	class JEALAGIGPFB_FloatEvaluator : public ::JEALAGIGPFB_Evaluator
	{
	public:
		::System::String* _BindProperty; // 0x20
		::RPG::GameCore::GameEntity* _BindEntity; // 0x28
		::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* _Configure; // 0x30
		// static const ::System::Object MAX_ITERATION_COUNT; // 0x0
		::System::Void _ctor(::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void DHHJFBFCDKJ(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_DHHJFBFCDKJ_OFFSET))(this, a1, a2);
		}

		::System::Void IPOJOPHFEEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_IPOJOPHFEEO_OFFSET))(this);
		}

		::System::Void OBKONJIFPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_OBKONJIFPNC_OFFSET))(this);
		}

		::System::Single get_MaxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Single get_MinValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_GET_MINVALUE_OFFSET))(this);
		}

		static ::System::Single EOPMJAGNECJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_EOPMJAGNECJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Single IAFNGKMDDLF(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FLOATEVALUATOR_IAFNGKMDDLF_OFFSET))(a1, a2);
		}

	};
