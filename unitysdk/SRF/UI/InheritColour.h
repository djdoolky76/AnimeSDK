#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"
namespace UnityEngine::UI { class Graphic; }

#define SRF_UI_INHERITCOLOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x2002BA70)
#define SRF_UI_INHERITCOLOUR_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x2002B7F0)
#define SRF_UI_INHERITCOLOUR_REFRESH_OFFSET UNITYSDK_OFFSET(0x2002B870)
#define SRF_UI_INHERITCOLOUR_START_OFFSET UNITYSDK_OFFSET(0x2002BA60)
#define SRF_UI_INHERITCOLOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x2002BA50)

namespace SRF::UI
{
	inline static constexpr unsigned int InheritColour_TypeDefinitionIndex = 36309;

	class InheritColour : public ::SRF::SRMonoBehaviour
	{
	public:
		::UnityEngine::UI::Graphic* _graphic; // 0x48
		::UnityEngine::UI::Graphic* From; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_INHERITCOLOUR_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Graphic* get_Graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_INHERITCOLOUR_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_INHERITCOLOUR_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_INHERITCOLOUR_UPDATE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_INHERITCOLOUR_START_OFFSET))(this);
		}

	};
}
