#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HeliobusChallengeData; }
namespace RPG::Client { class HeliobusChallengeTargetData; }
namespace RPG::GameCore { class HeliobusChallengeStageRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDD48890)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD486D0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xDD48C60)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xDD48C40)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xDD48C20)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0xDD48CC0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0xDD48C80)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDD48CA0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xDD48AC0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGETARGETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xDD48B80)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xDD48C70)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xDD48C50)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xDD48C30)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0xDD48CD0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0xDD48C90)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDD48CB0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_TRYUNLOCKCHALLENGE_OFFSET UNITYSDK_OFFSET(0xDD48B00)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusChallengeData_TypeDefinitionIndex = 67584;

	class HeliobusChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* _ChallengeTargets_k__BackingField; // 0x10
		::RPG::GameCore::HeliobusChallengeStageRow* _ChallengeData_k__BackingField; // 0x18
		::System::UInt32 _ChallengeGroupID_k__BackingField; // 0x20
		::System::Boolean _IsChallengeUnlocked_k__BackingField; // 0x24
		::System::Boolean _IsChallengeFinished_k__BackingField; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 _ChallengeID_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::HeliobusChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void SetChallengeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGEFINISH_OFFSET))(this);
		}

		::System::Boolean TryUnlockChallenge(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_TRYUNLOCKCHALLENGE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetFinishState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGETARGETFINISHSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Void set_ChallengeGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEGROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusChallengeStageRow* get_ChallengeData()
		{
			return ((::RPG::GameCore::HeliobusChallengeStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::RPG::GameCore::HeliobusChallengeStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeliobusChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChallengeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsChallengeFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChallengeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsChallengeUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* get_ChallengeTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGETARGETS_OFFSET))(this);
		}

		::System::Void set_ChallengeTargets(::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGETARGETS_OFFSET))(this, a1);
		}

	};
}
