#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorEventPattern; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x11FAE240)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorEventPatternWrap_TypeDefinitionIndex = 60572;

	class AnimatorEventPatternWrap : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEvent*>* exitEvent; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEvent*>* normalEvent; // 0x18
		::MoleMole::Config::AnimatorEventPattern* patten; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEvent*>* enterEvent; // 0x28

		::System::Void _ctor(::MoleMole::Config::AnimatorEventPattern* patten)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventPattern*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP__CTOR_OFFSET))(this, patten);
		}
	};
}
