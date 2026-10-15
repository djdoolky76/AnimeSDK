#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AGENEONNBML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C587B20)
#define AGENEONNBML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C587B60)
#define AGENEONNBML___C__KICKUNCONNECTEDPLAYERS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1C587BD0)
#define AGENEONNBML___C___INITROBOT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C587B70)

	class AGENEONNBML___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55200);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55208);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGENEONNBML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __initRobot_b__8_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + AGENEONNBML___C___INITROBOT_B__8_0_OFFSET))(this, a1);
		}

		::System::String* _KickUnconnectedPlayers_b__13_0(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML___C__KICKUNCONNECTEDPLAYERS_B__13_0_OFFSET))(this, a1);
		}

	};
