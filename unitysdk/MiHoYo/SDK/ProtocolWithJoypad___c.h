#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class ProtocolWithJoypad; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOCOLWITHJOYPAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0A00)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0A40)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__SHOW_B__42_0_OFFSET UNITYSDK_OFFSET(0x1BFC0A50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolWithJoypad___c_TypeDefinitionIndex = 8029;

	class ProtocolWithJoypad___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__42_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1C820);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1C828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__42_0(::MiHoYo::SDK::ProtocolWithJoypad* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolWithJoypad*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD___C__SHOW_B__42_0_OFFSET))(this, a1);
		}

	};
}
