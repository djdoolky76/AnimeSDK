#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGICAENCEED.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CIMONOGAMEPADSELECTABLETRANSITIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC2220)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam_TypeDefinitionIndex = 59845;

	class MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam : public ::System::Object
	{
	public:
		::LGICAENCEED CursorTransitionStyle; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* FadeToSelectAnimation; // 0x18
		::System::String* FadeToNormalAnimation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CIMONOGAMEPADSELECTABLETRANSITIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
