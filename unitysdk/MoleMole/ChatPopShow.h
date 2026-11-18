#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/MoleMole/ChatPopShow_ChatCameraType.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

class BFDCJJOGEFG;
class DPFMDEBJEMG;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHATPOPSHOW_GENERATECHATFLAG_OFFSET UNITYSDK_OFFSET(0xFFC24D0)
#define MOLEMOLE_CHATPOPSHOW_GETCHATCAMERATYPE_OFFSET UNITYSDK_OFFSET(0xFFC0C50)
#define MOLEMOLE_CHATPOPSHOW_GETCHATENTITIES_OFFSET UNITYSDK_OFFSET(0xFFC1850)
#define MOLEMOLE_CHATPOPSHOW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xFFC1730)
#define MOLEMOLE_CHATPOPSHOW_GETTAGMAP_OFFSET UNITYSDK_OFFSET(0xFFC1130)
#define MOLEMOLE_CHATPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0xFFC0C40)
#define MOLEMOLE_CHATPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xFFC2550)
#define MOLEMOLE_CHATPOPSHOW_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0xFFC2A30)
#define MOLEMOLE_CHATPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xFFC2680)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0xFFC1ED0)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHMULTIPLECAMERA_OFFSET UNITYSDK_OFFSET(0xFFC1CD0)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHSOLOCAMERA_OFFSET UNITYSDK_OFFSET(0xFFC0CF0)
#define MOLEMOLE_CHATPOPSHOW_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0xFFC27A0)
#define MOLEMOLE_CHATPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC2560)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_B__15_0_OFFSET UNITYSDK_OFFSET(0xFFC2C40)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_G__GETTRANSFORM_15_1_OFFSET UNITYSDK_OFFSET(0xFFC2310)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET UNITYSDK_OFFSET(0xFFC2BE0)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHSOLOCAMERA_B__10_0_OFFSET UNITYSDK_OFFSET(0xFFC2B80)
#define MOLEMOLE_CHATPOPSHOW__PLAYCHAT_B__21_0_OFFSET UNITYSDK_OFFSET(0xFFC2CA0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPopShow_TypeDefinitionIndex = 40348;

	class ChatPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action_1<::DPFMDEBJEMG*>* _finishCallback; // 0x28
		::BFDCJJOGEFG* _actionActionParams; // 0x30
		::System::Int32 _endTransitionId; // 0x38
		::System::Int32 _interactId; // 0x3C
		::System::UInt32 _chatUid; // 0x40
		::System::Int32 _targetUid; // 0x44

		::System::Void _ctor(::BFDCJJOGEFG* data, ::System::UInt32 chatUID, ::System::Int32 interactId, ::System::Int32 targetUID, ::System::Int32 endTransitionId, ::System::Action_1<::DPFMDEBJEMG*>* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::BFDCJJOGEFG*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_1<::DPFMDEBJEMG*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__CTOR_OFFSET))(this, data, chatUID, interactId, targetUID, endTransitionId, finishCallback);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		static ::MoleMole::ChatPopShow_ChatCameraType GetChatCameraType(::BFDCJJOGEFG* config)
		{
			return ((::MoleMole::ChatPopShow_ChatCameraType(*)(::BFDCJJOGEFG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETCHATCAMERATYPE_OFFSET))(config);
		}

		::System::Void PlayChatWithSoloCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHSOLOCAMERA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GetTagMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETTAGMAP_OFFSET))(this);
		}

		::System::Boolean GetEntity(::System::Int32 tagId, ::MoleMole::Battle::Entity*& entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETENTITY_OFFSET))(this, tagId, entity);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetChatEntities()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GETCHATENTITIES_OFFSET))(this);
		}

		::System::Void PlayChatWithMultipleCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHMULTIPLECAMERA_OFFSET))(this);
		}

		::System::Void PlayChatWithFixedCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHATWITHFIXEDCAMERA_OFFSET))(this);
		}

		::MAJGCLDPEFI GenerateChatFlag()
		{
			return ((::MAJGCLDPEFI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GENERATECHATFLAG_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void PlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_PLAYCHAT_OFFSET))(this);
		}

		::System::Void OnPlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW_ONPLAYCHAT_OFFSET))(this);
		}

		::System::Void _PlayChatWithSoloCamera_b__10_0(::DPFMDEBJEMG* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::DPFMDEBJEMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHSOLOCAMERA_B__10_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithMultipleCamera_b__14_0(::DPFMDEBJEMG* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::DPFMDEBJEMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHMULTIPLECAMERA_B__14_0_OFFSET))(this, chatSyncData);
		}

		::System::Void _PlayChatWithFixedCamera_b__15_0(::DPFMDEBJEMG* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::DPFMDEBJEMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_B__15_0_OFFSET))(this, chatSyncData);
		}

		static ::Foundation::Unreal::FTransform3D _PlayChatWithFixedCamera_g__GetTransform_15_1(::System::String* transformId, ::Nap::NapECS::EcsWorld* world)
		{
			return ((::Foundation::Unreal::FTransform3D(*)(::System::String*, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHATWITHFIXEDCAMERA_G__GETTRANSFORM_15_1_OFFSET))(transformId, world);
		}

		::System::Void _PlayChat_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPOPSHOW__PLAYCHAT_B__21_0_OFFSET))(this);
		}
	};
}
