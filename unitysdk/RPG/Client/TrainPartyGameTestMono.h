#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TRAINPARTYGAMETESTMONO_CLOSE_OFFSET UNITYSDK_OFFSET(0xE3012A0)
#define RPG_CLIENT_TRAINPARTYGAMETESTMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xE3015F0)
#define RPG_CLIENT_TRAINPARTYGAMETESTMONO_OPEN_OFFSET UNITYSDK_OFFSET(0xE301110)
#define RPG_CLIENT_TRAINPARTYGAMETESTMONO_PREVIEW_OFFSET UNITYSDK_OFFSET(0xE3013B0)

namespace RPG::Client
{
	class TrainPartyGameTestMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYGAMETESTMONO_CTOR_OFFSET))(this);
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYGAMETESTMONO_OPEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYGAMETESTMONO_CLOSE_OFFSET))(this);
		}

		::System::Void Preview(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYGAMETESTMONO_PREVIEW_OFFSET))(this, a1, a2);
		}

	};
}
