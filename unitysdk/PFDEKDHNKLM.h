#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define PFDEKDHNKLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC200620)

inline static constexpr unsigned int PFDEKDHNKLM_TypeDefinitionIndex = 67508;

	class PFDEKDHNKLM : public ::System::Exception
	{
	public:
		::System::Void _ctor(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + PFDEKDHNKLM_CTOR_OFFSET))(this, a1, a2);
		}

	};
