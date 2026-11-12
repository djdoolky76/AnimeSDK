#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDACF580)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDACF5C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__6_0_OFFSET UNITYSDK_OFFSET(0xDACF5D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__6_1_OFFSET UNITYSDK_OFFSET(0xDACF660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftCombination___c_TypeDefinitionIndex = 66039;

	class GridFightEquipCraftCombination___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DA40);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DA48);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_TargetRoleUniqueID_b__6_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_TargetRoleUniqueID_b__6_1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__6_1_OFFSET))(this, a1);
		}

	};
}
