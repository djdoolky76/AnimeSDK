#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define OMNJCDDMLHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9710C0)
#define OMNJCDDMLHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C971100)
#define OMNJCDDMLHI___C___CTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C971110)
#define OMNJCDDMLHI___C___CTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x1C971140)

inline static constexpr unsigned int OMNJCDDMLHI___c_TypeDefinitionIndex = 42564;

	class OMNJCDDMLHI___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::ALMFLCJCHKP*>** StaticGet___9__43_1()
		{
			return (::System::Func_1<::ALMFLCJCHKP*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57820);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57828);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNJCDDMLHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNJCDDMLHI___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__43_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OMNJCDDMLHI___C___CTOR_B__43_0_OFFSET))(this, a1);
		}

		::ALMFLCJCHKP* __ctor_b__43_1()
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNJCDDMLHI___C___CTOR_B__43_1_OFFSET))(this);
		}

	};
