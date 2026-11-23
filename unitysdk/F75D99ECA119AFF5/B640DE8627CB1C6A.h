#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class PropertyInfo; }

#define F75D99ECA119AFF5_B640DE8627CB1C6A_B289A02FE25AA33F_OFFSET UNITYSDK_OFFSET(0x41BF0E0)
#define F75D99ECA119AFF5_B640DE8627CB1C6A_B4053C356A48B17E_OFFSET UNITYSDK_OFFSET(0x4115000)
#define F75D99ECA119AFF5_B640DE8627CB1C6A_EFF227F6EF2E4894_OFFSET UNITYSDK_OFFSET(0x41BE780)
#define F75D99ECA119AFF5_B640DE8627CB1C6A_FEF0E2817D394A98_OFFSET UNITYSDK_OFFSET(0x41BF110)
#define F75D99ECA119AFF5_B640DE8627CB1C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

namespace F75D99ECA119AFF5
{
	inline static constexpr unsigned int B640DE8627CB1C6A_TypeDefinitionIndex = 20746;

	struct alignas(8) B640DE8627CB1C6A
	{
		::System::Reflection::PropertyInfo* E01418C0CA25E778; // 0x10

		::System::String* B4053C356A48B17E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_B640DE8627CB1C6A_B4053C356A48B17E_OFFSET))(this);
		}

		::System::Boolean B289A02FE25AA33F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_B640DE8627CB1C6A_B289A02FE25AA33F_OFFSET))(this);
		}

		::System::Type* FEF0E2817D394A98()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_B640DE8627CB1C6A_FEF0E2817D394A98_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* EFF227F6EF2E4894()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_B640DE8627CB1C6A_EFF227F6EF2E4894_OFFSET))(this);
		}

		::System::Void _ctor(::System::Reflection::PropertyInfo* F9DF2A4CF2AC2691)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + F75D99ECA119AFF5_B640DE8627CB1C6A__CTOR_OFFSET))(this, F9DF2A4CF2AC2691);
		}
	};
}
