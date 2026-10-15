#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD684F80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD684FC0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CREATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xD684FD0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftResidentRewardViewModel_Factory___c_TypeDefinitionIndex = 79689;

	class MechCraftResidentRewardViewModel_Factory___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x57960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x57968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__8_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CREATE_B__8_0_OFFSET))(this, a1);
		}

	};
}
