#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D2890)
#define MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x139D2920)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int FC_StringToFloat_TypeDefinitionIndex = 39293;

	class FC_StringToFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* a)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT_INVOKE_OFFSET))(this, a);
		}
	};
}
