#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemViewModelState.h"
class JJAFLELOIKD;
class KFELGAIGHAP;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::GameCore { class TaskContext; }

#define HOMBONBJGLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBAD60)
#define HOMBONBJGLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DBB4D0)
#define HOMBONBJGLB_GIKNLEMPHEN_OFFSET UNITYSDK_OFFSET(0x15DBB040)
#define HOMBONBJGLB_INJAFKILCKC_OFFSET UNITYSDK_OFFSET(0x15DBB0D0)
#define HOMBONBJGLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DBAEB0)
#define HOMBONBJGLB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DBB230)
#define HOMBONBJGLB_TICK_OFFSET UNITYSDK_OFFSET(0x15DBB310)

inline static constexpr unsigned int HOMBONBJGLB_TypeDefinitionIndex = 52934;

	class HOMBONBJGLB : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPlanService* IAHMPKBCKBF; // 0x18
		::KFELGAIGHAP* EBAIBMDGJNK; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::JJAFLELOIKD* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* CDINLNAOFJO; // 0x38
		::KFELGAIGHAP* JPMOKOKJEJC; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JJAFLELOIKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JJAFLELOIKD*))((::PBYTE)hIl2Cpp + HOMBONBJGLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMBONBJGLB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMBONBJGLB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOMBONBJGLB_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMBONBJGLB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GIKNLEMPHEN(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState))((::PBYTE)hIl2Cpp + HOMBONBJGLB_GIKNLEMPHEN_OFFSET))(this, a1);
		}

		::System::Void INJAFKILCKC(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + HOMBONBJGLB_INJAFKILCKC_OFFSET))(this, a1);
		}

	};
