#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class WaitTurnCount; }

#define APGOBPFGDHD_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0x15B9EF90)
#define APGOBPFGDHD_CIBMNAAECME_OFFSET UNITYSDK_OFFSET(0x15B9F320)
#define APGOBPFGDHD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9E8D0)
#define APGOBPFGDHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9E960)
#define APGOBPFGDHD_HOLECNABENN_OFFSET UNITYSDK_OFFSET(0x15B9F030)
#define APGOBPFGDHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B9EAF0)
#define APGOBPFGDHD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B9EE00)
#define APGOBPFGDHD_POCHEADDAOC_OFFSET UNITYSDK_OFFSET(0x15B9EC40)
#define APGOBPFGDHD_TICK_OFFSET UNITYSDK_OFFSET(0x15B9EE50)

inline static constexpr unsigned int APGOBPFGDHD_TypeDefinitionIndex = 58934;

	class APGOBPFGDHD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitTurnCount* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* GADOCFKMNHP; // 0x28
		::System::UInt32 BAIGMKOMMBK; // 0x30
		::System::UInt32 BECPJHKGDJF; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTurnCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + APGOBPFGDHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOBPFGDHD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOBPFGDHD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOBPFGDHD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APGOBPFGDHD_TICK_OFFSET))(this, a1);
		}

		::System::Void HOLECNABENN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + APGOBPFGDHD_HOLECNABENN_OFFSET))(this, a1);
		}

		::System::Boolean POCHEADDAOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOBPFGDHD_POCHEADDAOC_OFFSET))(this);
		}

		::System::UInt32 CIBMNAAECME(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + APGOBPFGDHD_CIBMNAAECME_OFFSET))(this, a1);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOBPFGDHD_BBLAGJIFKEK_OFFSET))(this);
		}

	};
