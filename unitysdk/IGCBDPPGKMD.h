#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;

#define IGCBDPPGKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x163F4720)

inline static constexpr unsigned int IGCBDPPGKMD_TypeDefinitionIndex = 54106;

	class IGCBDPPGKMD : public ::System::Object
	{
	public:
		::KFELGAIGHAP* GGNBOEIMEPM; // 0x10
		::KFELGAIGHAP* GAFKECIDLJG; // 0x18
		::RPG::GameCore::RtBehaviorFlag FNPGDNFLMPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCBDPPGKMD_CTOR_OFFSET))(this);
		}

	};
