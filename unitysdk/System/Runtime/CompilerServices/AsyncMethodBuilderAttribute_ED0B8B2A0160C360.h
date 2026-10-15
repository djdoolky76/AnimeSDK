#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_ED0B8B2A0160C360_CTOR_OFFSET UNITYSDK_OFFSET(0x1F163A60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_ED0B8B2A0160C360_GET_BUILDERTYPE_OFFSET UNITYSDK_OFFSET(0x1F163A50)

namespace System::Runtime::CompilerServices
{
	class AsyncMethodBuilderAttribute_ED0B8B2A0160C360 : public ::System::Attribute
	{
	public:
		::System::Type* _BuilderType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_ED0B8B2A0160C360_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_BuilderType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_ED0B8B2A0160C360_GET_BUILDERTYPE_OFFSET))(this);
		}

	};
}
