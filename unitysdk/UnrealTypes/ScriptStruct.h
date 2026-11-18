#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/Struct.h"
#include "unitysdk/UnrealTypes/StructFlags.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_SCRIPTSTRUCT_COPYSCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E2A7C80)
#define UNREALTYPES_SCRIPTSTRUCT_DESTROYSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E2A78C0)
#define UNREALTYPES_SCRIPTSTRUCT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2B2C90)
#define UNREALTYPES_SCRIPTSTRUCT_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B6D20)
#define UNREALTYPES_SCRIPTSTRUCT_GET_STRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1E2A7C30)
#define UNREALTYPES_SCRIPTSTRUCT_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B6D10)
#define UNREALTYPES_SCRIPTSTRUCT_INITIALIZESTRUCT_OFFSET UNITYSDK_OFFSET(0x1E2A8500)
#define UNREALTYPES_SCRIPTSTRUCT_LINK_OFFSET UNITYSDK_OFFSET(0x1E2B6810)
#define UNREALTYPES_SCRIPTSTRUCT_PREPARECPPSTRUCTOPS_OFFSET UNITYSDK_OFFSET(0x1E29ED40)
#define UNREALTYPES_SCRIPTSTRUCT_RESETSCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E2A8080)
#define UNREALTYPES_SCRIPTSTRUCT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B2BF0)
#define UNREALTYPES_SCRIPTSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29ED30)

namespace UnrealTypes
{
	inline static constexpr unsigned int ScriptStruct_TypeDefinitionIndex = 27741;

	class ScriptStruct : public ::UnrealTypes::Struct
	{
	public:
		::System::Object* VirtualProxy; // 0x70
		::UnrealTypes::ICppStructOps* CppStructOps; // 0x78
		::UnrealTypes::StructFlags StructFlags; // 0x80

		::System::Void _ctor(::UnrealTypes::Object* outer, ::System::String* name, ::System::UInt32 typeId)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT__CTOR_OFFSET))(this, outer, name, typeId);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT__CTOR_1_OFFSET))(this, initializer);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_StructHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_GET_STRUCTHANDLE_OFFSET))(this);
		}

		::System::Void PrepareCppStructOps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_PREPARECPPSTRUCTOPS_OFFSET))(this);
		}

		::System::Void Link(::System::Boolean relinkExistingProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_LINK_OFFSET))(this, relinkExistingProperties);
		}

		::System::Void InitializeStruct(::PVOID dest, ::Unity::Collections::Allocator allocator, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_INITIALIZESTRUCT_OFFSET))(this, dest, allocator, arrayDim);
		}

		::System::Void DestroyStruct(::PVOID dest, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_DESTROYSTRUCT_OFFSET))(this, dest, arrayDim);
		}

		::System::Void CopyScriptStruct(::PVOID dest, ::PVOID src, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_COPYSCRIPTSTRUCT_OFFSET))(this, dest, src, arrayDim);
		}

		::System::Void ResetScriptStruct(::PVOID dest, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_RESETSCRIPTSTRUCT_OFFSET))(this, dest, arrayDim);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
