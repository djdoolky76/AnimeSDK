#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGDEHAHLHC;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define NLCIGKJKFNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C96F5B0)
#define NLCIGKJKFNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F5F0)
#define NLCIGKJKFNM___C___CTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1C96F600)
#define NLCIGKJKFNM___C___CTOR_B__27_1_OFFSET UNITYSDK_OFFSET(0x1C96F630)

	class NLCIGKJKFNM___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::DFGDEHAHLHC*>** StaticGet___9__27_1()
		{
			return (::System::Func_1<::DFGDEHAHLHC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59170);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59178);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLCIGKJKFNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCIGKJKFNM___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__27_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NLCIGKJKFNM___C___CTOR_B__27_0_OFFSET))(this, a1);
		}

		::DFGDEHAHLHC* __ctor_b__27_1()
		{
			return ((::DFGDEHAHLHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCIGKJKFNM___C___CTOR_B__27_1_OFFSET))(this);
		}

	};
