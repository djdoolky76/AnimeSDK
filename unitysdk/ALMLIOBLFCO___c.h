#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAHBILOBJKI;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define ALMLIOBLFCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C86F6D0)
#define ALMLIOBLFCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C86F710)
#define ALMLIOBLFCO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C86F720)
#define ALMLIOBLFCO___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C86F750)

inline static constexpr unsigned int ALMLIOBLFCO___c_TypeDefinitionIndex = 42828;

	class ALMLIOBLFCO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26070);
		}

		static ::System::Func_1<::AAHBILOBJKI*>** StaticGet___9__0_1()
		{
			return (::System::Func_1<::AAHBILOBJKI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26078);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALMLIOBLFCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMLIOBLFCO___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ALMLIOBLFCO___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::AAHBILOBJKI* __ctor_b__0_1()
		{
			return ((::AAHBILOBJKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMLIOBLFCO___C___CTOR_B__0_1_OFFSET))(this);
		}

	};
