#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCBKKDBMMG;
namespace RPG::GameCore { class FiveDimLightningConfig; }

#define ODHPCINKFKK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C98C570)
#define ODHPCINKFKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98C5F0)

inline static constexpr unsigned int ODHPCINKFKK_TypeDefinitionIndex = 43519;

	class ODHPCINKFKK : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimLightningConfig* EABKOHGCHFP; // 0x10
		::GHCBKKDBMMG* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPCINKFKK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPCINKFKK_CLEAR_OFFSET))(this);
		}

	};
