#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNLKNLJBHDD;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MOGEAODEJOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C722640)
#define MOGEAODEJOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C722680)
#define MOGEAODEJOD___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C722690)
#define MOGEAODEJOD___C___CTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C7226C0)

inline static constexpr unsigned int MOGEAODEJOD___c_TypeDefinitionIndex = 37039;

	class MOGEAODEJOD___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::HNLKNLJBHDD*>** StaticGet___9__5_1()
		{
			return (::System::Func_1<::HNLKNLJBHDD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162A8);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOGEAODEJOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__5_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + MOGEAODEJOD___C___CTOR_B__5_0_OFFSET))(this, a1);
		}

		::HNLKNLJBHDD* __ctor_b__5_1()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD___C___CTOR_B__5_1_OFFSET))(this);
		}

	};
