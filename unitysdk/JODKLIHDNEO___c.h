#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFPPGOFECMH;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define JODKLIHDNEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB792E0)
#define JODKLIHDNEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB79320)
#define JODKLIHDNEO___C___CTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1CB79330)
#define JODKLIHDNEO___C___CTOR_B__18_1_OFFSET UNITYSDK_OFFSET(0x1CB79360)

inline static constexpr unsigned int JODKLIHDNEO___c_TypeDefinitionIndex = 42606;

	class JODKLIHDNEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46EE0);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46EE8);
		}

		static ::System::Func_1<::NFPPGOFECMH*>** StaticGet___9__18_1()
		{
			return (::System::Func_1<::NFPPGOFECMH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JODKLIHDNEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODKLIHDNEO___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__18_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + JODKLIHDNEO___C___CTOR_B__18_0_OFFSET))(this, a1);
		}

		::NFPPGOFECMH* __ctor_b__18_1()
		{
			return ((::NFPPGOFECMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODKLIHDNEO___C___CTOR_B__18_1_OFFSET))(this);
		}

	};
