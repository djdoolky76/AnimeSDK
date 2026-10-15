#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class WolfBroPuzzleBoard; }
namespace RPG::GameCore { class RestoreWolfBroPuzzleArchive; }
namespace RPG::GameCore { class TaskContext; }

#define HCKPOCEBOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C13FF0)
#define HCKPOCEBOGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C14490)
#define HCKPOCEBOGA_DPFMDIHKNMC_OFFSET UNITYSDK_OFFSET(0x15C148F0)
#define HCKPOCEBOGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C140D0)
#define HCKPOCEBOGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C14340)
#define HCKPOCEBOGA_TICK_OFFSET UNITYSDK_OFFSET(0x15C14670)

inline static constexpr unsigned int HCKPOCEBOGA_TypeDefinitionIndex = 58401;

	class HCKPOCEBOGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::RestoreWolfBroPuzzleArchive* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* EHOAHCNLNAN; // 0x28
		::RPG::Client::Prop::WolfBroPuzzleBoard* PNMFAOJNNIC; // 0x30
		::KFELGAIGHAP* BBLAHCCDCDH; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + HCKPOCEBOGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKPOCEBOGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKPOCEBOGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKPOCEBOGA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCKPOCEBOGA_TICK_OFFSET))(this, a1);
		}

		::System::Void DPFMDIHKNMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCKPOCEBOGA_DPFMDIHKNMC_OFFSET))(this, a1);
		}

	};
