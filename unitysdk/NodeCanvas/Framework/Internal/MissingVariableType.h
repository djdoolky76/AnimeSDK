#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EBB29A0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1EBB29C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EBB29B0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1EBB29D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB29E0)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int MissingVariableType_TypeDefinitionIndex = 30161;

	class MissingVariableType
	{
	public:
		::System::String* _recoveryState; // 0x60
		::System::String* _missingType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE__CTOR_OFFSET))(this);
		}

		::System::String* get_missingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_MISSINGTYPE_OFFSET))(this);
		}

		::System::Void set_missingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_MISSINGTYPE_OFFSET))(this, value);
		}

		::System::String* get_recoveryState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_RECOVERYSTATE_OFFSET))(this);
		}

		::System::Void set_recoveryState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_RECOVERYSTATE_OFFSET))(this, value);
		}
	};
}
