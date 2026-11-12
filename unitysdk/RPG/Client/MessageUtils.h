#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MessageSectionData; }

#define RPG_CLIENT_MESSAGEUTILS_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xE1451B0)
#define RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_1_OFFSET UNITYSDK_OFFSET(0xE144FE0)
#define RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_OFFSET UNITYSDK_OFFSET(0xE144AC0)
#define RPG_CLIENT_MESSAGEUTILS_ISMESSAGEITEMSCHOICE_OFFSET UNITYSDK_OFFSET(0xE135B00)
#define RPG_CLIENT_MESSAGEUTILS_ISMESSAGEMISSIONVALID_OFFSET UNITYSDK_OFFSET(0xE1453A0)
#define RPG_CLIENT_MESSAGEUTILS_SHOWMISSIONICON_OFFSET UNITYSDK_OFFSET(0xE134D10)
#define RPG_CLIENT_MESSAGEUTILS__SAFEINITPARAM_OFFSET UNITYSDK_OFFSET(0xE144BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUtils_TypeDefinitionIndex = 68011;

	class MessageUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__WritingTimeBias()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "MessageUtils")->GetStaticField(0x14D30);
		}

		static ::System::Single* StaticGet__SpecialWritingTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "MessageUtils")->GetStaticField(0x14D34);
		}

		static ::System::Single* StaticGet__WritingTimeRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "MessageUtils")->GetStaticField(0x14D38);
		}

		static ::System::Single* StaticGet__MaxWritingTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "MessageUtils")->GetStaticField(0x14D3C);
		}

		static ::System::Boolean* StaticGet__HasInitiated()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "MessageUtils")->GetStaticField(0x14D40);
		}

		static ::System::Single* StaticGet__MinWritingTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "MessageUtils")->GetStaticField(0x14D44);
		}

		static ::System::Single GetWritingTime(::RPG::Client::MessageItemData* a1)
		{
			return ((::System::Single(*)(::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_OFFSET))(a1);
		}

		static ::System::Single GetWritingTime_1(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Single(*)(::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::MessageStateType GetGroupState(::RPG::Client::MessageGroupData* a1)
		{
			return ((::RPG::GameCore::MessageStateType(*)(::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETGROUPSTATE_OFFSET))(a1);
		}

		static ::System::Boolean ShowMissionIcon(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_SHOWMISSIONICON_OFFSET))(a1);
		}

		static ::System::Boolean IsMessageMissionValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_ISMESSAGEMISSIONVALID_OFFSET))(a1);
		}

		static ::System::Boolean IsMessageItemsChoice(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_ISMESSAGEITEMSCHOICE_OFFSET))(a1);
		}

		static ::System::Void _SafeInitParam()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS__SAFEINITPARAM_OFFSET))();
		}

	};
}
