#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayPenaconyChroniclePerformance; }
namespace RPG::GameCore { class TaskContext; }

#define JPLPILECHFF_AEGIKGKJDOK_OFFSET UNITYSDK_OFFSET(0x1B506B80)
#define JPLPILECHFF_BCOFJAMNNGJ_OFFSET UNITYSDK_OFFSET(0x1B506360)
#define JPLPILECHFF_CLLDAEBFFOD_OFFSET UNITYSDK_OFFSET(0x1B5069B0)
#define JPLPILECHFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5061C0)
#define JPLPILECHFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5061D0)
#define JPLPILECHFF_EFPFNKBMKOO_OFFSET UNITYSDK_OFFSET(0x1B506A90)
#define JPLPILECHFF_ELJNLMOKCNH_OFFSET UNITYSDK_OFFSET(0x1B5068D0)
#define JPLPILECHFF_GBBFEEDFANP_OFFSET UNITYSDK_OFFSET(0x1B506520)
#define JPLPILECHFF_HFCKECHPIJD_OFFSET UNITYSDK_OFFSET(0x1B506640)
#define JPLPILECHFF_HINNJJPHIMF_OFFSET UNITYSDK_OFFSET(0x1B506730)
#define JPLPILECHFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B506210)
#define JPLPILECHFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B506C40)
#define JPLPILECHFF_PPIAIMIJMFB_OFFSET UNITYSDK_OFFSET(0x1B506BF0)
#define JPLPILECHFF_TICK_OFFSET UNITYSDK_OFFSET(0x1B506C90)

inline static constexpr unsigned int JPLPILECHFF_TypeDefinitionIndex = 54225;

	class JPLPILECHFF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayPenaconyChroniclePerformance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyChroniclePerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyChroniclePerformance*))((::PBYTE)hIl2Cpp + JPLPILECHFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BCOFJAMNNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_BCOFJAMNNGJ_OFFSET))(this);
		}

		::System::Void GBBFEEDFANP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_GBBFEEDFANP_OFFSET))(this);
		}

		::System::Void HFCKECHPIJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_HFCKECHPIJD_OFFSET))(this);
		}

		::System::Void HINNJJPHIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_HINNJJPHIMF_OFFSET))(this);
		}

		::System::Void ELJNLMOKCNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_ELJNLMOKCNH_OFFSET))(this);
		}

		::System::Void CLLDAEBFFOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_CLLDAEBFFOD_OFFSET))(this);
		}

		::System::Void EFPFNKBMKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_EFPFNKBMKOO_OFFSET))(this);
		}

		::System::Void AEGIKGKJDOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_AEGIKGKJDOK_OFFSET))(this);
		}

		::System::Void PPIAIMIJMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_PPIAIMIJMFB_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLPILECHFF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPLPILECHFF_TICK_OFFSET))(this, a1);
		}

	};
