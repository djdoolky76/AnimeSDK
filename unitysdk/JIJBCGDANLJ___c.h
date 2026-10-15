#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMGGIHEHJE;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define JIJBCGDANLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBA11A0)
#define JIJBCGDANLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA11E0)
#define JIJBCGDANLJ___C___CTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1CBA11F0)
#define JIJBCGDANLJ___C___CTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1CBA1220)

inline static constexpr unsigned int JIJBCGDANLJ___c_TypeDefinitionIndex = 42617;

	class JIJBCGDANLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A090);
		}

		static ::System::Func_1<::GHMGGIHEHJE*>** StaticGet___9__73_1()
		{
			return (::System::Func_1<::GHMGGIHEHJE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A098);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__73_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIJBCGDANLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__73_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + JIJBCGDANLJ___C___CTOR_B__73_0_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* __ctor_b__73_1()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ___C___CTOR_B__73_1_OFFSET))(this);
		}

	};
