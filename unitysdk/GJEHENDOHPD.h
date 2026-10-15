#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CurvePropGroupPuzzleFinishListener; }
namespace RPG::GameCore { class TaskContext; }

#define GJEHENDOHPD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A61F60)
#define GJEHENDOHPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A61F70)
#define GJEHENDOHPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A61FB0)
#define GJEHENDOHPD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A62060)
#define GJEHENDOHPD_TICK_OFFSET UNITYSDK_OFFSET(0x15A620B0)

inline static constexpr unsigned int GJEHENDOHPD_TypeDefinitionIndex = 58062;

	class GJEHENDOHPD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CurvePropGroupPuzzleFinishListener* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*))((::PBYTE)hIl2Cpp + GJEHENDOHPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHENDOHPD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHENDOHPD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHENDOHPD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJEHENDOHPD_TICK_OFFSET))(this, a1);
		}

	};
