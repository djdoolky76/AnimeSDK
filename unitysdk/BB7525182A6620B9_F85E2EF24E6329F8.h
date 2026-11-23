#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB7525182A6620B9;
class BF92C07763D42152;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define BB7525182A6620B9_F85E2EF24E6329F8_E16EA8EE367F649F_OFFSET UNITYSDK_OFFSET(0x39E4860)
#define BB7525182A6620B9_F85E2EF24E6329F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BB7525182A6620B9_F85E2EF24E6329F8_TypeDefinitionIndex = 12665;

class BB7525182A6620B9_F85E2EF24E6329F8 : public ::System::Object
{
public:
	::BF92C07763D42152* F9ADA718944F49ED; // 0x10
	::BB7525182A6620B9* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB7525182A6620B9_F85E2EF24E6329F8__CTOR_OFFSET))(this);
	}

	::System::Void E16EA8EE367F649F(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + BB7525182A6620B9_F85E2EF24E6329F8_E16EA8EE367F649F_OFFSET))(this, A6CAE7339066B0FB);
	}
};
