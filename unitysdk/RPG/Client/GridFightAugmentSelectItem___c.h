#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA67A40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA67A80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__GETDESCDETAILOBJECT_B__30_0_OFFSET UNITYSDK_OFFSET(0xDA67A90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelectItem___c_TypeDefinitionIndex = 65831;

	class GridFightAugmentSelectItem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B190);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetDescDetailObject_b__30_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__GETDESCDETAILOBJECT_B__30_0_OFFSET))(this, a1);
		}

	};
}
