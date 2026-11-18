#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Tween.h"

#define DG_TWEENING_TWEENER__CTOR_OFFSET UNITYSDK_OFFSET(0x20072F10)

namespace DG::Tweening
{
	inline static constexpr unsigned int Tweener_TypeDefinitionIndex = 27976;

	class Tweener : public ::DG::Tweening::Tween
	{
	public:
		::System::Boolean isFromAllowed; // 0xF0
		::System::Boolean hasManuallySetStartValue; // 0xF1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENER__CTOR_OFFSET))(this);
		}
	};
}
