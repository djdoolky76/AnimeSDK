#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterPlayVO; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGADDOLJEDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C3F50)
#define KGADDOLJEDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3C3F60)
#define KGADDOLJEDI_IEBLFNEEPFE_OFFSET UNITYSDK_OFFSET(0xB3C42F0)
#define KGADDOLJEDI_JCGIJABMBAA_OFFSET UNITYSDK_OFFSET(0xB3C45E0)
#define KGADDOLJEDI_LHHJODPHMON_OFFSET UNITYSDK_OFFSET(0xB3C4500)
#define KGADDOLJEDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3C3FA0)
#define KGADDOLJEDI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3C4450)
#define KGADDOLJEDI_TICK_OFFSET UNITYSDK_OFFSET(0xB3C44A0)

inline static constexpr unsigned int KGADDOLJEDI_TypeDefinitionIndex = 54941;

	class KGADDOLJEDI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CharacterPlayVO* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterPlayVO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterPlayVO*))((::PBYTE)hIl2Cpp + KGADDOLJEDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADDOLJEDI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADDOLJEDI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADDOLJEDI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGADDOLJEDI_TICK_OFFSET))(this, a1);
		}

		::System::Void IEBLFNEEPFE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KGADDOLJEDI_IEBLFNEEPFE_OFFSET))(this, a1);
		}

		::System::UInt32 LHHJODPHMON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADDOLJEDI_LHHJODPHMON_OFFSET))(this);
		}

		::System::Void JCGIJABMBAA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KGADDOLJEDI_JCGIJABMBAA_OFFSET))(this, a1, a2);
		}

	};
