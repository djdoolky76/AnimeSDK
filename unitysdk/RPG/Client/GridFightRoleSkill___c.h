#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESKILL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC61960)
#define RPG_CLIENT_GRIDFIGHTROLESKILL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC619A0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL___C__GET_SKILLREMARK_B__21_0_OFFSET UNITYSDK_OFFSET(0xDC619B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkill___c_TypeDefinitionIndex = 66830;

	class GridFightRoleSkill___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRoleSkillDetail*, ::System::UInt32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRoleSkillDetail*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xB790);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xB798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_SkillRemark_b__21_0(::RPG::Client::GridFightRoleSkillDetail* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL___C__GET_SKILLREMARK_B__21_0_OFFSET))(this, a1);
		}

	};
}
