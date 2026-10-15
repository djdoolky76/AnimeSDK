#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }

#define ACHCFEEMHEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB120120)
#define ACHCFEEMHEH_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0xB120080)

inline static constexpr unsigned int ACHCFEEMHEH_TypeDefinitionIndex = 80240;

	class ACHCFEEMHEH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHCFEEMHEH_CTOR_OFFSET))(this);
		}

		::RPG::Client::QuestData* IAONPECOKLB(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACHCFEEMHEH_IAONPECOKLB_OFFSET))(this, a1);
		}

	};
