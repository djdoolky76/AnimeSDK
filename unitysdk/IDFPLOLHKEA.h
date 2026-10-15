#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MonsterBehaviour; }
namespace RPG::GameCore { class TaskContext; }

#define IDFPLOLHKEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EBC800)
#define IDFPLOLHKEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EBC8B0)
#define IDFPLOLHKEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EBC990)
#define IDFPLOLHKEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EBCA30)
#define IDFPLOLHKEA_PDLJGLLHGCC_OFFSET UNITYSDK_OFFSET(0x15EBCBF0)
#define IDFPLOLHKEA_TICK_OFFSET UNITYSDK_OFFSET(0x15EBCAB0)

inline static constexpr unsigned int IDFPLOLHKEA_TypeDefinitionIndex = 53030;

	class IDFPLOLHKEA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonsterBehaviour* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* ECMFFNPIHGD; // 0x28
		::System::Int32 ONJKHFHOJKN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterBehaviour* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + IDFPLOLHKEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFPLOLHKEA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFPLOLHKEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFPLOLHKEA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDFPLOLHKEA_TICK_OFFSET))(this, a1);
		}

		::System::Int32 PDLJGLLHGCC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFPLOLHKEA_PDLJGLLHGCC_OFFSET))(this);
		}

	};
