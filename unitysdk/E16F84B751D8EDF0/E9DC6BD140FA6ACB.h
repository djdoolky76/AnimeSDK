#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define E16F84B751D8EDF0_E9DC6BD140FA6ACB__CTOR_OFFSET UNITYSDK_OFFSET(0x3EC8680)

namespace E16F84B751D8EDF0
{
	inline static constexpr unsigned int E9DC6BD140FA6ACB_TypeDefinitionIndex = 15090;

	class E9DC6BD140FA6ACB : public ::System::Object
	{
	public:
		::System::Boolean FD8AABF9F99C7141; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 B9D5DF8E14F55722; // 0x14

		::System::Void _ctor(::System::Boolean A3E26351629B9EF8, ::System::Int32 F7C821B2C74DE4BB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + E16F84B751D8EDF0_E9DC6BD140FA6ACB__CTOR_OFFSET))(this, A3E26351629B9EF8, F7C821B2C74DE4BB);
		}
	};
}
