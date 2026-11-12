#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DisableCharacterVO; }
namespace RPG::GameCore { class TaskContext; }

#define DGLBJHLOHNC_CTOR_OFFSET UNITYSDK_OFFSET(0xF422A10)
#define DGLBJHLOHNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF422A20)
#define DGLBJHLOHNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF422A60)
#define DGLBJHLOHNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF422E60)
#define DGLBJHLOHNC_TICK_OFFSET UNITYSDK_OFFSET(0xF422EB0)

inline static constexpr unsigned int DGLBJHLOHNC_TypeDefinitionIndex = 56176;

	class DGLBJHLOHNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DisableCharacterVO* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableCharacterVO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableCharacterVO*))((::PBYTE)hIl2Cpp + DGLBJHLOHNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBJHLOHNC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBJHLOHNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBJHLOHNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGLBJHLOHNC_TICK_OFFSET))(this, a1);
		}

	};
