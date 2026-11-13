#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D15E620)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D15E660)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND___C___FINDUNDRESSEDLAUGHPOINTEQUIP_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D15E670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointEquipRecommend___c_TypeDefinitionIndex = 67186;

	class GridFightElationLaughPointEquipRecommend___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x709E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x709E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindUndressedLaughPointEquip_b__34_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND___C___FINDUNDRESSEDLAUGHPOINTEQUIP_B__34_0_OFFSET))(this, a1);
		}

	};
}
