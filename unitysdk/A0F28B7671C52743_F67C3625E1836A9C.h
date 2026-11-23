#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class AB74579FB18469C1_GeetestModel;
namespace MiHoYo::SDK { class GeetestView; }
namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_F67C3625E1836A9C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A0F28B7671C52743_F67C3625E1836A9C__CTOR_OFFSET UNITYSDK_OFFSET(0x2978430)

inline static constexpr unsigned int A0F28B7671C52743_F67C3625E1836A9C_TypeDefinitionIndex = 12808;

class A0F28B7671C52743_F67C3625E1836A9C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F67C3625E1836A9C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::MiHoYo::SDK::GeetestView* F45A155F61126DA2, ::System::String* B960AC235824C6C8, ::AB74579FB18469C1_GeetestModel* B0FECCBCFDE884E1)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::AB74579FB18469C1_GeetestModel*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F67C3625E1836A9C_INVOKE_OFFSET))(this, F45A155F61126DA2, B960AC235824C6C8, B0FECCBCFDE884E1);
	}
};
