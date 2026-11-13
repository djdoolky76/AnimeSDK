#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client { class PlanetFesFloatingController; }

#define MFDDEJCPLON_CTOR_OFFSET UNITYSDK_OFFSET(0x17C7AB20)
#define MFDDEJCPLON_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x17C7AAD0)

inline static constexpr unsigned int MFDDEJCPLON_TypeDefinitionIndex = 76610;

	class MFDDEJCPLON : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::PlanetFesFloatingController* EOBLJJBOBIN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDEJCPLON_CTOR_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDEJCPLON_ONCLEAR_OFFSET))(this);
		}

	};
