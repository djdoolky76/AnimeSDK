#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CableProcedural; }
namespace RPG::GameCore { class GameEntity; }

#define GCDKKPDHNEI_KBMMPFPMIDD_CTOR_OFFSET UNITYSDK_OFFSET(0x19EA33D0)
#define GCDKKPDHNEI_KBMMPFPMIDD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19EA3360)
#define GCDKKPDHNEI_KBMMPFPMIDD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x19EA35E0)

inline static constexpr unsigned int GCDKKPDHNEI_KBMMPFPMIDD_TypeDefinitionIndex = 61784;

	class GCDKKPDHNEI_KBMMPFPMIDD : public ::System::Object
	{
	public:
		::RPG::Client::CableProcedural* KAEAHJNDFLM; // 0x10
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_KBMMPFPMIDD_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_KBMMPFPMIDD_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI_KBMMPFPMIDD_HADOHLNHHGB_OFFSET))(this);
		}

	};
