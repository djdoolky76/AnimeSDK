#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0CB520)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0CB560)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__GETDESCDETAILOBJECT_B__29_0_OFFSET UNITYSDK_OFFSET(0xD0CB570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelectItem___c_TypeDefinitionIndex = 64384;

	class GridFightAugmentSelectItem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x652B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x652B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetDescDetailObject_b__29_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__GETDESCDETAILOBJECT_B__29_0_OFFSET))(this, a1);
		}

	};
}
