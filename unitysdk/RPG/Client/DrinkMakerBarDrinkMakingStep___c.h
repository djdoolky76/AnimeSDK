#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCCC150)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCCCC190)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__GETSUBSTEPFINISHSTATE_B__2_0_OFFSET UNITYSDK_OFFSET(0xCCCC1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarDrinkMakingStep___c_TypeDefinitionIndex = 63593;

	class DrinkMakerBarDrinkMakingStep___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x25ED0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x25ED8);
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
