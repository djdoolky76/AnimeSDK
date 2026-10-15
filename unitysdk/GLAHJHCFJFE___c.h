#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIGNHFBMPAD;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define GLAHJHCFJFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6467D0)
#define GLAHJHCFJFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C646810)
#define GLAHJHCFJFE___C___CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C646820)
#define GLAHJHCFJFE___C___CTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C646850)

	class GLAHJHCFJFE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CDA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CDA8);
		}

		static ::System::Func_1<::JIGNHFBMPAD*>** StaticGet___9__6_1()
		{
			return (::System::Func_1<::JIGNHFBMPAD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLAHJHCFJFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__6_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + GLAHJHCFJFE___C___CTOR_B__6_0_OFFSET))(this, a1);
		}

		::JIGNHFBMPAD* __ctor_b__6_1()
		{
			return ((::JIGNHFBMPAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE___C___CTOR_B__6_1_OFFSET))(this);
		}

	};
