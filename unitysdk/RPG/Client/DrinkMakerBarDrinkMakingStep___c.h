#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCD4F90)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCCD4FD0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__GETSUBSTEPFINISHSTATE_B__2_0_OFFSET UNITYSDK_OFFSET(0xCCD4FE0)

namespace RPG::Client
{
	class DrinkMakerBarDrinkMakingStep___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FB90);
		}

		static ::System::Func_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSubStepFinishState_b__2_0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__GETSUBSTEPFINISHSTATE_B__2_0_OFFSET))(this, a1);
		}

	};
}
