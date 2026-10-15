#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLGBFIJIACG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define DBPGGIEJLFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9EC010)

inline static constexpr unsigned int DBPGGIEJLFF_TypeDefinitionIndex = 43450;

	class DBPGGIEJLFF : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimTrampolineConfig* EABKOHGCHFP; // 0x10
		::PLGBFIJIACG BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPGGIEJLFF_CTOR_OFFSET))(this);
		}

	};
