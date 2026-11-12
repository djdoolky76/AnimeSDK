#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEIFBAOFJPM.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }

#define CMLCFCEKKLN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBD6A10)
#define CMLCFCEKKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD6A90)

inline static constexpr unsigned int CMLCFCEKKLN_TypeDefinitionIndex = 44444;

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
