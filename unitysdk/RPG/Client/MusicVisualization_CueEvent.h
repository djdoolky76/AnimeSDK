#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_CueEvent_CueEventControlType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD925F20)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_FELKMACIGMK_OFFSET UNITYSDK_OFFSET(0xD920B40)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_FOIAHDOKBBF_OFFSET UNITYSDK_OFFSET(0xD920CB0)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_HCKOPAGNKLI_OFFSET UNITYSDK_OFFSET(0xD925BE0)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_KKDKJKCNONI_OFFSET UNITYSDK_OFFSET(0xD925970)

namespace RPG::Client
{
	class MusicVisualization_CueEvent : public ::System::Object
	{
	public:
		::RPG::Client::MusicVisualization_CueEvent_CueEventControlType CueEventControl; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AnimatorIntegerParamName; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* CueEventNameLookUps; // 0x20
		::UnityEngine::GameObject* _OwnerGO; // 0x28
		::UnityEngine::Animator* _Animator; // 0x30
		::System::Int32 _TargetStateID; // 0x38
		::System::Int32 _TargetElementID; // 0x3C
		::System::Int32 _AnimatorStateID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_CTOR_OFFSET))(this);
		}

		::System::Void FOIAHDOKBBF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_FOIAHDOKBBF_OFFSET))(this, a1);
		}

		::System::Void FELKMACIGMK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_FELKMACIGMK_OFFSET))(this, a1);
		}

		::System::Void HCKOPAGNKLI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_HCKOPAGNKLI_OFFSET))(this, a1);
		}

		::System::Void KKDKJKCNONI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_KKDKJKCNONI_OFFSET))(this, a1);
		}

	};
}
