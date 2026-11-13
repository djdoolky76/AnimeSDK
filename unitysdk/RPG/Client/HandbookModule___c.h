#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HandbookChapterData; }
namespace RPG::Client { class HandbookRogueData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HANDBOOKMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5DE880)
#define RPG_CLIENT_HANDBOOKMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DE8B0)
#define RPG_CLIENT_HANDBOOKMODULE___C__GENERATECHAPTERDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C5DE8C0)
#define RPG_CLIENT_HANDBOOKMODULE___C__GETSHOWROGUEDATALIST_B__116_0_OFFSET UNITYSDK_OFFSET(0x1C5DEBB0)
#define RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDMAINPATHLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C5DE910)
#define RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDSUBPATHLIST_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C5DEB70)
#define RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUEDLC_B__117_0_OFFSET UNITYSDK_OFFSET(0x1C5DEE50)
#define RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUENOUS_B__118_0_OFFSET UNITYSDK_OFFSET(0x1C5DEEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c_TypeDefinitionIndex = 67554;

	class HandbookModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::HandbookRogueData*>** StaticGet___9__116_0()
		{
			return (::System::Comparison_1<::RPG::Client::HandbookRogueData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D860);
		}

		static ::System::Comparison_1<::RPG::Client::MissionChronicleSubPathData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::MissionChronicleSubPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D868);
		}

		static ::System::Action** StaticGet___9__118_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D870);
		}

		static ::System::Action** StaticGet___9__117_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D878);
		}

		static ::System::Comparison_1<::RPG::Client::HandbookChapterData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::HandbookChapterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D880);
		}

		static ::System::Comparison_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D888);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateChapterData_b__8_0(::RPG::Client::HandbookChapterData* a1, ::RPG::Client::HandbookChapterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HandbookChapterData*, ::RPG::Client::HandbookChapterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GENERATECHAPTERDATA_B__8_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetSortedMainPathList_b__11_0(::RPG::Client::MissionChronicleMainPathData* a1, ::RPG::Client::MissionChronicleMainPathData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDMAINPATHLIST_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetSortedSubPathList_b__12_0(::RPG::Client::MissionChronicleSubPathData* a1, ::RPG::Client::MissionChronicleSubPathData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDSUBPATHLIST_B__12_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetShowRogueDataList_b__116_0(::RPG::Client::HandbookRogueData* a1, ::RPG::Client::HandbookRogueData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HandbookRogueData*, ::RPG::Client::HandbookRogueData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GETSHOWROGUEDATALIST_B__116_0_OFFSET))(this, a1, a2);
		}

		::System::Void _GotoToGuideRogueDLC_b__117_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUEDLC_B__117_0_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueNous_b__118_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUENOUS_B__118_0_OFFSET))(this);
		}

	};
}
