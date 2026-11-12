#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EFODGECFLLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC13A70)
#define EFODGECFLLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC13AA0)
#define EFODGECFLLC___C___CTOR_B__197_0_OFFSET UNITYSDK_OFFSET(0x1DC13AB0)
#define EFODGECFLLC___C___CTOR_B__197_1_OFFSET UNITYSDK_OFFSET(0x1DC13AE0)

inline static constexpr unsigned int EFODGECFLLC___c_TypeDefinitionIndex = 43557;

	class EFODGECFLLC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__197_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F2D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F2D8);
		}

		static ::System::Func_1<::HIOEAKHGILF*>** StaticGet___9__197_1()
		{
			return (::System::Func_1<::HIOEAKHGILF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFODGECFLLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFODGECFLLC___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__197_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EFODGECFLLC___C___CTOR_B__197_0_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* __ctor_b__197_1()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFODGECFLLC___C___CTOR_B__197_1_OFFSET))(this);
		}

	};
