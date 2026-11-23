#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F4615327B51486C9;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F4615327B51486C9_A6B312F8B081C752_B7E41C99BFF3E57F_OFFSET UNITYSDK_OFFSET(0x39CCDB0)
#define F4615327B51486C9_A6B312F8B081C752_F02C32356E80C7B2_OFFSET UNITYSDK_OFFSET(0x39CCF60)
#define F4615327B51486C9_A6B312F8B081C752__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4615327B51486C9_A6B312F8B081C752_TypeDefinitionIndex = 12606;

class F4615327B51486C9_A6B312F8B081C752 : public ::System::Object
{
public:
	::F4615327B51486C9* A544919C800E2923; // 0x10
	::System::String* AF4717A1A80FD60F; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* B9B1D84977EC0563; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4615327B51486C9_A6B312F8B081C752__CTOR_OFFSET))(this);
	}

	::System::Void B7E41C99BFF3E57F(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F4615327B51486C9_A6B312F8B081C752_B7E41C99BFF3E57F_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F02C32356E80C7B2(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F4615327B51486C9_A6B312F8B081C752_F02C32356E80C7B2_OFFSET))(this, A6CAE7339066B0FB);
	}
};
