#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RedDotGraphConfig; }

#define GGDOIOHKOGJ_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15A03190)
#define GGDOIOHKOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A03230)

	class GGDOIOHKOGJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDOIOHKOGJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RedDotGraphConfig* ACMKLFOMPFC()
		{
			return ((::RPG::GameCore::RedDotGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDOIOHKOGJ_ACMKLFOMPFC_OFFSET))(this);
		}

	};
