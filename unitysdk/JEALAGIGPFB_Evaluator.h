#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JEALAGIGPFB_EVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x16615550)
#define JEALAGIGPFB_EVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16615560)
#define JEALAGIGPFB_EVALUATOR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x166156B0)
#define JEALAGIGPFB_EVALUATOR_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x16615690)
#define JEALAGIGPFB_EVALUATOR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x16615680)
#define JEALAGIGPFB_EVALUATOR_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x166155A0)
#define JEALAGIGPFB_EVALUATOR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x166156C0)
#define JEALAGIGPFB_EVALUATOR_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x166156A0)

inline static constexpr unsigned int JEALAGIGPFB_Evaluator_TypeDefinitionIndex = 57433;

	class JEALAGIGPFB_Evaluator : public ::System::Object
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::System::Boolean _IsPaused_k__BackingField; // 0x18
		::System::Boolean _IsFinished_k__BackingField; // 0x19
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_SET_ISPAUSED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EVALUATOR_SET_ISFINISHED_OFFSET))(this, a1);
		}

	};
