#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define LGHPKEAODPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0700)
#define LGHPKEAODPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0740)
#define LGHPKEAODPH___C___CTOR_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C8E0750)
#define LGHPKEAODPH___C___CTOR_B__11_1_OFFSET UNITYSDK_OFFSET(0x1C8E0780)

inline static constexpr unsigned int LGHPKEAODPH___c_TypeDefinitionIndex = 42560;

	class LGHPKEAODPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E8E0);
		}

		static ::System::Func_1<::AGCPAMNLCGN*>** StaticGet___9__11_1()
		{
			return (::System::Func_1<::AGCPAMNLCGN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E8E8);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGHPKEAODPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__11_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + LGHPKEAODPH___C___CTOR_B__11_0_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* __ctor_b__11_1()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH___C___CTOR_B__11_1_OFFSET))(this);
		}

	};
