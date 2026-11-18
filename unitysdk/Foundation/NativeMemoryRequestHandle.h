#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/NativeMemoryBlob.h"

namespace Foundation { class NativeMemory; }

#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x676690)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1FBA43F0)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE_RESOLVEBLOB_OFFSET UNITYSDK_OFFSET(0x998410)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBA4770)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryRequestHandle_TypeDefinitionIndex = 8875;

	struct alignas(4) NativeMemoryRequestHandle
	{
		static ::Foundation::NativeMemoryRequestHandle* StaticGet_Null()
		{
			return (::Foundation::NativeMemoryRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NativeMemoryRequestHandle_TypeDefinitionIndex)->GetStaticField(0x3B00);
		}
		::System::UInt64 _allocatorId; // 0x10
		::System::UInt64 _requestId; // 0x18

		::System::Void _ctor(::System::UInt64 allocatorId, ::System::UInt64 requestId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CTOR_OFFSET))(this, allocatorId, requestId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean op_Equality(::Foundation::NativeMemoryRequestHandle left, ::Foundation::NativeMemoryRequestHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE_GET_ISNULL_OFFSET))(this);
		}

		::Foundation::NativeMemoryBlob ResolveBlob(::Foundation::NativeMemory* memory)
		{
			return ((::Foundation::NativeMemoryBlob(*)(::PVOID, ::Foundation::NativeMemory*))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE_RESOLVEBLOB_OFFSET))(this, memory);
		}
	};
}
