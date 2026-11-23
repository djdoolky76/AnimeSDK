#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F0163480421EF7C4;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define F0163480421EF7C4_EE868FA103CB3E19_A28595C1AD48B89A_OFFSET UNITYSDK_OFFSET(0x3A42A30)
#define F0163480421EF7C4_EE868FA103CB3E19_B7E166C27C202873_OFFSET UNITYSDK_OFFSET(0x3A42CD0)
#define F0163480421EF7C4_EE868FA103CB3E19__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0163480421EF7C4_EE868FA103CB3E19_TypeDefinitionIndex = 12943;

class F0163480421EF7C4_EE868FA103CB3E19 : public ::System::Object
{
public:
	::F0163480421EF7C4* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* ED83B7B8FFFB07F1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0163480421EF7C4_EE868FA103CB3E19__CTOR_OFFSET))(this);
	}

	::System::Void A28595C1AD48B89A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F0163480421EF7C4_EE868FA103CB3E19_A28595C1AD48B89A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void B7E166C27C202873(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F0163480421EF7C4_EE868FA103CB3E19_B7E166C27C202873_OFFSET))(this, A6CAE7339066B0FB);
	}
};
