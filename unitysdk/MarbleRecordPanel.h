#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MARBLERECORDPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC306270)
#define MARBLERECORDPANEL_REFRESHSEALPOS_OFFSET UNITYSDK_OFFSET(0xC3061B0)
#define MARBLERECORDPANEL_SETSEALHP_OFFSET UNITYSDK_OFFSET(0xC3059E0)
#define MARBLERECORDPANEL_SETSEALVISIBLE_OFFSET UNITYSDK_OFFSET(0xC305E20)

inline static constexpr unsigned int MarbleRecordPanel_TypeDefinitionIndex = 48163;

	class MarbleRecordPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 SealIndex; // 0x18
		::System::Int32 Hp; // 0x1C
		::System::Boolean IsVisible; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_CTOR_OFFSET))(this);
		}

		::System::Void SetSealHp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_SETSEALHP_OFFSET))(this);
		}

		::System::Void SetSealVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_SETSEALVISIBLE_OFFSET))(this);
		}

		::System::Void RefreshSealPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_REFRESHSEALPOS_OFFSET))(this);
		}

	};
