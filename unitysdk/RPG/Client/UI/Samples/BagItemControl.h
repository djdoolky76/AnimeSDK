#pragma once
#include "unitysdk/unitysdk.h"
class CKKGECOHPMO;
class HIKAAGHELPH;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE402BD0)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE402520)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagItemControl_TypeDefinitionIndex = 73425;

	class BagItemControl
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::RPG::Client::LocalizedText* _NameText; // 0x78
		::RPG::Client::LocalizedText* _CountText; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
