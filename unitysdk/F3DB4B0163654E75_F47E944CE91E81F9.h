#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_FE2CBCAA6ADCE589.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }

#define F3DB4B0163654E75_F47E944CE91E81F9_F42300D92D10CDAF_OFFSET UNITYSDK_OFFSET(0x399FD50)
#define F3DB4B0163654E75_F47E944CE91E81F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3DB4B0163654E75_F47E944CE91E81F9_TypeDefinitionIndex = 12532;

class F3DB4B0163654E75_F47E944CE91E81F9 : public ::System::Object
{
public:
	::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3DB4B0163654E75_F47E944CE91E81F9__CTOR_OFFSET))(this);
	}

	::System::Void F42300D92D10CDAF(::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589))((::PBYTE)hIl2Cpp + F3DB4B0163654E75_F47E944CE91E81F9_F42300D92D10CDAF_OFFSET))(this, E82293C0814051A5);
	}
};
