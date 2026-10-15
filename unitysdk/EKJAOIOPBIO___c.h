#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFHNDMENDHI;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EKJAOIOPBIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA32DD0)
#define EKJAOIOPBIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA32E10)
#define EKJAOIOPBIO___C___CTOR_B__476_0_OFFSET UNITYSDK_OFFSET(0x1CA32E20)
#define EKJAOIOPBIO___C___CTOR_B__476_1_OFFSET UNITYSDK_OFFSET(0x1CA32E50)

inline static constexpr unsigned int EKJAOIOPBIO___c_TypeDefinitionIndex = 42599;

	class EKJAOIOPBIO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__476_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38380);
		}

		static ::System::Func_1<::EFHNDMENDHI*>** StaticGet___9__476_1()
		{
			return (::System::Func_1<::EFHNDMENDHI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38388);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38390);
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
