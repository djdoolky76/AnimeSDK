#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBAPGAGNAK;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define DCBDMBEKAKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B270)
#define DCBDMBEKAKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B2B0)
#define DCBDMBEKAKN___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CA1B2C0)
#define DCBDMBEKAKN___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1CA1B2F0)

	class DCBDMBEKAKN___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::AEBAPGAGNAK*>** StaticGet___9__9_1()
		{
			return (::System::Func_1<::AEBAPGAGNAK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25740);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25748);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCBDMBEKAKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + DCBDMBEKAKN___C___CTOR_B__9_0_OFFSET))(this, a1);
		}

		::AEBAPGAGNAK* __ctor_b__9_1()
		{
			return ((::AEBAPGAGNAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN___C___CTOR_B__9_1_OFFSET))(this);
		}

	};
