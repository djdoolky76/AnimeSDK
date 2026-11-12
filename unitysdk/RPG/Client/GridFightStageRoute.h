#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AINFNFIDGFF;
class BCCIJHPLJOJ;
class BEEFLEJAOCN;
class LHLMPOHKPKG;
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightStageNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC91650)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDC8ACF0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET UNITYSDK_OFFSET(0xDC94BE0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xDC98B40)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xDC954D0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET UNITYSDK_OFFSET(0xDC94F00)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_REFRESHALLNODESMODIFIERSTATE_OFFSET UNITYSDK_OFFSET(0xDC98660)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET UNITYSDK_OFFSET(0xDC98AA0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCALLROUTENODES_OFFSET UNITYSDK_OFFSET(0xDC92AA0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET UNITYSDK_OFFSET(0xDC98600)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTENODES_OFFSET UNITYSDK_OFFSET(0xDC93B10)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET UNITYSDK_OFFSET(0xDC92560)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET UNITYSDK_OFFSET(0xDC940C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0xDC926A0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATEROUTENODE_OFFSET UNITYSDK_OFFSET(0xDC92860)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute_TypeDefinitionIndex = 66998;

	class GridFightStageRoute : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*>* _StageNodesByChapterID; // 0x10
		::RPG::Client::GridFightStage* _CurStage; // 0x18
		::System::UInt32 _StageRouteID; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncRouteNodes(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::BCCIJHPLJOJ*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::BCCIJHPLJOJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTENODES_OFFSET))(this, a1, a2);
		}

		::System::Void SyncAllRouteNodes(::System::Collections::Generic::IEnumerable_1<::BCCIJHPLJOJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BCCIJHPLJOJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCALLROUTENODES_OFFSET))(this, a1);
		}

		::System::Void SyncRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightStageNode*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void RefreshAllNodesModifierState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_REFRESHALLNODESMODIFIERSTATE_OFFSET))(this);
		}

		::System::Void UpdateNodeInfo(::LHLMPOHKPKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLMPOHKPKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET))(this, a1);
		}

		::System::Void SetNodeFrenzy(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateNodeInfo_1(::AINFNFIDGFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINFNFIDGFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET))(this, a1);
		}

		::System::Boolean UpdateRouteNode(::BCCIJHPLJOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCCIJHPLJOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATEROUTENODE_OFFSET))(this, a1);
		}

		::System::Void UpdateNodeInfo_2(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* get_CurChapterNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* GetStageNodesByChapterID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStageNode* GetNode(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET))(this, a1, a2);
		}

	};
}
