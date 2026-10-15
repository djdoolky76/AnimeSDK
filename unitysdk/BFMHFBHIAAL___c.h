#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define BFMHFBHIAAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8B9F50)
#define BFMHFBHIAAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B9F90)
#define BFMHFBHIAAL___C___CTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0x1C8B9FA0)
#define BFMHFBHIAAL___C___CTOR_B__54_1_OFFSET UNITYSDK_OFFSET(0x1C8B9FD0)

inline static constexpr unsigned int BFMHFBHIAAL___c_TypeDefinitionIndex = 42572;

	class BFMHFBHIAAL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x205A0);
		}

		static ::System::Func_1<::KAKADGHNMFK*>** StaticGet___9__54_1()
		{
			return (::System::Func_1<::KAKADGHNMFK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x205A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x205B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMHFBHIAAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMHFBHIAAL___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__54_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + BFMHFBHIAAL___C___CTOR_B__54_0_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* __ctor_b__54_1()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMHFBHIAAL___C___CTOR_B__54_1_OFFSET))(this);
		}

	};
