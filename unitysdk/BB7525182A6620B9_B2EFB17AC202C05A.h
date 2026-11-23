#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B7AEA2525AE9E3EB;
class BB7525182A6620B9;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define BB7525182A6620B9_B2EFB17AC202C05A_B9DFA6FD1FD0B3B1_OFFSET UNITYSDK_OFFSET(0x39E4A30)
#define BB7525182A6620B9_B2EFB17AC202C05A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BB7525182A6620B9_B2EFB17AC202C05A_TypeDefinitionIndex = 12666;

class BB7525182A6620B9_B2EFB17AC202C05A : public ::System::Object
{
public:
	::B7AEA2525AE9E3EB* F9ADA718944F49ED; // 0x10
	::BB7525182A6620B9* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB7525182A6620B9_B2EFB17AC202C05A__CTOR_OFFSET))(this);
	}

	::System::Void B9DFA6FD1FD0B3B1(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + BB7525182A6620B9_B2EFB17AC202C05A_B9DFA6FD1FD0B3B1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
