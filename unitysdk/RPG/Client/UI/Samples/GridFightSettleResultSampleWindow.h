#pragma once
#include "unitysdk/unitysdk.h"
class MEDCLDPMDAA;
namespace RPG::Client { class TabView; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLERESULTSAMPLEWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xE410950)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int GridFightSettleResultSampleWindow_TypeDefinitionIndex = 73461;

	class GridFightSettleResultSampleWindow
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x60
		::UnityEngine::GameObject* _BtnArrowRight; // 0x68
		::UnityEngine::GameObject* _BtnArrowLeft; // 0x70
		::System::Void _ctor(::MEDCLDPMDAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDCLDPMDAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLERESULTSAMPLEWINDOW_CTOR_OFFSET))(this, a1);
		}

	};
}
