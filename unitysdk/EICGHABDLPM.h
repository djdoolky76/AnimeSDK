#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define EICGHABDLPM_FDKIMLGCCNK_OFFSET UNITYSDK_OFFSET(0x154B0E70)

inline static constexpr unsigned int EICGHABDLPM_TypeDefinitionIndex = 75609;

	class EICGHABDLPM : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* FDKIMLGCCNK(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EICGHABDLPM_FDKIMLGCCNK_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
