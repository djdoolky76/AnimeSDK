#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightGuideQuestConfigRow; }
namespace RPG::GameCore { class GridFightSeasonGuideQuestConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDBCEA40)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDBCEA70)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__SYNC_B__35_0_OFFSET UNITYSDK_OFFSET(0xDBCEA80)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__SYNC_B__35_1_OFFSET UNITYSDK_OFFSET(0xDBCEAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideBook___c_TypeDefinitionIndex = 66447;

	class GridFightGuideBook___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GridFightGuideQuestConfigRow*>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightGuideQuestConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72240);
		}

		static ::System::Comparison_1<::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>** StaticGet___9__35_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72248);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Sync_b__35_0(::RPG::GameCore::GridFightGuideQuestConfigRow* a1, ::RPG::GameCore::GridFightGuideQuestConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightGuideQuestConfigRow*, ::RPG::GameCore::GridFightGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__SYNC_B__35_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _Sync_b__35_1(::RPG::GameCore::GridFightSeasonGuideQuestConfigRow* a1, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__SYNC_B__35_1_OFFSET))(this, a1, a2);
		}

	};
}
