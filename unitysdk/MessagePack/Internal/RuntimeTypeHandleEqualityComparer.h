#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD34C90)
#define MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD34C60)
#define MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD34C70)
#define MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD34C80)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int RuntimeTypeHandleEqualityComparer_TypeDefinitionIndex = 7310;

	class RuntimeTypeHandleEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::RuntimeTypeHandle>** StaticGet_Default()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::RuntimeTypeHandle>**)UnitySDK::FromName("MessagePack.Internal", "RuntimeTypeHandleEqualityComparer")->GetStaticField(0x4AE80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RUNTIMETYPEHANDLEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
