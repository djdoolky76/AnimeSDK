#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class TypeName; }

#define SYSTEM_TYPENAMES_ATYPENAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1879A0)
#define SYSTEM_TYPENAMES_ATYPENAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C187910)
#define SYSTEM_TYPENAMES_ATYPENAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C187830)
#define SYSTEM_TYPENAMES_ATYPENAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C187880)

namespace System
{
	class TypeNames_ATypeName : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::TypeName* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TypeName*))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_EQUALS_1_OFFSET))(this, a1);
		}

	};
}
