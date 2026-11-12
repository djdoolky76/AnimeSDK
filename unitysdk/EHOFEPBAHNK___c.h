#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCPOIDCNJDA;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EHOFEPBAHNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC17040)
#define EHOFEPBAHNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC17080)
#define EHOFEPBAHNK___C___CTOR_B__100_0_OFFSET UNITYSDK_OFFSET(0x1DC17090)
#define EHOFEPBAHNK___C___CTOR_B__100_1_OFFSET UNITYSDK_OFFSET(0x1DC170C0)

inline static constexpr unsigned int EHOFEPBAHNK___c_TypeDefinitionIndex = 43588;

	class EHOFEPBAHNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FAB0);
		}

		static ::System::Func_1<::OCPOIDCNJDA*>** StaticGet___9__100_1()
		{
			return (::System::Func_1<::OCPOIDCNJDA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FAB8);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__100_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHOFEPBAHNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__100_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EHOFEPBAHNK___C___CTOR_B__100_0_OFFSET))(this, a1);
		}

		::OCPOIDCNJDA* __ctor_b__100_1()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK___C___CTOR_B__100_1_OFFSET))(this);
		}

	};
