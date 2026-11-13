#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C728590)
#define RPG_CLIENT_GRIDFIGHTAUGMENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7285D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__GETDESCDETAILOBJECT_B__57_0_OFFSET UNITYSDK_OFFSET(0x1C7285E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment___c_TypeDefinitionIndex = 65822;

	class GridFightAugment___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FA00);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FA08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetDescDetailObject_b__57_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__GETDESCDETAILOBJECT_B__57_0_OFFSET))(this, a1);
		}

	};
}
