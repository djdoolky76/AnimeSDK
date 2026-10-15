#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GACEPNEKIAI.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimSpikeConfig; }

#define KMGHCLKMCLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DA740)

inline static constexpr unsigned int KMGHCLKMCLA_TypeDefinitionIndex = 43471;

	class KMGHCLKMCLA : public ::System::Object
	{
	public:
		::GACEPNEKIAI BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimSpikeConfig* EABKOHGCHFP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGHCLKMCLA_CTOR_OFFSET))(this);
		}

	};
