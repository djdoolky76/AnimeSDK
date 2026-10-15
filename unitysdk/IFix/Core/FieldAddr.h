#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define IFIX_CORE_FIELDADDR_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BCA10)

namespace IFix::Core
{
	class FieldAddr : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* FieldIdList; // 0x10
		::System::Object* Object; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_FIELDADDR_CTOR_OFFSET))(this);
		}

	};
}
