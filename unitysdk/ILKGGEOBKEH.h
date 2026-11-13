#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::GameCore { class ActivityPanelRow; }

#define ILKGGEOBKEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A9600)
#define ILKGGEOBKEH_OPOLKCHBODB_OFFSET UNITYSDK_OFFSET(0x1B5A9330)

inline static constexpr unsigned int ILKGGEOBKEH_TypeDefinitionIndex = 63107;

	class ILKGGEOBKEH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKGGEOBKEH_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityPanelData* OPOLKCHBODB(::RPG::Client::ActivityPanelTemplate a1, ::RPG::GameCore::ActivityPanelRow* a2)
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::RPG::Client::ActivityPanelTemplate, ::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + ILKGGEOBKEH_OPOLKCHBODB_OFFSET))(a1, a2);
		}

	};
