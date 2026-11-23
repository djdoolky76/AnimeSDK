#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define FE79B68B7CF2ABFA_F5628F8349D4A8A6_BF63E8ED1468DA41_OFFSET UNITYSDK_OFFSET(0x3AAFE60)
#define FE79B68B7CF2ABFA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AB21F0)
#define FE79B68B7CF2ABFA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE79B68B7CF2ABFA_F5628F8349D4A8A6_TypeDefinitionIndex = 12076;

class FE79B68B7CF2ABFA_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FE79B68B7CF2ABFA_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FE79B68B7CF2ABFA_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FE79B68B7CF2ABFA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_F7DFF9791E601358()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(FE79B68B7CF2ABFA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FE79B68B7CF2ABFA_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE79B68B7CF2ABFA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BF63E8ED1468DA41(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + FE79B68B7CF2ABFA_F5628F8349D4A8A6_BF63E8ED1468DA41_OFFSET))(this, A6CAE7339066B0FB);
	}
};
