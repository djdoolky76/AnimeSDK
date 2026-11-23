#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F3DB4B0163654E75_EE1874ABA71ECE26_FC4133B633D5FE91_OFFSET UNITYSDK_OFFSET(0x399FE10)
#define F3DB4B0163654E75_EE1874ABA71ECE26__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3DB4B0163654E75_EE1874ABA71ECE26_TypeDefinitionIndex = 12533;

class F3DB4B0163654E75_EE1874ABA71ECE26 : public ::System::Object
{
public:
	::System::String* B631B6E41C6C1CCE; // 0x10
	::System::String* EAE5C1E2483CA606; // 0x18
	::System::String* EA90A0BE80D5603C; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3DB4B0163654E75_EE1874ABA71ECE26__CTOR_OFFSET))(this);
	}

	::System::Void FC4133B633D5FE91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3DB4B0163654E75_EE1874ABA71ECE26_FC4133B633D5FE91_OFFSET))(this);
	}
};
