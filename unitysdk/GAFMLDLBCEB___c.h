#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define GAFMLDLBCEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA77910)
#define GAFMLDLBCEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA77950)
#define GAFMLDLBCEB___C___CTOR_B__143_0_OFFSET UNITYSDK_OFFSET(0x1CA77960)
#define GAFMLDLBCEB___C___CTOR_B__143_1_OFFSET UNITYSDK_OFFSET(0x1CA77990)

	class GAFMLDLBCEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32150);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__143_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32158);
		}

		static ::System::Func_1<::INMMPMDELKE*>** StaticGet___9__143_1()
		{
			return (::System::Func_1<::INMMPMDELKE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAFMLDLBCEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFMLDLBCEB___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__143_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + GAFMLDLBCEB___C___CTOR_B__143_0_OFFSET))(this, a1);
		}

		::INMMPMDELKE* __ctor_b__143_1()
		{
			return ((::INMMPMDELKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFMLDLBCEB___C___CTOR_B__143_1_OFFSET))(this);
		}

	};
