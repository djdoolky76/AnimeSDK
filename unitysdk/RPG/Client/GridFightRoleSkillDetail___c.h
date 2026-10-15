#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBackRankConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD26A700)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD26A740)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL___C__GETBACKRANKMODIFIER_B__40_1_OFFSET UNITYSDK_OFFSET(0xD26A750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillDetail___c_TypeDefinitionIndex = 65147;

	class GridFightRoleSkillDetail___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E5E0);
		}

		static ::System::Func_2<::RPG::Client::GridFightBackRankConfig*, ::System::UInt32>** StaticGet___9__40_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackRankConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E5E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetBackRankModifier_b__40_1(::RPG::Client::GridFightBackRankConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL___C__GETBACKRANKMODIFIER_B__40_1_OFFSET))(this, a1);
		}

	};
}
