#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define OOJOAHKGOBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8C1F0)
#define OOJOAHKGOBI_JHKBGBMLBOI_OFFSET UNITYSDK_OFFSET(0xBF8C0F0)

	class OOJOAHKGOBI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* IEIDNLCEAJG; // 0x10
		::UnityEngine::UI::Text* JHNKMEDDFLH; // 0x18
		::UnityEngine::UI::Image* GBMPJLHLAJC; // 0x20
		::UnityEngine::UI::Text* HOKNLLFPFNB; // 0x28
		::UnityEngine::UI::Text* BJBIDNHJAMF; // 0x30
		// static const ::System::String* BDACPPLKLGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJOAHKGOBI_CTOR_OFFSET))(this);
		}

		::System::Void JHKBGBMLBOI(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OOJOAHKGOBI_JHKBGBMLBOI_OFFSET))(this, a1);
		}

	};
