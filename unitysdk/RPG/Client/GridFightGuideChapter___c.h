#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C690)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C6D0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__35_0_OFFSET UNITYSDK_OFFSET(0x1CD7C770)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__35_1_OFFSET UNITYSDK_OFFSET(0x1CD7C780)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__34_0_OFFSET UNITYSDK_OFFSET(0x1CD7C6E0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__34_1_OFFSET UNITYSDK_OFFSET(0x1CD7C750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideChapter___c_TypeDefinitionIndex = 66449;

	class GridFightGuideChapter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F28);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F30);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F38);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetQuestByIndex_b__34_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__34_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetQuestByIndex_b__34_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__34_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetChapterQuestListReward_b__35_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__35_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetChapterQuestListReward_b__35_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__35_1_OFFSET))(this, a1);
		}

	};
}
