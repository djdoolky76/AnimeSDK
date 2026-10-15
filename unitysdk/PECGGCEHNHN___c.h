#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPCKCJDCNFM;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define PECGGCEHNHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C97C7B0)
#define PECGGCEHNHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C97C7F0)
#define PECGGCEHNHN___C___CTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1C97C800)
#define PECGGCEHNHN___C___CTOR_B__27_1_OFFSET UNITYSDK_OFFSET(0x1C97C830)

inline static constexpr unsigned int PECGGCEHNHN___c_TypeDefinitionIndex = 42625;

	class PECGGCEHNHN___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::HPCKCJDCNFM*>** StaticGet___9__27_1()
		{
			return (::System::Func_1<::HPCKCJDCNFM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59630);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59638);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PECGGCEHNHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECGGCEHNHN___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__27_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + PECGGCEHNHN___C___CTOR_B__27_0_OFFSET))(this, a1);
		}

		::HPCKCJDCNFM* __ctor_b__27_1()
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECGGCEHNHN___C___CTOR_B__27_1_OFFSET))(this);
		}

	};
