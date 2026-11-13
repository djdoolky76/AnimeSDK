#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDBCIPCDIPC;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define IJLJFDAGJIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC368C0)
#define IJLJFDAGJIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC36900)
#define IJLJFDAGJIM___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1EC36910)
#define IJLJFDAGJIM___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1EC36940)

inline static constexpr unsigned int IJLJFDAGJIM___c_TypeDefinitionIndex = 43616;

	class IJLJFDAGJIM___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::PDBCIPCDIPC*>** StaticGet___9__9_1()
		{
			return (::System::Func_1<::PDBCIPCDIPC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40050);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40058);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJLJFDAGJIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLJFDAGJIM___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + IJLJFDAGJIM___C___CTOR_B__9_0_OFFSET))(this, a1);
		}

		::PDBCIPCDIPC* __ctor_b__9_1()
		{
			return ((::PDBCIPCDIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLJFDAGJIM___C___CTOR_B__9_1_OFFSET))(this);
		}

	};
