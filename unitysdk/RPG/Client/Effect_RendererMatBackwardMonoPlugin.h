#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD5CBB0)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD5CB60)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0xCD5C940)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0xCD5CA00)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0xCD5CAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_RendererMatBackwardMonoPlugin_TypeDefinitionIndex = 70547;

	class Effect_RendererMatBackwardMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PAUSE_OFFSET))(this);
		}

		::System::Void playBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYBACKWARD_OFFSET))(this);
		}

		::System::Void playForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYFORWARD_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
