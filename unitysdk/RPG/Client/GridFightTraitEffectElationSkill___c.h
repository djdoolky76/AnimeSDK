#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightElationSkillConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2BA500)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2BA540)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C___GETCONFIGS_B__1_0_OFFSET UNITYSDK_OFFSET(0xD2BA550)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectElationSkill___c_TypeDefinitionIndex = 65377;

	class GridFightTraitEffectElationSkill___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xAAD0);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xAAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightElationSkillConfig* __GetConfigs_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightElationSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C___GETCONFIGS_B__1_0_OFFSET))(this, a1);
		}

	};
}
