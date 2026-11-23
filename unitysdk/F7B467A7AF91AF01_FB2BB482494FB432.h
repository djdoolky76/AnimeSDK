#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F7B467A7AF91AF01;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace System { class String; }

#define F7B467A7AF91AF01_FB2BB482494FB432_B9FB022122C21B31_OFFSET UNITYSDK_OFFSET(0x3924380)
#define F7B467A7AF91AF01_FB2BB482494FB432__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7B467A7AF91AF01_FB2BB482494FB432_TypeDefinitionIndex = 12340;

class F7B467A7AF91AF01_FB2BB482494FB432 : public ::System::Object
{
public:
	::F7B467A7AF91AF01* A544919C800E2923; // 0x10
	::MiHoYo::SDK::Win::PayPlatInfoModel* B4D01DAD86B6DEF4; // 0x18
	::System::String* F0F8EF5529D9B6EF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7B467A7AF91AF01_FB2BB482494FB432__CTOR_OFFSET))(this);
	}

	::System::Void B9FB022122C21B31(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F7B467A7AF91AF01_FB2BB482494FB432_B9FB022122C21B31_OFFSET))(this, A6CAE7339066B0FB);
	}
};
