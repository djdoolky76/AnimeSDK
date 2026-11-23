#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define E2C0F4BBD584E55F_F5628F8349D4A8A6_F285BC82E4A1E9D7_OFFSET UNITYSDK_OFFSET(0x3A42080)
#define E2C0F4BBD584E55F_F5628F8349D4A8A6_F5A6CAAC6EEDCC38_OFFSET UNITYSDK_OFFSET(0x3A420E0)
#define E2C0F4BBD584E55F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A45040)
#define E2C0F4BBD584E55F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2C0F4BBD584E55F_F5628F8349D4A8A6_TypeDefinitionIndex = 12963;

class E2C0F4BBD584E55F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E2C0F4BBD584E55F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E2C0F4BBD584E55F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E2C0F4BBD584E55F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_F2C54999C1BBBACC()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(E2C0F4BBD584E55F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::FF1237522147A967*, ::MiHoYo::SDK::Win::NewDeviceInfoModel*>** StaticGet_BFC2B29B610F5A11()
	{
		return (::System::Func_2<::FF1237522147A967*, ::MiHoYo::SDK::Win::NewDeviceInfoModel*>**)Il2CppClass::FromTypeDefinitionIndex(E2C0F4BBD584E55F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F5A6CAAC6EEDCC38(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F5628F8349D4A8A6_F5A6CAAC6EEDCC38_OFFSET))(this, A6CAE7339066B0FB);
	}

	::MiHoYo::SDK::Win::NewDeviceInfoModel* F285BC82E4A1E9D7(::FF1237522147A967* B9AD68262157E9E0)
	{
		return ((::MiHoYo::SDK::Win::NewDeviceInfoModel*(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F5628F8349D4A8A6_F285BC82E4A1E9D7_OFFSET))(this, B9AD68262157E9E0);
	}
};
