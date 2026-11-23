#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BD6FE734563D21A0_F56E0B9690224385;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define BD6FE734563D21A0_FE1EA88D938E5163_F5A95C81A3B2F483_OFFSET UNITYSDK_OFFSET(0x3ADF9C0)
#define BD6FE734563D21A0_FE1EA88D938E5163__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD6FE734563D21A0_FE1EA88D938E5163_TypeDefinitionIndex = 12141;

class BD6FE734563D21A0_FE1EA88D938E5163 : public ::System::Object
{
public:
	::System::String* FACF1F0CFA8BEFCA; // 0x10
	::BD6FE734563D21A0_F56E0B9690224385* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD6FE734563D21A0_FE1EA88D938E5163__CTOR_OFFSET))(this);
	}

	::System::Void F5A95C81A3B2F483(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + BD6FE734563D21A0_FE1EA88D938E5163_F5A95C81A3B2F483_OFFSET))(this, A6CAE7339066B0FB);
	}
};
