#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LAALMAHICIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F0FC0)
#define LAALMAHICIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1000)
#define LAALMAHICIC___C___TRIGGERNEWWEATHEREFFECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C6F1010)

inline static constexpr unsigned int LAALMAHICIC___c_TypeDefinitionIndex = 36531;

	class LAALMAHICIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13690);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAALMAHICIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint __TriggerNewWeatherEffect_b__9_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAALMAHICIC___C___TRIGGERNEWWEATHEREFFECT_B__9_0_OFFSET))(this, a1);
		}

	};
