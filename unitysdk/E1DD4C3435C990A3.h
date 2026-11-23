#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define E1DD4C3435C990A3_EE0817A8BDBF98DE_OFFSET UNITYSDK_OFFSET(0x3BDC6A0)
#define E1DD4C3435C990A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E1DD4C3435C990A3_TypeDefinitionIndex = 11310;

class E1DD4C3435C990A3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1DD4C3435C990A3__CTOR_OFFSET))(this);
	}

	static ::System::Object* EE0817A8BDBF98DE(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + E1DD4C3435C990A3_EE0817A8BDBF98DE_OFFSET))(A288CB28FC2A6DA3);
	}
};
