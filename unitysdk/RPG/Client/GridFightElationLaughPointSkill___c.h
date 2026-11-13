#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightElationSkillConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1621B0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1621F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL___C__GET_CONFIGS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D162200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointSkill___c_TypeDefinitionIndex = 67197;

	class GridFightElationLaughPointSkill___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70A40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightElationSkillConfig* _get_Configs_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightElationSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL___C__GET_CONFIGS_B__2_0_OFFSET))(this, a1);
		}

	};
}
