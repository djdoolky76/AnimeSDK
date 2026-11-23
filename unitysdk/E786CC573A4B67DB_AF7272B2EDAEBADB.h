#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E786CC573A4B67DB;
namespace MiHoYo::SDK { class LoginDataModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { template <typename T> class Action_1; }

#define E786CC573A4B67DB_AF7272B2EDAEBADB_B5A09CDFD9A855DD_OFFSET UNITYSDK_OFFSET(0x3A5D100)
#define E786CC573A4B67DB_AF7272B2EDAEBADB_F2D0B53C6AD99DFB_OFFSET UNITYSDK_OFFSET(0x3A5CFC0)
#define E786CC573A4B67DB_AF7272B2EDAEBADB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E786CC573A4B67DB_AF7272B2EDAEBADB_TypeDefinitionIndex = 12979;

class E786CC573A4B67DB_AF7272B2EDAEBADB : public ::System::Object
{
public:
	::E786CC573A4B67DB* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E786CC573A4B67DB_AF7272B2EDAEBADB__CTOR_OFFSET))(this);
	}

	::System::Void F2D0B53C6AD99DFB(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E786CC573A4B67DB_AF7272B2EDAEBADB_F2D0B53C6AD99DFB_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void B5A09CDFD9A855DD(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E786CC573A4B67DB_AF7272B2EDAEBADB_B5A09CDFD9A855DD_OFFSET))(this, A6CAE7339066B0FB);
	}
};
