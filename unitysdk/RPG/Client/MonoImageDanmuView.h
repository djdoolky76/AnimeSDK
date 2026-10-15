#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuViewBase.h"
class MFLJIEBFMOF;
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOIMAGEDANMUVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xD835890)
#define RPG_CLIENT_MONOIMAGEDANMUVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD8359F0)
#define RPG_CLIENT_MONOIMAGEDANMUVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD835940)

namespace RPG::Client
{
	class MonoImageDanmuView : public ::RPG::Client::MonoDanmuViewBase
	{
	public:
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOIMAGEDANMUVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOIMAGEDANMUVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::MFLJIEBFMOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOIMAGEDANMUVIEW_INITIALIZE_OFFSET))(this, a1);
		}

	};
}
