#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF570DE77A1AA974;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FF570DE77A1AA974_F5FAB9019950FA94_ACB6EC3E2AA37FEA_OFFSET UNITYSDK_OFFSET(0x3A7F510)
#define FF570DE77A1AA974_F5FAB9019950FA94_ADB9A1BBD641FFC3_OFFSET UNITYSDK_OFFSET(0x3A7EEB0)
#define FF570DE77A1AA974_F5FAB9019950FA94_B90F2B94BE144545_OFFSET UNITYSDK_OFFSET(0x3A7EE30)
#define FF570DE77A1AA974_F5FAB9019950FA94__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF570DE77A1AA974_F5FAB9019950FA94_TypeDefinitionIndex = 11934;

class FF570DE77A1AA974_F5FAB9019950FA94 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
	::FF570DE77A1AA974* A544919C800E2923; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E64C279F75234074; // 0x20
	::System::Action_1<::System::String*>* FC1BFCAB993D006C; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_F5FAB9019950FA94__CTOR_OFFSET))(this);
	}

	::System::Void B90F2B94BE144545(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_F5FAB9019950FA94_B90F2B94BE144545_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void ADB9A1BBD641FFC3(::System::String* A659FB88768169A1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_F5FAB9019950FA94_ADB9A1BBD641FFC3_OFFSET))(this, A659FB88768169A1);
	}

	::System::Void ACB6EC3E2AA37FEA(::System::String* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_F5FAB9019950FA94_ACB6EC3E2AA37FEA_OFFSET))(this, A6CAE7339066B0FB);
	}
};
