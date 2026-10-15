#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEIFBAOFJPM.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }

#define CMLCFCEKKLN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9E4B60)
#define CMLCFCEKKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4BE0)

inline static constexpr unsigned int CMLCFCEKKLN_TypeDefinitionIndex = 43462;

	class CMLCFCEKKLN : public ::System::Object
	{
	public:
		::OEIFBAOFJPM BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimLeverSwitchConfig* EABKOHGCHFP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLCFCEKKLN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLCFCEKKLN_CLEAR_OFFSET))(this);
		}

	};
