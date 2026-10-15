#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEKMCGJPEEF;
class MLPHCNIKCJK;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CNFBBPCHCDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA44A20)
#define CNFBBPCHCDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA44A60)
#define CNFBBPCHCDG___C__DRESSSKIN_B__0_0_OFFSET UNITYSDK_OFFSET(0xDA44A70)
#define CNFBBPCHCDG___C__TAKEOFFSKIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xDA44AC0)

inline static constexpr unsigned int CNFBBPCHCDG___c_TypeDefinitionIndex = 62754;

	class CNFBBPCHCDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC80);
		}

		static ::System::Action_1<::MLPHCNIKCJK*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::MLPHCNIKCJK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC88);
		}

		static ::System::Action_1<::GEKMCGJPEEF*>** StaticGet___9__0_0()
		{
			return (::System::Action_1<::GEKMCGJPEEF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNFBBPCHCDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFBBPCHCDG___C_CTOR_OFFSET))(this);
		}

		::System::Void _DressSkin_b__0_0(::GEKMCGJPEEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKMCGJPEEF*))((::PBYTE)hIl2Cpp + CNFBBPCHCDG___C__DRESSSKIN_B__0_0_OFFSET))(this, a1);
		}

		::System::Void _TakeOffSkin_b__1_0(::MLPHCNIKCJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLPHCNIKCJK*))((::PBYTE)hIl2Cpp + CNFBBPCHCDG___C__TAKEOFFSKIN_B__1_0_OFFSET))(this, a1);
		}

	};
