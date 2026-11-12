#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define KDLFNBJAKLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA69BD0)
#define KDLFNBJAKLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69C10)
#define KDLFNBJAKLJ___C___CTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DA69C20)
#define KDLFNBJAKLJ___C___CTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x1DA69C50)

inline static constexpr unsigned int KDLFNBJAKLJ___c_TypeDefinitionIndex = 43592;

	class KDLFNBJAKLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46270);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46278);
		}

		static ::System::Func_1<::BCLKDMAHONE*>** StaticGet___9__43_1()
		{
			return (::System::Func_1<::BCLKDMAHONE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDLFNBJAKLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLFNBJAKLJ___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__43_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + KDLFNBJAKLJ___C___CTOR_B__43_0_OFFSET))(this, a1);
		}

		::BCLKDMAHONE* __ctor_b__43_1()
		{
			return ((::BCLKDMAHONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLFNBJAKLJ___C___CTOR_B__43_1_OFFSET))(this);
		}

	};
