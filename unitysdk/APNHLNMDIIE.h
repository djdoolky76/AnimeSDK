#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class APNHLNMDIIE_HNBIIAGFOHF;
class KDJNAAOFMMJ;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMiniGameManager; }
namespace RPG::GameCore { class HipplenGameWaitEvent; }
namespace RPG::GameCore { class TaskContext; }

#define APNHLNMDIIE_CTOR_OFFSET UNITYSDK_OFFSET(0x18518DC0)
#define APNHLNMDIIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18519120)
#define APNHLNMDIIE_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x18519270)
#define APNHLNMDIIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18518DD0)
#define APNHLNMDIIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x185190D0)
#define APNHLNMDIIE_TICK_OFFSET UNITYSDK_OFFSET(0x18518FD0)

inline static constexpr unsigned int APNHLNMDIIE_TypeDefinitionIndex = 53382;

	class APNHLNMDIIE : public ::GELIALJDFBL
	{
	public:
		::APNHLNMDIIE_HNBIIAGFOHF* OOEABHBKAKC; // 0x18
		::KDJNAAOFMMJ* HEAGLNNMMNJ; // 0x20
		::RPG::GameCore::HipplenGameWaitEvent* OFKGLJOAMLD; // 0x28
		::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager* CDPFMOHMFPO; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameWaitEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameWaitEvent*))((::PBYTE)hIl2Cpp + APNHLNMDIIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNHLNMDIIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APNHLNMDIIE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNHLNMDIIE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNHLNMDIIE_DISPOSE_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::APNHLNMDIIE_HNBIIAGFOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APNHLNMDIIE_HNBIIAGFOHF*))((::PBYTE)hIl2Cpp + APNHLNMDIIE_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
