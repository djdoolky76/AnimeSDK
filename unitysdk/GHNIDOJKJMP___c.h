#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class KAPEMBCNNIG;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GHNIDOJKJMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A1F810)
#define GHNIDOJKJMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1F840)
#define GHNIDOJKJMP___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET UNITYSDK_OFFSET(0x15A1F850)
#define GHNIDOJKJMP___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET UNITYSDK_OFFSET(0x15A1F950)

inline static constexpr unsigned int GHNIDOJKJMP___c_TypeDefinitionIndex = 71577;

	class GHNIDOJKJMP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAPEMBCNNIG*, ::RPG::GameCore::CrosshairType>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::KAPEMBCNNIG*, ::RPG::GameCore::CrosshairType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64430);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64438);
		}

		static ::System::Func_2<::KAPEMBCNNIG*, ::KAPEMBCNNIG*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::KAPEMBCNNIG*, ::KAPEMBCNNIG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNIDOJKJMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNIDOJKJMP___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType _GetCrosshairConfigs_b__0_0(::KAPEMBCNNIG* a1)
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID, ::KAPEMBCNNIG*))((::PBYTE)hIl2Cpp + GHNIDOJKJMP___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET))(this, a1);
		}

		::KAPEMBCNNIG* _GetCrosshairConfigs_b__0_1(::KAPEMBCNNIG* a1)
		{
			return ((::KAPEMBCNNIG*(*)(::PVOID, ::KAPEMBCNNIG*))((::PBYTE)hIl2Cpp + GHNIDOJKJMP___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET))(this, a1);
		}

	};
