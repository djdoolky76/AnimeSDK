#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCBKKDBMMG;
namespace RPG::GameCore { class FiveDimLightningConfig; }

#define ODHPCINKFKK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E06CA30)
#define ODHPCINKFKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06CA90)

inline static constexpr unsigned int ODHPCINKFKK_TypeDefinitionIndex = 44501;

	class ODHPCINKFKK : public ::System::Object
	{
	public:
		::GHCBKKDBMMG* BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimLightningConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPCINKFKK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHPCINKFKK_CLEAR_OFFSET))(this);
		}

	};
