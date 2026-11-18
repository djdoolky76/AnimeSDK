#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DC0150)
#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC0190)
#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x10DC01A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorEventPatternWrap___c_TypeDefinitionIndex = 60573;

	class AnimatorEventPatternWrap___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::Config::AnimatorEvent*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::MoleMole::Config::AnimatorEvent*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventPatternWrap___c_TypeDefinitionIndex)->GetStaticField(0x4C7D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventPatternWrap___c_TypeDefinitionIndex)->GetStaticField(0x4C7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__4_0(::MoleMole::Config::AnimatorEvent* a, ::MoleMole::Config::AnimatorEvent* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AnimatorEvent*, ::MoleMole::Config::AnimatorEvent*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C___CTOR_B__4_0_OFFSET))(this, a, b);
		}
	};
}
