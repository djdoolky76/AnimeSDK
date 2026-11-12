#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionLoadFinish; }

#define PGLGIFDOCPK_CTOR_OFFSET UNITYSDK_OFFSET(0xCB11B70)
#define PGLGIFDOCPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB11B80)
#define PGLGIFDOCPK_MMBBFGNGPII_OFFSET UNITYSDK_OFFSET(0xCB11D10)
#define PGLGIFDOCPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB11D90)
#define PGLGIFDOCPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB11C00)
#define PGLGIFDOCPK_TICK_OFFSET UNITYSDK_OFFSET(0xCB11C50)

inline static constexpr unsigned int PGLGIFDOCPK_TypeDefinitionIndex = 54154;

	class PGLGIFDOCPK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionLoadFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionLoadFinish*))((::PBYTE)hIl2Cpp + PGLGIFDOCPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLGIFDOCPK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGLGIFDOCPK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLGIFDOCPK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLGIFDOCPK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void MMBBFGNGPII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLGIFDOCPK_MMBBFGNGPII_OFFSET))(this);
		}

	};
