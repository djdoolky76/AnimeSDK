#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamLeaderRunning; }

#define CEEPMBCCODD_AOFBCECPEOD_OFFSET UNITYSDK_OFFSET(0xC77FD90)
#define CEEPMBCCODD_CTOR_OFFSET UNITYSDK_OFFSET(0xC77F130)
#define CEEPMBCCODD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC77F1C0)
#define CEEPMBCCODD_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xC77FD50)
#define CEEPMBCCODD_FCLNDOKNBJJ_OFFSET UNITYSDK_OFFSET(0xC77F880)
#define CEEPMBCCODD_GJHIECIKNEH_OFFSET UNITYSDK_OFFSET(0xC77FA90)
#define CEEPMBCCODD_OMBEONEKKFH_OFFSET UNITYSDK_OFFSET(0xC77F630)
#define CEEPMBCCODD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC77F350)
#define CEEPMBCCODD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC77F450)
#define CEEPMBCCODD_TICK_OFFSET UNITYSDK_OFFSET(0xC77F5B0)

inline static constexpr unsigned int CEEPMBCCODD_TypeDefinitionIndex = 53332;

	class CEEPMBCCODD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TeamLeaderRunning* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* FDAEECONPIL; // 0x28
		::System::Boolean ILAFECOFNLE; // 0x30
		::System::Boolean GFFNLLGJLJF; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single IMEOENBBMEC; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamLeaderRunning* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamLeaderRunning*))((::PBYTE)hIl2Cpp + CEEPMBCCODD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEPMBCCODD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEPMBCCODD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEPMBCCODD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEEPMBCCODD_TICK_OFFSET))(this, a1);
		}

		::System::Void FCLNDOKNBJJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEEPMBCCODD_FCLNDOKNBJJ_OFFSET))(this, a1);
		}

		::System::Void OMBEONEKKFH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEEPMBCCODD_OMBEONEKKFH_OFFSET))(this, a1);
		}

		::System::Void GJHIECIKNEH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CEEPMBCCODD_GJHIECIKNEH_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEPMBCCODD_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void AOFBCECPEOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEPMBCCODD_AOFBCECPEOD_OFFSET))(this);
		}

	};
