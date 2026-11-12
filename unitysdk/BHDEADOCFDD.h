#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBPLIDDOKLC.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimWaterReflectionConfig; }

#define BHDEADOCFDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BB00)

inline static constexpr unsigned int BHDEADOCFDD_TypeDefinitionIndex = 44475;

	class BHDEADOCFDD : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimWaterReflectionConfig* EABKOHGCHFP; // 0x10
		::KBPLIDDOKLC BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDEADOCFDD_CTOR_OFFSET))(this);
		}

	};
