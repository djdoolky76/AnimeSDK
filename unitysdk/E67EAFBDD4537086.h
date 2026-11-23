#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E02F67C4CDC31CF5;
class EBDA1E8754ACD9FC;
class FAE126BD5FE568DD;

#define E67EAFBDD4537086__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E67EAFBDD4537086_TypeDefinitionIndex = 8839;

class E67EAFBDD4537086 : public ::System::Object
{
public:
	::EBDA1E8754ACD9FC* A5803BC80FF52916; // 0x10
	::FAE126BD5FE568DD* A4B816EA7C01B52E; // 0x18
	::E02F67C4CDC31CF5* A77BA3D9EBDF03DC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E67EAFBDD4537086__CTOR_OFFSET))(this);
	}
};
