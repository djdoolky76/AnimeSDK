#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelRankData; }

#define POBNHFMGBMO___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8A5A0)
#define POBNHFMGBMO___C__DISPLAYCLASS2_0__GETRANKDATABYSCORE_B__0_OFFSET UNITYSDK_OFFSET(0xCC8A7D0)

inline static constexpr unsigned int POBNHFMGBMO___c__DisplayClass2_0_TypeDefinitionIndex = 64818;

	class POBNHFMGBMO___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 score; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBNHFMGBMO___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRankDataByScore_b__0(::RPG::Client::ChimeraDuelRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelRankData*))((::PBYTE)hIl2Cpp + POBNHFMGBMO___C__DISPLAYCLASS2_0__GETRANKDATABYSCORE_B__0_OFFSET))(this, a1);
		}

	};
