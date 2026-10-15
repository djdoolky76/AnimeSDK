#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE10B590)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE10B540)

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxMonoPlugin_TypeDefinitionIndex = 70958;

	class StageDynamicLightBoxMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Templates; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
