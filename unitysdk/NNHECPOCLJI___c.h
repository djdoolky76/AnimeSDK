#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHPOKIKCOFO;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define NNHECPOCLJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9463C0)
#define NNHECPOCLJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C946400)
#define NNHECPOCLJI___C___CTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x1C946410)
#define NNHECPOCLJI___C___CTOR_B__35_1_OFFSET UNITYSDK_OFFSET(0x1C946440)

inline static constexpr unsigned int NNHECPOCLJI___c_TypeDefinitionIndex = 42592;

	class NNHECPOCLJI___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::KHPOKIKCOFO*>** StaticGet___9__35_1()
		{
			return (::System::Func_1<::KHPOKIKCOFO*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55270);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55278);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNHECPOCLJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHECPOCLJI___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__35_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NNHECPOCLJI___C___CTOR_B__35_0_OFFSET))(this, a1);
		}

		::KHPOKIKCOFO* __ctor_b__35_1()
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHECPOCLJI___C___CTOR_B__35_1_OFFSET))(this);
		}

	};
