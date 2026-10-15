#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayPenaconyChroniclePerformance; }
namespace RPG::GameCore { class TaskContext; }

#define JPLPILECHFF_AEGIKGKJDOK_OFFSET UNITYSDK_OFFSET(0xB2CA5B0)
#define JPLPILECHFF_BCOFJAMNNGJ_OFFSET UNITYSDK_OFFSET(0xB2C9D90)
#define JPLPILECHFF_CLLDAEBFFOD_OFFSET UNITYSDK_OFFSET(0xB2CA3E0)
#define JPLPILECHFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C9BF0)
#define JPLPILECHFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2C9C00)
#define JPLPILECHFF_EFPFNKBMKOO_OFFSET UNITYSDK_OFFSET(0xB2CA4C0)
#define JPLPILECHFF_ELJNLMOKCNH_OFFSET UNITYSDK_OFFSET(0xB2CA300)
#define JPLPILECHFF_GBBFEEDFANP_OFFSET UNITYSDK_OFFSET(0xB2C9F50)
#define JPLPILECHFF_HFCKECHPIJD_OFFSET UNITYSDK_OFFSET(0xB2CA070)
#define JPLPILECHFF_HINNJJPHIMF_OFFSET UNITYSDK_OFFSET(0xB2CA160)
#define JPLPILECHFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2C9C40)
#define JPLPILECHFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2CA670)
#define JPLPILECHFF_PPIAIMIJMFB_OFFSET UNITYSDK_OFFSET(0xB2CA620)
#define JPLPILECHFF_TICK_OFFSET UNITYSDK_OFFSET(0xB2CA6C0)

inline static constexpr unsigned int JPLPILECHFF_TypeDefinitionIndex = 53065;

	class JPLPILECHFF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayPenaconyChroniclePerformance* OFKGLJOAMLD; // 0x20
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
