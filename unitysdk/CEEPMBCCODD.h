#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamLeaderRunning; }

#define CEEPMBCCODD_AOFBCECPEOD_OFFSET UNITYSDK_OFFSET(0xC783350)
#define CEEPMBCCODD_CTOR_OFFSET UNITYSDK_OFFSET(0xC7826D0)
#define CEEPMBCCODD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC782760)
#define CEEPMBCCODD_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xC783310)
#define CEEPMBCCODD_FCLNDOKNBJJ_OFFSET UNITYSDK_OFFSET(0xC782E40)
#define CEEPMBCCODD_GJHIECIKNEH_OFFSET UNITYSDK_OFFSET(0xC783050)
#define CEEPMBCCODD_OMBEONEKKFH_OFFSET UNITYSDK_OFFSET(0xC782BF0)
#define CEEPMBCCODD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC782900)
#define CEEPMBCCODD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC782A00)
#define CEEPMBCCODD_TICK_OFFSET UNITYSDK_OFFSET(0xC782B70)

inline static constexpr unsigned int CEEPMBCCODD_TypeDefinitionIndex = 53332;

	class CEEPMBCCODD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FDAEECONPIL; // 0x18
		::RPG::GameCore::TeamLeaderRunning* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean GFFNLLGJLJF; // 0x30
		::System::Boolean ILAFECOFNLE; // 0x31
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
