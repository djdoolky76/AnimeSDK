#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define JMHHBMNIJJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD74A00)
#define JMHHBMNIJJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD74A40)
#define JMHHBMNIJJB___C___CTOR_B__137_0_OFFSET UNITYSDK_OFFSET(0x1DD74A50)
#define JMHHBMNIJJB___C___CTOR_B__137_1_OFFSET UNITYSDK_OFFSET(0x1DD74A80)

inline static constexpr unsigned int JMHHBMNIJJB___c_TypeDefinitionIndex = 43553;

	class JMHHBMNIJJB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__137_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42680);
		}

		static ::System::Func_1<::LPHINGPIEAJ*>** StaticGet___9__137_1()
		{
			return (::System::Func_1<::LPHINGPIEAJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42688);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMHHBMNIJJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHHBMNIJJB___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__137_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + JMHHBMNIJJB___C___CTOR_B__137_0_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* __ctor_b__137_1()
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHHBMNIJJB___C___CTOR_B__137_1_OFFSET))(this);
		}

	};
