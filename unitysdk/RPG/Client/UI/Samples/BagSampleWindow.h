#pragma once
#include "unitysdk/unitysdk.h"
class CEIKEECFCBI;
namespace RPG::Client { class ListView; }

#define RPG_CLIENT_UI_SAMPLES_BAGSAMPLEWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xE402CC0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagSampleWindow_TypeDefinitionIndex = 73431;

	class BagSampleWindow
	{
	public:
		::RPG::Client::ListView* _ListView; // 0x60
		::System::Void _ctor(::CEIKEECFCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEIKEECFCBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGSAMPLEWINDOW_CTOR_OFFSET))(this, a1);
		}

	};
}
