#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKKPMDKOJML.h"
#include "unitysdk/System/Object.h"

class EGOPHPIBPJJ;
class KNBADLOICGB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNOWLEDGEDATA_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x17679A00)
#define KNOWLEDGEDATA_GETCURPROGRESS_OFFSET UNITYSDK_OFFSET(0x17679AD0)
#define KNOWLEDGEDATA_GETMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x17679C20)
#define KNOWLEDGEDATA_GETREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x17679C80)
#define KNOWLEDGEDATA_GETREWARDS_OFFSET UNITYSDK_OFFSET(0x17679BC0)
#define KNOWLEDGEDATA_GET_QUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x176799B0)
#define KNOWLEDGEDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x17679990)
#define KNOWLEDGEDATA_GET_SERVERINFO_OFFSET UNITYSDK_OFFSET(0x17679650)
#define KNOWLEDGEDATA_ISRED_OFFSET UNITYSDK_OFFSET(0x17679D00)
#define KNOWLEDGEDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x176799A0)
#define KNOWLEDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x176799C0)

inline static constexpr unsigned int KnowledgeData_TypeDefinitionIndex = 79832;

class KnowledgeData : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KnowledgeData*>* childQuest; // 0x10
	::EGOPHPIBPJJ* _QuestConfig_k__BackingField; // 0x18
	::System::Int32 _QuestID_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 configID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA__CTOR_OFFSET))(this, configID);
	}

	::KNBADLOICGB* get_ServerInfo()
	{
		return ((::KNBADLOICGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_SERVERINFO_OFFSET))(this);
	}

	::System::Int32 get_QuestID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_SET_QUESTID_OFFSET))(this, value);
	}

	::EGOPHPIBPJJ* get_QuestConfig()
	{
		return ((::EGOPHPIBPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_QUESTCONFIG_OFFSET))(this);
	}

	::System::Void AddChild(::KnowledgeData* data)
	{
		return ((::System::Void(*)(::PVOID, ::KnowledgeData*))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_ADDCHILD_OFFSET))(this, data);
	}

	::System::Int32 GetCurProgress()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETCURPROGRESS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* GetRewards()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETREWARDS_OFFSET))(this);
	}

	::System::Int32 GetMaxProgress()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETMAXPROGRESS_OFFSET))(this);
	}

	::FKKPMDKOJML GetRewardState()
	{
		return ((::FKKPMDKOJML(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETREWARDSTATE_OFFSET))(this);
	}

	::System::Boolean IsRed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_ISRED_OFFSET))(this);
	}
};
