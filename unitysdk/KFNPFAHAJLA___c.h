#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class LKFPICOFNDF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KFNPFAHAJLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3C6730)
#define KFNPFAHAJLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C6770)
#define KFNPFAHAJLA___C__APPLY_B__1_0_OFFSET UNITYSDK_OFFSET(0xB3C6780)

	class KFNPFAHAJLA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::LKFPICOFNDF*, ::RPG::GameCore::FixPoint>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::LKFPICOFNDF*, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B200);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFNPFAHAJLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNPFAHAJLA___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _Apply_b__1_0(::LKFPICOFNDF* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + KFNPFAHAJLA___C__APPLY_B__1_0_OFFSET))(this, a1);
		}

	};
