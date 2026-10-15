#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
class DEBEAKKOHLN;

#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_CCTOR_OFFSET UNITYSDK_OFFSET(0xE08AAA0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0xE08AA90)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xE08A910)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE08A9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneShaderPropertyTransition_TypeDefinitionIndex = 68884;

	class SceneShaderPropertyTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x18
		static ::System::Int32* StaticGet_JEMFDPPDDKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SceneShaderPropertyTransition")->GetStaticField(0x156E0);
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
