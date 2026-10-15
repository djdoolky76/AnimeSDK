#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLNGKOPAMBJ;
class KBDDPBPABDD;
class OPPEGLOCAGH;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronColorItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronEffectItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronPoseItemViewModel; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD673710)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD673750)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0xD673760)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_1_OFFSET UNITYSDK_OFFSET(0xD6737C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_2_OFFSET UNITYSDK_OFFSET(0xD673820)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___SAVE_B__84_1_OFFSET UNITYSDK_OFFSET(0xD673880)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex = 79608;

	class MechCraftDiyMechatronEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CLNGKOPAMBJ*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*>** StaticGet___9__71_0()
		{
			return (::System::Func_2<::CLNGKOPAMBJ*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x4E470);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__84_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x4E478);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x4E480);
		}

		static ::System::Func_2<::KBDDPBPABDD*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*>** StaticGet___9__71_1()
		{
			return (::System::Func_2<::KBDDPBPABDD*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x4E488);
		}

		static ::System::Func_2<::OPPEGLOCAGH*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*>** StaticGet___9__71_2()
		{
			return (::System::Func_2<::OPPEGLOCAGH*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*>**)UnitySDK::FromName("RPG.Client.MechCraft.ViewModel", "<>c")->GetStaticField(0x4E490);
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
