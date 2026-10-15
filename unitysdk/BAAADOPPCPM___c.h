#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNOGDAADPAF;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define BAAADOPPCPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8ADCD0)
#define BAAADOPPCPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ADD10)
#define BAAADOPPCPM___C___CTOR_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C8ADD20)
#define BAAADOPPCPM___C___CTOR_B__14_1_OFFSET UNITYSDK_OFFSET(0x1C8ADD50)

	class BAAADOPPCPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F8D0);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F8D8);
		}

		static ::System::Func_1<::KNOGDAADPAF*>** StaticGet___9__14_1()
		{
			return (::System::Func_1<::KNOGDAADPAF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAADOPPCPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__14_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + BAAADOPPCPM___C___CTOR_B__14_0_OFFSET))(this, a1);
		}

		::KNOGDAADPAF* __ctor_b__14_1()
		{
			return ((::KNOGDAADPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM___C___CTOR_B__14_1_OFFSET))(this);
		}

	};
