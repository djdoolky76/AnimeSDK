#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FOHGGGFAGNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x158F1D50)
#define FOHGGGFAGNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x158F1D90)
#define FOHGGGFAGNK___C___REFRESHACTORSTATES_B__74_1_OFFSET UNITYSDK_OFFSET(0x158F1DA0)

	class FOHGGGFAGNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B5B0);
		}

		static ::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Boolean>** StaticGet___9__74_1()
		{
			return (::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B5B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOHGGGFAGNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshActorStates_b__74_1(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK___C___REFRESHACTORSTATES_B__74_1_OFFSET))(this, a1);
		}

	};
