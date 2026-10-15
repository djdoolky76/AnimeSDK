#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define HDIAALCMDNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CABDC50)
#define HDIAALCMDNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABDC90)
#define HDIAALCMDNG___C___CTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1CABDCA0)
#define HDIAALCMDNG___C___CTOR_B__18_1_OFFSET UNITYSDK_OFFSET(0x1CABDCD0)

inline static constexpr unsigned int HDIAALCMDNG___c_TypeDefinitionIndex = 42568;

	class HDIAALCMDNG___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::NGFHCJIAOLH*>** StaticGet___9__18_1()
		{
			return (::System::Func_1<::NGFHCJIAOLH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A770);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A778);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDIAALCMDNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIAALCMDNG___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__18_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + HDIAALCMDNG___C___CTOR_B__18_0_OFFSET))(this, a1);
		}

		::NGFHCJIAOLH* __ctor_b__18_1()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIAALCMDNG___C___CTOR_B__18_1_OFFSET))(this);
		}

	};
