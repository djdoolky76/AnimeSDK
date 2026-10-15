#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterMap; }
namespace RPG::GameCore { class TaskContext; }

#define IJNLPGNLDIB_CTOR_OFFSET UNITYSDK_OFFSET(0x16471C60)
#define IJNLPGNLDIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16471C70)
#define IJNLPGNLDIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16471CB0)
#define IJNLPGNLDIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16471F40)
#define IJNLPGNLDIB_TICK_OFFSET UNITYSDK_OFFSET(0x16471F90)

inline static constexpr unsigned int IJNLPGNLDIB_TypeDefinitionIndex = 52754;

	class IJNLPGNLDIB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::EnterMap* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMap*))((::PBYTE)hIl2Cpp + IJNLPGNLDIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNLPGNLDIB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNLPGNLDIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNLPGNLDIB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJNLPGNLDIB_TICK_OFFSET))(this, a1);
		}

	};
