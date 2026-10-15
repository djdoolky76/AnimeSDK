#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTNPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1BA270)
#define RPG_CLIENT_GRIDFIGHTNPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1BA2B0)
#define RPG_CLIENT_GRIDFIGHTNPC___C___ONEQUIPCOMPONENTCOLLECTIONCHANGED_B__29_0_OFFSET UNITYSDK_OFFSET(0xD1BA2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPC___c_TypeDefinitionIndex = 65063;

	class GridFightNPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B3E0);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B3E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __OnEquipComponentCollectionChanged_b__29_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC___C___ONEQUIPCOMPONENTCOLLECTIONCHANGED_B__29_0_OFFSET))(this, a1);
		}

	};
}
