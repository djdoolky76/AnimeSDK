#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/UnrealTypes/FStructView.h"

namespace UnrealTypes { class Object; }
namespace UnrealTypes { class Struct; }

#define STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9A7E90)
#define STATETREECORE_STATETREEDATAVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define STATETREECORE_STATETREEDATAVIEW_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x359B10)
#define STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET UNITYSDK_OFFSET(0x359320)
#define STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FDFC5B0)
#define STATETREECORE_STATETREEDATAVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDFC640)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9A7EB0)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9A7F20)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9A7F30)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x610070)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataView_TypeDefinitionIndex = 31139;

	struct alignas(8) StateTreeDataView
	{
		static ::StateTreeCore::StateTreeDataView* StaticGet_Invalid()
		{
			return (::StateTreeCore::StateTreeDataView*)Il2CppClass::FromTypeDefinitionIndex(StateTreeDataView_TypeDefinitionIndex)->GetStaticField(0x7F30);
		}
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> _struct; // 0x10
		::PVOID _memory; // 0x18
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> _object; // 0x20

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> inStruct, ::PVOID inMemory, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> object)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET))(this, inStruct, inMemory, object);
		}

		::System::Void _ctor_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> inStruct, ::PVOID inMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_1_OFFSET))(this, inStruct, inMemory);
		}

		::System::Void _ctor_2(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> object)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_2_OFFSET))(this, object);
		}

		::System::Void _ctor_3(::UnrealTypes::FStructView& structView)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_3_OFFSET))(this, structView);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CCTOR_OFFSET))();
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> get_Struct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET))(this);
		}

		::PVOID get_Memory()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_MEMORY_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> get_Object()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_OBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::StateTreeDataView op_Implicit(::UnrealTypes::FStructView& structView)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET))(structView);
		}
		*/
	};
}
