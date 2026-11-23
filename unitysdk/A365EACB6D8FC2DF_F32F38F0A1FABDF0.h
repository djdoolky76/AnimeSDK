#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define A365EACB6D8FC2DF_F32F38F0A1FABDF0_B31F224BA05CB276_OFFSET UNITYSDK_OFFSET(0x17D8700)
#define A365EACB6D8FC2DF_F32F38F0A1FABDF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A365EACB6D8FC2DF_F32F38F0A1FABDF0_TypeDefinitionIndex = 1005;

class A365EACB6D8FC2DF_F32F38F0A1FABDF0 : public ::System::Object
{
public:
	::System::Action* B8553DC7C901A1F1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A365EACB6D8FC2DF_F32F38F0A1FABDF0__CTOR_OFFSET))(this);
	}

	::System::Void B31F224BA05CB276(::System::Boolean B9071C2364AEB939)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A365EACB6D8FC2DF_F32F38F0A1FABDF0_B31F224BA05CB276_OFFSET))(this, B9071C2364AEB939);
	}
};
