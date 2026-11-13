#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3CBE80)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CBEC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__UPDATEAFTER_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D3CBED0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_RoleGrowupSummarizer___c_TypeDefinitionIndex = 66858;

	class GridFightTeam_RoleGrowupSummarizer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x13460);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x13468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAfter_b__6_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__UPDATEAFTER_B__6_1_OFFSET))(this, a1);
		}

	};
}
