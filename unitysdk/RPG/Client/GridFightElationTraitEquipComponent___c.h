#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCEIOHLADG;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD100B50)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD100B90)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CANCRAFTTO_B__13_0_OFFSET UNITYSDK_OFFSET(0xD100BB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CRAFTTO_B__14_0_OFFSET UNITYSDK_OFFSET(0xD100BD0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GETCRAFTTOCOMBINATION_B__15_0_OFFSET UNITYSDK_OFFSET(0xD100BF0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GET_ISFULL_B__7_0_OFFSET UNITYSDK_OFFSET(0xD100BA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__INITCONFIG_B__23_0_OFFSET UNITYSDK_OFFSET(0xD100C10)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_0_OFFSET UNITYSDK_OFFSET(0xD100C60)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_1_OFFSET UNITYSDK_OFFSET(0xD100C80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_2_OFFSET UNITYSDK_OFFSET(0xD100CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent___c_TypeDefinitionIndex = 65369;

	class GridFightElationTraitEquipComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B40);
		}

		static ::System::Func_2<::FHCEIOHLADG*, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::FHCEIOHLADG*, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B48);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B50);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B58);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B60);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B68);
		}

		static ::System::Func_2<::FHCEIOHLADG*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::FHCEIOHLADG*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B70);
		}

		static ::System::Func_2<::FHCEIOHLADG*, ::System::UInt32>** StaticGet___9__24_2()
		{
			return (::System::Func_2<::FHCEIOHLADG*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B78);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsFull_b__7_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GET_ISFULL_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _CanCraftTo_b__13_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CANCRAFTTO_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _CraftTo_b__14_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CRAFTTO_B__14_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCraftToCombination_b__15_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GETCRAFTTOCOMBINATION_B__15_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _InitConfig_b__23_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__INITCONFIG_B__23_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__24_0(::FHCEIOHLADG* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FHCEIOHLADG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _Update_b__24_1(::FHCEIOHLADG* a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::FHCEIOHLADG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_1_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__24_2(::FHCEIOHLADG* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FHCEIOHLADG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_2_OFFSET))(this, a1);
		}

	};
}
