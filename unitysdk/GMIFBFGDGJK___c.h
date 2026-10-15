#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define GMIFBFGDGJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C619850)
#define GMIFBFGDGJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C619890)
#define GMIFBFGDGJK___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C6198A0)
#define GMIFBFGDGJK___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C6198D0)

inline static constexpr unsigned int GMIFBFGDGJK___c_TypeDefinitionIndex = 37049;

	class GMIFBFGDGJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69A60);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69A68);
		}

		static ::System::Func_1<::IFBFJDCECML*>** StaticGet___9__1_1()
		{
			return (::System::Func_1<::IFBFJDCECML*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIFBFGDGJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIFBFGDGJK___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__1_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + GMIFBFGDGJK___C___CTOR_B__1_0_OFFSET))(this, a1);
		}

		::IFBFJDCECML* __ctor_b__1_1()
		{
			return ((::IFBFJDCECML*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIFBFGDGJK___C___CTOR_B__1_1_OFFSET))(this);
		}

	};
