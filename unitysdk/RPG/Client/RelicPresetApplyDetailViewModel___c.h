#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE7B800)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE7B840)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__GETNOTEMPTYPLANVIEWMODELS_B__14_0_OFFSET UNITYSDK_OFFSET(0xDE7B850)

namespace RPG::Client
{
	class RelicPresetApplyDetailViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58B00);
		}

		static ::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNotEmptyPlanViewModels_b__14_0(::RPG::Client::RelicPresetPlanViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__GETNOTEMPTYPLANVIEWMODELS_B__14_0_OFFSET))(this, a1);
		}

	};
}
