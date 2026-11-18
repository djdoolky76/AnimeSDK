#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class AnonymousStorey; }
namespace System { class Type; }

#define IFIX_CORE_FIELDADDR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E413B20)

namespace IFix::Core
{
	inline static constexpr unsigned int FieldAddr_TypeDefinitionIndex = 6958;

	class FieldAddr : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* FieldIdList; // 0x10
		::System::Type* AnonFieldType; // 0x18
		::IFix::Core::AnonymousStorey* AnonStorey; // 0x20
		::System::Object* Object; // 0x28
		::System::Int32 AnonFieldIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_FIELDADDR__CTOR_OFFSET))(this);
		}
	};
}
