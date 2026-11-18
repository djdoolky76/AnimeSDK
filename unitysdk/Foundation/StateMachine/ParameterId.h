#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/ParameterType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

#define FOUNDATION_STATEMACHINE_PARAMETERID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9989B0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x3583D0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x998990)
#define FOUNDATION_STATEMACHINE_PARAMETERID_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x998980)
#define FOUNDATION_STATEMACHINE_PARAMETERID_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x98EC70)
#define FOUNDATION_STATEMACHINE_PARAMETERID_ISVALIDFLOAT_OFFSET UNITYSDK_OFFSET(0x998AA0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_ISVALID_OFFSET UNITYSDK_OFFSET(0x998A90)
#define FOUNDATION_STATEMACHINE_PARAMETERID_NEWBOOL_OFFSET UNITYSDK_OFFSET(0x1FBA4BC0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_NEWFLOAT_OFFSET UNITYSDK_OFFSET(0x1FBA4BA0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_NEWINT_OFFSET UNITYSDK_OFFSET(0x1FBA4BB0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_NEWTRIGGER_OFFSET UNITYSDK_OFFSET(0x1FBA4BD0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_SETBOOL_OFFSET UNITYSDK_OFFSET(0x9989C0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x998A40)
#define FOUNDATION_STATEMACHINE_PARAMETERID_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x9989E0)
#define FOUNDATION_STATEMACHINE_PARAMETERID_SETINT_OFFSET UNITYSDK_OFFSET(0x998A00)
#define FOUNDATION_STATEMACHINE_PARAMETERID_TRIGGER_OFFSET UNITYSDK_OFFSET(0x998A20)
#define FOUNDATION_STATEMACHINE_PARAMETERID__CTOR_OFFSET UNITYSDK_OFFSET(0x998960)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterId_TypeDefinitionIndex = 8834;

	struct alignas(4) ParameterId
	{
		static ::Foundation::StateMachine::ParameterId* StaticGet_Null()
		{
			return (::Foundation::StateMachine::ParameterId*)Il2CppClass::FromTypeDefinitionIndex(ParameterId_TypeDefinitionIndex)->GetStaticField(0xF300);
		}
		::System::UInt16 _data; // 0x10

		::System::Void _ctor(::System::Byte index, ::Foundation::StateMachine::ParameterType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::Foundation::StateMachine::ParameterType))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID__CTOR_OFFSET))(this, index, type);
		}

		::System::Byte get_Index()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_GET_INDEX_OFFSET))(this);
		}

		::Foundation::StateMachine::ParameterType get_Type()
		{
			return ((::Foundation::StateMachine::ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_GET_ISFLOAT_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::Foundation::StateMachine::ParameterId other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::ParameterId))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Void SetBool(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> params, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_SETBOOL_OFFSET))(this, params, value);
		}

		::System::Void SetFloat(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> params, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_SETFLOAT_OFFSET))(this, params, value);
		}

		::System::Void SetInt(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> params, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_SETINT_OFFSET))(this, params, value);
		}

		::System::Void Trigger(::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> params)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_TRIGGER_OFFSET))(this, params);
		}

		::System::Void SetFloat_1(::System::Span_1_9011FAD97750D224<::Foundation::StateMachine::Parameter> params, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::Foundation::StateMachine::Parameter>, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_SETFLOAT_1_OFFSET))(this, params, value);
		}

		::System::Boolean IsValid(::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::StateMachine::Parameter> params)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_ISVALID_OFFSET))(this, params);
		}

		::System::Boolean IsValidFloat(::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::StateMachine::Parameter> params)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_ISVALIDFLOAT_OFFSET))(this, params);
		}

		/*
		static ::Foundation::StateMachine::ParameterId NewFloat(::System::Byte paramIndex)
		{
			return ((::Foundation::StateMachine::ParameterId(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_NEWFLOAT_OFFSET))(paramIndex);
		}
		*/

		/*
		static ::Foundation::StateMachine::ParameterId NewInt(::System::Byte paramId)
		{
			return ((::Foundation::StateMachine::ParameterId(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_NEWINT_OFFSET))(paramId);
		}
		*/

		/*
		static ::Foundation::StateMachine::ParameterId NewBool(::System::Byte paramId)
		{
			return ((::Foundation::StateMachine::ParameterId(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_NEWBOOL_OFFSET))(paramId);
		}
		*/

		/*
		static ::Foundation::StateMachine::ParameterId NewTrigger(::System::Byte paramId)
		{
			return ((::Foundation::StateMachine::ParameterId(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETERID_NEWTRIGGER_OFFSET))(paramId);
		}
		*/
	};
}
