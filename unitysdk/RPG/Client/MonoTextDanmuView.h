#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuViewBase.h"
class MFLJIEBFMOF;
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOTEXTDANMUVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xE2BCDC0)
#define RPG_CLIENT_MONOTEXTDANMUVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE2BCF10)
#define RPG_CLIENT_MONOTEXTDANMUVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE2BCE70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTextDanmuView_TypeDefinitionIndex = 70906;

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
