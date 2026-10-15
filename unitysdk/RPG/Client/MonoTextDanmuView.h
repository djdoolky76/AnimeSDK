#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuViewBase.h"
class MFLJIEBFMOF;
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOTEXTDANMUVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xD86A810)
#define RPG_CLIENT_MONOTEXTDANMUVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD86A980)
#define RPG_CLIENT_MONOTEXTDANMUVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD86A8C0)

namespace RPG::Client
{
	class MonoTextDanmuView : public ::RPG::Client::MonoDanmuViewBase
	{
	public:
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTEXTDANMUVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTEXTDANMUVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::MFLJIEBFMOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTEXTDANMUVIEW_INITIALIZE_OFFSET))(this, a1);
		}

	};
}
