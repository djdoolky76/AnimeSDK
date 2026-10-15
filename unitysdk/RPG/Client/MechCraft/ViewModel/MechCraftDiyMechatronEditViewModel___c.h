#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLNGKOPAMBJ;
class KBDDPBPABDD;
class OPPEGLOCAGH;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronColorItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronEffectItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronPoseItemViewModel; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD67CCE0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD67CD20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0xD67CD30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_1_OFFSET UNITYSDK_OFFSET(0xD67CD90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_2_OFFSET UNITYSDK_OFFSET(0xD67CDF0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___SAVE_B__84_1_OFFSET UNITYSDK_OFFSET(0xD67CE50)

namespace RPG::Client::MechCraft::ViewModel
{
	class MechCraftDiyMechatronEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__84_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x56850);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x56858);
		}

		static ::System::Func_2<::OPPEGLOCAGH*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*>** StaticGet___9__71_2()
		{
			return (::System::Func_2<::OPPEGLOCAGH*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x56860);
		}

		static ::System::Func_2<::CLNGKOPAMBJ*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*>** StaticGet___9__71_0()
		{
			return (::System::Func_2<::CLNGKOPAMBJ*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x56868);
		}

		static ::System::Func_2<::KBDDPBPABDD*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*>** StaticGet___9__71_1()
		{
			return (::System::Func_2<::KBDDPBPABDD*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x56870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel* __ctor_b__71_0(::CLNGKOPAMBJ* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*(*)(::PVOID, ::CLNGKOPAMBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_0_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel* __ctor_b__71_1(::KBDDPBPABDD* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*(*)(::PVOID, ::KBDDPBPABDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_1_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel* __ctor_b__71_2(::OPPEGLOCAGH* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*(*)(::PVOID, ::OPPEGLOCAGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_2_OFFSET))(this, a1);
		}

		::System::Void __Save_b__84_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___SAVE_B__84_1_OFFSET))(this, a1);
		}

	};
}
