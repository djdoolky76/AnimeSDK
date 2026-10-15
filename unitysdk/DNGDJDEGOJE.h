#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DNGDJDEGOJE_EBJFLNNEPGG;
class NECBBLNKIII;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBattleOperation; }
namespace System { class String; }

#define DNGDJDEGOJE_AKFMBGGEHGO_OFFSET UNITYSDK_OFFSET(0x119487A0)
#define DNGDJDEGOJE_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x119490B0)
#define DNGDJDEGOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x11948470)
#define DNGDJDEGOJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11948480)
#define DNGDJDEGOJE_DKNOCPGBHLB_OFFSET UNITYSDK_OFFSET(0x11949230)
#define DNGDJDEGOJE_FIEINEFIICJ_OFFSET UNITYSDK_OFFSET(0x119494F0)
#define DNGDJDEGOJE_LHDNNCEKDKI_OFFSET UNITYSDK_OFFSET(0x11948E80)
#define DNGDJDEGOJE_NAIHGCPIPOA_OFFSET UNITYSDK_OFFSET(0x11948980)
#define DNGDJDEGOJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119485F0)
#define DNGDJDEGOJE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11948B60)
#define DNGDJDEGOJE_TICK_OFFSET UNITYSDK_OFFSET(0x11948CD0)

inline static constexpr unsigned int DNGDJDEGOJE_TypeDefinitionIndex = 58865;

	class DNGDJDEGOJE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::NECBBLNKIII* IFJMGDPKMNI; // 0x20
		::RPG::GameCore::WaitBattleOperation* OFKGLJOAMLD; // 0x28
		::DNGDJDEGOJE_EBJFLNNEPGG* LFHBCLAILOB; // 0x30
		::System::Single GLHFPIGMBLN; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBattleOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBattleOperation*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_TICK_OFFSET))(this, a1);
		}

		::System::Void NAIHGCPIPOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_NAIHGCPIPOA_OFFSET))(this);
		}

		::System::Void LHDNNCEKDKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_LHDNNCEKDKI_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Int32 DKNOCPGBHLB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_DKNOCPGBHLB_OFFSET))(this);
		}

		::DNGDJDEGOJE_EBJFLNNEPGG* AKFMBGGEHGO()
		{
			return ((::DNGDJDEGOJE_EBJFLNNEPGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_AKFMBGGEHGO_OFFSET))(this);
		}

		::System::String* FIEINEFIICJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_FIEINEFIICJ_OFFSET))(this);
		}

	};
