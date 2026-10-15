#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class NJDHBAPCFAN;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD665CF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD665A30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD665AD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD665A70)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleTalentEffectControl_TypeDefinitionIndex = 80049;

	class MechCraftSettleTalentEffectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::NJDHBAPCFAN* LFGMLJCCPCH; // 0x18
		::UnityEngine::UI::Image* _Icon; // 0x20
		::RPG::Client::LocalizedText* _Text; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_CTOR_OFFSET))(this);
		}

		::NJDHBAPCFAN* get_Content()
		{
			return ((::NJDHBAPCFAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::NJDHBAPCFAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJDHBAPCFAN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::NJDHBAPCFAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJDHBAPCFAN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLETALENTEFFECTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
