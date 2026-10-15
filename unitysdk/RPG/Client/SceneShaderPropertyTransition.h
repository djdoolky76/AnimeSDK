#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
class DEBEAKKOHLN;

#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_CCTOR_OFFSET UNITYSDK_OFFSET(0xE094DC0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0xE094DB0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xE094C30)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE094CD0)

namespace RPG::Client
{
	class SceneShaderPropertyTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x18
		static ::System::Int32* StaticGet_JEMFDPPDDKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SceneShaderPropertyTransition")->GetStaticField(0x155B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_CCTOR_OFFSET))();
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void SetSceneShadowColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET))(this, a1);
		}

	};
}
