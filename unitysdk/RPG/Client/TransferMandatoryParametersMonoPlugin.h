#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xED745E0)
#define RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xED74590)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferMandatoryParametersMonoPlugin_TypeDefinitionIndex = 72280;

	class TransferMandatoryParametersMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
