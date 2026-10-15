#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMPMKGFGICF;
namespace RPG::GameCore { class GameEntity; }

#define ODADIANBOGD_INGCMBBPEMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD70AD0)

inline static constexpr unsigned int ODADIANBOGD_INGCMBBPEMM_TypeDefinitionIndex = 71450;

	class ODADIANBOGD_INGCMBBPEMM : public ::System::Object
	{
	public:
		::PMPMKGFGICF* FOBDOKEILDD; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODADIANBOGD_INGCMBBPEMM_CTOR_OFFSET))(this);
		}

	};
