#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5530)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CHECKENTITLEMENTS_B__23_1_OFFSET UNITYSDK_OFFSET(0x1DEC5580)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5570)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic___c_TypeDefinitionIndex = 19808;

	class HoYoChannelEpic___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelEpic___c_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__23_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelEpic___c_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CTOR_OFFSET))(this);
		}

		::System::Void _CheckEntitlements_b__23_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CHECKENTITLEMENTS_B__23_1_OFFSET))(this, response);
		}
	};
}
