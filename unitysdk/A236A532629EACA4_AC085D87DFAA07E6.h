#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A236A532629EACA4_AC085D87DFAA07E6_F39A5C6924DC6F65_OFFSET UNITYSDK_OFFSET(0x39539B0)
#define A236A532629EACA4_AC085D87DFAA07E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A236A532629EACA4_AC085D87DFAA07E6_TypeDefinitionIndex = 12428;

class A236A532629EACA4_AC085D87DFAA07E6 : public ::System::Object
{
public:
	::System::String* BC39742B384E6AC5; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A236A532629EACA4_AC085D87DFAA07E6__CTOR_OFFSET))(this);
	}

	::System::Void F39A5C6924DC6F65(::System::Int32 AB46D6A196F8FF64, ::System::String* A9DC260775AB80C3, ::System::Int32 FEB1DB7035CB3236)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A236A532629EACA4_AC085D87DFAA07E6_F39A5C6924DC6F65_OFFSET))(this, AB46D6A196F8FF64, A9DC260775AB80C3, FEB1DB7035CB3236);
	}
};
