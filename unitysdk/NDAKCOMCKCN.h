#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTransfer; }

#define NDAKCOMCKCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C758250)
#define NDAKCOMCKCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C7582D0)
#define NDAKCOMCKCN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C758390)
#define NDAKCOMCKCN_TICK_OFFSET UNITYSDK_OFFSET(0x1C758330)

inline static constexpr unsigned int NDAKCOMCKCN_TypeDefinitionIndex = 36992;

	class NDAKCOMCKCN
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*))((::PBYTE)hIl2Cpp + NDAKCOMCKCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKCOMCKCN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDAKCOMCKCN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKCOMCKCN_ONTASKRESET_OFFSET))(this);
		}

	};
