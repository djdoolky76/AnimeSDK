#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE8AABA78431B7E8;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BE8AABA78431B7E8_F9C672B9F51FE770_E341A94D81F77A53_OFFSET UNITYSDK_OFFSET(0x2A25610)
#define BE8AABA78431B7E8_F9C672B9F51FE770_F2463808AD57AFEA_OFFSET UNITYSDK_OFFSET(0x2A253A0)
#define BE8AABA78431B7E8_F9C672B9F51FE770__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE8AABA78431B7E8_F9C672B9F51FE770_TypeDefinitionIndex = 15972;

class BE8AABA78431B7E8_F9C672B9F51FE770 : public ::System::Object
{
public:
	::BE8AABA78431B7E8* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* FC9BE2345F32022D; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_F9C672B9F51FE770__CTOR_OFFSET))(this);
	}

	::System::Void F2463808AD57AFEA(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_F9C672B9F51FE770_F2463808AD57AFEA_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void E341A94D81F77A53(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + BE8AABA78431B7E8_F9C672B9F51FE770_E341A94D81F77A53_OFFSET))(this, A6CAE7339066B0FB);
	}
};
