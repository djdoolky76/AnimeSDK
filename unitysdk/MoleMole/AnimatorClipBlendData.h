#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_ANIMATORCLIPBLENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x130418D0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorClipBlendData_TypeDefinitionIndex = 59901;

	class AnimatorClipBlendData : public ::System::Object
	{
	public:
		::System::String* AnimatorName; // 0x10
		::System::Boolean Backwards; // 0x18
		::System::Boolean IgnoreRange; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 Index; // 0x1C
		::System::Single Angle; // 0x20
		::System::Single Speed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORCLIPBLENDDATA__CTOR_OFFSET))(this);
		}
	};
}
