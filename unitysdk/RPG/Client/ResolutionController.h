#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RESOLUTIONCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDEC3470)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0xDEC3300)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_GETFITRATIOX_OFFSET UNITYSDK_OFFSET(0xDEC3250)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_GETISPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xDEC31D0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_GET_ISPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xDEC2E30)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDEC2CA0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_NKBAJKNACBB_OFFSET UNITYSDK_OFFSET(0xDEC2DE0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xDEC2D00)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_SETCHILDRENRESOLUTION_OFFSET UNITYSDK_OFFSET(0xDEC2E90)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_UPDATECHILDRENRESOLUTION_OFFSET UNITYSDK_OFFSET(0xDEC3390)

namespace RPG::Client
{
	class ResolutionController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 PCResolution; // 0x18
		::UnityEngine::Vector2 PhoneResolution; // 0x20
		::System::Boolean EMHAACACFOM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean GetIsPCResolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_GETISPCRESOLUTION_OFFSET))(this);
		}

		::System::Single GetFitRatioX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_GETFITRATIOX_OFFSET))(this);
		}

		::System::Boolean DLGFMPNEHGO(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_DLGFMPNEHGO_OFFSET))(this, a1);
		}

		::System::Void SetChildrenResolution(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_SETCHILDRENRESOLUTION_OFFSET))(this, a1);
		}

		::System::Void UpdateChildrenResolution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_UPDATECHILDRENRESOLUTION_OFFSET))(this);
		}

		::System::Boolean get_IsPCResolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_GET_ISPCRESOLUTION_OFFSET))(this);
		}

		::UnityEngine::GameObject* NKBAJKNACBB()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_NKBAJKNACBB_OFFSET))(this);
		}

	};
}
