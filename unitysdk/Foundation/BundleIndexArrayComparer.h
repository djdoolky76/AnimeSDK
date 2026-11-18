#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/BundleID.h"

#define FOUNDATION_BUNDLEINDEXARRAYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE94410)
#define FOUNDATION_BUNDLEINDEXARRAYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE944E0)
#define FOUNDATION_BUNDLEINDEXARRAYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE945E0)
#define FOUNDATION_BUNDLEINDEXARRAYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE945D0)

namespace Foundation
{
	inline static constexpr unsigned int BundleIndexArrayComparer_TypeDefinitionIndex = 8138;

	class BundleIndexArrayComparer : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_set()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BundleIndexArrayComparer_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXARRAYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXARRAYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::Il2CppArray<::Foundation::BundleID>* x, ::Il2CppArray<::Foundation::BundleID>* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Foundation::BundleID>*, ::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXARRAYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::Il2CppArray<::Foundation::BundleID>* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXARRAYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
