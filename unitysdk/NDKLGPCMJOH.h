#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBEBCHAFBCE.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NDKLGPCMJOH_BBLHCOFIAEO_OFFSET UNITYSDK_OFFSET(0xBB45020)
#define NDKLGPCMJOH_CFLFFCBNEOK_1_OFFSET UNITYSDK_OFFSET(0xBB450D0)
#define NDKLGPCMJOH_CFLFFCBNEOK_OFFSET UNITYSDK_OFFSET(0xBB45080)
#define NDKLGPCMJOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB45010)
#define NDKLGPCMJOH_GLMPICLDPIP_1_OFFSET UNITYSDK_OFFSET(0xBB45700)
#define NDKLGPCMJOH_GLMPICLDPIP_OFFSET UNITYSDK_OFFSET(0xBB45140)

inline static constexpr unsigned int NDKLGPCMJOH_TypeDefinitionIndex = 49093;

	class NDKLGPCMJOH : public ::CBEBCHAFBCE
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDKLGPCMJOH_CTOR_OFFSET))(this, a1);
		}

		::ScenenLightManager::LightInstanceID BBLHCOFIAEO(::System::String* a1)
		{
			return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDKLGPCMJOH_BBLHCOFIAEO_OFFSET))(this, a1);
		}

		::ScenenLightManager::LightInstanceID CFLFFCBNEOK(::UnityEngine::GameObject* a1, ::SimpleJSON::JSONClass* a2)
		{
			return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::UnityEngine::GameObject*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + NDKLGPCMJOH_CFLFFCBNEOK_OFFSET))(this, a1, a2);
		}

		::ScenenLightManager::LightInstanceID CFLFFCBNEOK_1(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NDKLGPCMJOH_CFLFFCBNEOK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int64 GLMPICLDPIP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::SimpleJSON::JSONClass* a5)
		{
			return ((::System::Int64(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + NDKLGPCMJOH_GLMPICLDPIP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int64 GLMPICLDPIP_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Int64(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NDKLGPCMJOH_GLMPICLDPIP_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
