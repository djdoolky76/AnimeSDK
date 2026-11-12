#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LIFHPJGHLND_CTOR_OFFSET UNITYSDK_OFFSET(0xBF62C50)
#define LIFHPJGHLND_GET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xBF62BF0)
#define LIFHPJGHLND_GET_KEEPONEND_OFFSET UNITYSDK_OFFSET(0xBF62C30)
#define LIFHPJGHLND_GET_SETEVERYFRAME_OFFSET UNITYSDK_OFFSET(0xBF62C10)
#define LIFHPJGHLND_SET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xBF62C00)
#define LIFHPJGHLND_SET_KEEPONEND_OFFSET UNITYSDK_OFFSET(0xBF62C40)
#define LIFHPJGHLND_SET_SETEVERYFRAME_OFFSET UNITYSDK_OFFSET(0xBF62C20)

inline static constexpr unsigned int LIFHPJGHLND_TypeDefinitionIndex = 48897;

	class LIFHPJGHLND : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean _SetEveryFrame_k__BackingField; // 0x10
		::System::Boolean _KeepOnEnd_k__BackingField; // 0x11
		::System::Boolean _EnableAutoBlink_k__BackingField; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHPJGHLND_CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableAutoBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHPJGHLND_GET_ENABLEAUTOBLINK_OFFSET))(this);
		}

		::System::Void set_EnableAutoBlink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIFHPJGHLND_SET_ENABLEAUTOBLINK_OFFSET))(this, a1);
		}

		::System::Boolean get_SetEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHPJGHLND_GET_SETEVERYFRAME_OFFSET))(this);
		}

		::System::Void set_SetEveryFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIFHPJGHLND_SET_SETEVERYFRAME_OFFSET))(this, a1);
		}

		::System::Boolean get_KeepOnEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFHPJGHLND_GET_KEEPONEND_OFFSET))(this);
		}

		::System::Void set_KeepOnEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIFHPJGHLND_SET_KEEPONEND_OFFSET))(this, a1);
		}

	};
