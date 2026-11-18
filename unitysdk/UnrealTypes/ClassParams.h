#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassConstructorDelegate; }
namespace UnrealTypes { class PropertyParamsBase; }

#define UNREALTYPES_CLASSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E900)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassParams_TypeDefinitionIndex = 27789;

	class ClassParams : public ::System::Object
	{
	public:
		::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* PropertyArray; // 0x10
		::System::Type* Type; // 0x18
		::System::String* Name; // 0x20
		::System::String* Namespace; // 0x28
		::System::Func_1<::UnrealTypes::Class*>* SuperFunc; // 0x30
		::UnrealTypes::ClassConstructorDelegate* Constructor; // 0x38
		::System::UInt32 TypeId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSPARAMS__CTOR_OFFSET))(this);
		}
	};
}
