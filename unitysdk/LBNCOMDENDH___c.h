#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIFHOHCBMH;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define LBNCOMDENDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8DE9F0)
#define LBNCOMDENDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DEA30)
#define LBNCOMDENDH___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C8DEA40)
#define LBNCOMDENDH___C___CTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C8DEA70)

inline static constexpr unsigned int LBNCOMDENDH___c_TypeDefinitionIndex = 42633;

	class LBNCOMDENDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E270);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E278);
		}

		static ::System::Func_1<::LOIFHOHCBMH*>** StaticGet___9__5_1()
		{
			return (::System::Func_1<::LOIFHOHCBMH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBNCOMDENDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCOMDENDH___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__5_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + LBNCOMDENDH___C___CTOR_B__5_0_OFFSET))(this, a1);
		}

		::LOIFHOHCBMH* __ctor_b__5_1()
		{
			return ((::LOIFHOHCBMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCOMDENDH___C___CTOR_B__5_1_OFFSET))(this);
		}

	};
