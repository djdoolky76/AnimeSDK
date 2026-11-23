#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EF9914625B6F8A9E.h"

namespace System { class String; }

#define F1CBE80DE2ABB0BD_A4935396E1E3BBFF_A417F6B6D39E6A2C_OFFSET UNITYSDK_OFFSET(0x39E3BC0)
#define F1CBE80DE2ABB0BD_A4935396E1E3BBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1CBE80DE2ABB0BD_A4935396E1E3BBFF_TypeDefinitionIndex = 12711;

class F1CBE80DE2ABB0BD_A4935396E1E3BBFF : public ::System::Object
{
public:
	::System::String* F6F65432752D196E; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1CBE80DE2ABB0BD_A4935396E1E3BBFF__CTOR_OFFSET))(this);
	}

	::System::Boolean A417F6B6D39E6A2C(::EF9914625B6F8A9E BBCFEC7DB309E927)
	{
		return ((::System::Boolean(*)(::PVOID, ::EF9914625B6F8A9E))((::PBYTE)hIl2Cpp + F1CBE80DE2ABB0BD_A4935396E1E3BBFF_A417F6B6D39E6A2C_OFFSET))(this, BBCFEC7DB309E927);
	}
};
