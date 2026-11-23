#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class FieldInfo; }

#define F75D99ECA119AFF5_E16199BAF32C39F0_B289A02FE25AA33F_OFFSET UNITYSDK_OFFSET(0x41BE790)
#define F75D99ECA119AFF5_E16199BAF32C39F0_B4053C356A48B17E_OFFSET UNITYSDK_OFFSET(0x4115000)
#define F75D99ECA119AFF5_E16199BAF32C39F0_EFF227F6EF2E4894_OFFSET UNITYSDK_OFFSET(0x41BE780)
#define F75D99ECA119AFF5_E16199BAF32C39F0_FEF0E2817D394A98_OFFSET UNITYSDK_OFFSET(0x41BE7B0)
#define F75D99ECA119AFF5_E16199BAF32C39F0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

namespace F75D99ECA119AFF5
{
	inline static constexpr unsigned int E16199BAF32C39F0_TypeDefinitionIndex = 20762;

	struct alignas(8) E16199BAF32C39F0
	{
		::System::Reflection::FieldInfo* A30B120780CDC8D6; // 0x10

		::System::Type* FEF0E2817D394A98()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_E16199BAF32C39F0_FEF0E2817D394A98_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* EFF227F6EF2E4894()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_E16199BAF32C39F0_EFF227F6EF2E4894_OFFSET))(this);
		}

		::System::Boolean B289A02FE25AA33F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_E16199BAF32C39F0_B289A02FE25AA33F_OFFSET))(this);
		}

		::System::String* B4053C356A48B17E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_E16199BAF32C39F0_B4053C356A48B17E_OFFSET))(this);
		}

		::System::Void _ctor(::System::Reflection::FieldInfo* F53F0BA7D82AE551)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_E16199BAF32C39F0__CTOR_OFFSET))(this, F53F0BA7D82AE551);
		}
	};
}
