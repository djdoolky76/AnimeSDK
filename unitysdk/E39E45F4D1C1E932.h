#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E9CA687A6DD171BF;
namespace System { class String; }

#define E39E45F4D1C1E932_E3D5C117772A8041_OFFSET UNITYSDK_OFFSET(0x1925A50)
#define E39E45F4D1C1E932__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E39E45F4D1C1E932_TypeDefinitionIndex = 8287;

class E39E45F4D1C1E932 : public ::System::Object
{
public:
	::E9CA687A6DD171BF* A4CC893203997F6C; // 0x10
	::System::Boolean B4C639C5FA574CA0; // 0x18
	::System::Boolean B40BD93F6E290FC6; // 0x19
	::System::Byte _padding0[0x6];
	::System::String* B6EB09EB11421483; // 0x20
	::System::Boolean BACBB27B01ACCFB1; // 0x28

	::System::Void E3D5C117772A8041(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E39E45F4D1C1E932_E3D5C117772A8041_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E39E45F4D1C1E932__CTOR_OFFSET))(this);
	}
};
