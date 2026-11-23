#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define ADCFB24C31640F62_F5628F8349D4A8A6_EFA61DE027966A49_OFFSET UNITYSDK_OFFSET(0x3A42000)
#define ADCFB24C31640F62_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A44F60)
#define ADCFB24C31640F62_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCFB24C31640F62_F5628F8349D4A8A6_TypeDefinitionIndex = 12960;

class ADCFB24C31640F62_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ADCFB24C31640F62_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ADCFB24C31640F62_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ADCFB24C31640F62_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_B3B5BB714B5D4029()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ADCFB24C31640F62_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADCFB24C31640F62_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void EFA61DE027966A49(::MiHoYo::SDK::NetworkResponseModel* E0BB02EDCCFC0E4E)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_F5628F8349D4A8A6_EFA61DE027966A49_OFFSET))(this, E0BB02EDCCFC0E4E);
	}
};
