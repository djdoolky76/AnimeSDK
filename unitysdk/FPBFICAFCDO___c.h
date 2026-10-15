#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICDNEPOKHJL;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define FPBFICAFCDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5F90C0)
#define FPBFICAFCDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9100)
#define FPBFICAFCDO___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C5F9110)
#define FPBFICAFCDO___C___CTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C5F9140)

inline static constexpr unsigned int FPBFICAFCDO___c_TypeDefinitionIndex = 37037;

	class FPBFICAFCDO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x693A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x693A8);
		}

		static ::System::Func_1<::ICDNEPOKHJL*>** StaticGet___9__4_1()
		{
			return (::System::Func_1<::ICDNEPOKHJL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x693B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBFICAFCDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__4_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + FPBFICAFCDO___C___CTOR_B__4_0_OFFSET))(this, a1);
		}

		::ICDNEPOKHJL* __ctor_b__4_1()
		{
			return ((::ICDNEPOKHJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO___C___CTOR_B__4_1_OFFSET))(this);
		}

	};
