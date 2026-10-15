#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class VolumeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE45A530)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE45A4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeFogOptVolumeMonoPlugin_TypeDefinitionIndex = 70840;

	class VolumeFogOptVolumeMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::VolumeData*>* VolumeList; // 0x30
		::System::Single FadeInSpeedScale; // 0x38
		::System::Single FadeOutSpeedScale; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
