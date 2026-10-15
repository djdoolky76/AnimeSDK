#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class FJCDKKKGKND;
namespace System { class Object; }
namespace System { class String; }

#define BFBICOAJGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB15C800)
#define BFBICOAJGBJ_GET_CLEARONSKIP_OFFSET UNITYSDK_OFFSET(0xB15C650)
#define BFBICOAJGBJ_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xB15C690)
#define BFBICOAJGBJ_GET_EXTERNALSOURCENAME_OFFSET UNITYSDK_OFFSET(0xB15C6B0)
#define BFBICOAJGBJ_GET_ISEXTERNALSOURCEVO_OFFSET UNITYSDK_OFFSET(0xB15C6D0)
#define BFBICOAJGBJ_GET_USEEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xB15C670)
#define BFBICOAJGBJ_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB15C6F0)
#define BFBICOAJGBJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB15C770)
#define BFBICOAJGBJ_SET_CLEARONSKIP_OFFSET UNITYSDK_OFFSET(0xB15C660)
#define BFBICOAJGBJ_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xB15C6A0)
#define BFBICOAJGBJ_SET_EXTERNALSOURCENAME_OFFSET UNITYSDK_OFFSET(0xB15C6C0)
#define BFBICOAJGBJ_SET_ISEXTERNALSOURCEVO_OFFSET UNITYSDK_OFFSET(0xB15C6E0)
#define BFBICOAJGBJ_SET_USEEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xB15C680)

inline static constexpr unsigned int BFBICOAJGBJ_TypeDefinitionIndex = 48837;

	class BFBICOAJGBJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _EventName_k__BackingField; // 0x10
		::System::String* _ExternalSourceName_k__BackingField; // 0x18
		::FJCDKKKGKND* PJFFKDHKKCE; // 0x20
		::System::Boolean _ClearOnSkip_k__BackingField; // 0x28
		::System::Boolean _UseExternalSource_k__BackingField; // 0x29
		::System::Boolean _IsExternalSourceVO_k__BackingField; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_ClearOnSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_GET_CLEARONSKIP_OFFSET))(this);
		}

		::System::Void set_ClearOnSkip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_SET_CLEARONSKIP_OFFSET))(this, a1);
		}

		::System::Boolean get_UseExternalSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_GET_USEEXTERNALSOURCE_OFFSET))(this);
		}

		::System::Void set_UseExternalSource(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_SET_USEEXTERNALSOURCE_OFFSET))(this, a1);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void set_EventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_SET_EVENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_ExternalSourceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_GET_EXTERNALSOURCENAME_OFFSET))(this);
		}

		::System::Void set_ExternalSourceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_SET_EXTERNALSOURCENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExternalSourceVO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_GET_ISEXTERNALSOURCEVO_OFFSET))(this);
		}

		::System::Void set_IsExternalSourceVO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_SET_ISEXTERNALSOURCEVO_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + BFBICOAJGBJ_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
