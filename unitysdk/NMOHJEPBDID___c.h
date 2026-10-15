#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGDKLEKKDLC;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define NMOHJEPBDID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C945190)
#define NMOHJEPBDID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9451D0)
#define NMOHJEPBDID___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C9451E0)
#define NMOHJEPBDID___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1C945210)

inline static constexpr unsigned int NMOHJEPBDID___c_TypeDefinitionIndex = 42641;

	class NMOHJEPBDID___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::LGDKLEKKDLC*>** StaticGet___9__9_1()
		{
			return (::System::Func_1<::LGDKLEKKDLC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54ED0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54ED8);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOHJEPBDID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOHJEPBDID___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NMOHJEPBDID___C___CTOR_B__9_0_OFFSET))(this, a1);
		}

		::LGDKLEKKDLC* __ctor_b__9_1()
		{
			return ((::LGDKLEKKDLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOHJEPBDID___C___CTOR_B__9_1_OFFSET))(this);
		}

	};
