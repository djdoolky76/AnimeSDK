#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F0163480421EF7C4;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F0163480421EF7C4_BF77F23C38792824_B7E41C99BFF3E57F_OFFSET UNITYSDK_OFFSET(0x3A44A50)
#define F0163480421EF7C4_BF77F23C38792824_F02C32356E80C7B2_OFFSET UNITYSDK_OFFSET(0x3A44C00)
#define F0163480421EF7C4_BF77F23C38792824__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0163480421EF7C4_BF77F23C38792824_TypeDefinitionIndex = 12942;

class F0163480421EF7C4_BF77F23C38792824 : public ::System::Object
{
public:
	::F0163480421EF7C4* A544919C800E2923; // 0x10
	::System::String* AF4717A1A80FD60F; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* B9B1D84977EC0563; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0163480421EF7C4_BF77F23C38792824__CTOR_OFFSET))(this);
	}

	::System::Void B7E41C99BFF3E57F(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F0163480421EF7C4_BF77F23C38792824_B7E41C99BFF3E57F_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F02C32356E80C7B2(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F0163480421EF7C4_BF77F23C38792824_F02C32356E80C7B2_OFFSET))(this, A6CAE7339066B0FB);
	}
};
