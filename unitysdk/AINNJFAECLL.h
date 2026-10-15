#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class AchievementWaitTime; }
namespace RPG::GameCore { class TaskContext; }

#define AINNJFAECLL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CA9F30)
#define AINNJFAECLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CA9F40)
#define AINNJFAECLL_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0x12CAA530)
#define AINNJFAECLL_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x12CA9FC0)
#define AINNJFAECLL_GJHIECIKNEH_OFFSET UNITYSDK_OFFSET(0x12CAA270)
#define AINNJFAECLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CAA010)
#define AINNJFAECLL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CAA0E0)
#define AINNJFAECLL_TICK_OFFSET UNITYSDK_OFFSET(0x12CAA160)

inline static constexpr unsigned int AINNJFAECLL_TypeDefinitionIndex = 57849;

	class AINNJFAECLL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::AchievementWaitTime* IGHAHBNLIJA; // 0x20
		::System::Boolean LCFDCKKNNFO; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single LLNIGIGFCEA; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AchievementWaitTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AchievementWaitTime*))((::PBYTE)hIl2Cpp + AINNJFAECLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNJFAECLL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNJFAECLL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNJFAECLL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AINNJFAECLL_TICK_OFFSET))(this, a1);
		}

		::System::Void GJHIECIKNEH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AINNJFAECLL_GJHIECIKNEH_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNJFAECLL_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNJFAECLL_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
