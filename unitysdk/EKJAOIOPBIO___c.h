#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFHNDMENDHI;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EKJAOIOPBIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4F6980)
#define EKJAOIOPBIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F69C0)
#define EKJAOIOPBIO___C___CTOR_B__476_0_OFFSET UNITYSDK_OFFSET(0x1F4F69D0)
#define EKJAOIOPBIO___C___CTOR_B__476_1_OFFSET UNITYSDK_OFFSET(0x1F4F6A00)

inline static constexpr unsigned int EKJAOIOPBIO___c_TypeDefinitionIndex = 43578;

	class EKJAOIOPBIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28C80);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__476_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28C88);
		}

		static ::System::Func_1<::EFHNDMENDHI*>** StaticGet___9__476_1()
		{
			return (::System::Func_1<::EFHNDMENDHI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKJAOIOPBIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJAOIOPBIO___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__476_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EKJAOIOPBIO___C___CTOR_B__476_0_OFFSET))(this, a1);
		}

		::EFHNDMENDHI* __ctor_b__476_1()
		{
			return ((::EFHNDMENDHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJAOIOPBIO___C___CTOR_B__476_1_OFFSET))(this);
		}

	};
