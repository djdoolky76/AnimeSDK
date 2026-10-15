#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD118930)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD118970)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__GET_IDLEEQUIPCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0xD118980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c_TypeDefinitionIndex = 64962;

	class GridFightEquipInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66630);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IdleEquipCount_b__26_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__GET_IDLEEQUIPCOUNT_B__26_0_OFFSET))(this, a1);
		}

	};
}
