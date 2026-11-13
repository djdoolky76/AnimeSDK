#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF07650)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF07690)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C___FINDPOINTCONTROL_B__14_1_OFFSET UNITYSDK_OFFSET(0x1DF076A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeControl___c_TypeDefinitionIndex = 82831;

	class MechCraftTalentTreeControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x617E0);
		}

		static ::System::Func_2<::RPG::Client::MechCraft::View::MechCraftTalentPointControl*, ::System::Boolean>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::MechCraft::View::MechCraftTalentPointControl*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x617E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindPointControl_b__14_1(::RPG::Client::MechCraft::View::MechCraftTalentPointControl* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C___FINDPOINTCONTROL_B__14_1_OFFSET))(this, a1);
		}

	};
}
