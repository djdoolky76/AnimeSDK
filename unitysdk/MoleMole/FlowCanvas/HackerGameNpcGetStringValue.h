#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcStringValueType.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETSTRINGVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AA1A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETSTRINGVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AA2C0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcGetStringValue_TypeDefinitionIndex = 83391;

	class HackerGameNpcGetStringValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETSTRINGVALUE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::ChessEntity* a, ::MoleMole::FlowCanvas::HackerGameNpcStringValueType b)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::FlowCanvas::HackerGameNpcStringValueType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETSTRINGVALUE_INVOKE_OFFSET))(this, a, b);
		}
	};
}
