#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
#include "unitysdk/System/Object.h"
class AENHJIPFJPA;
class MEJBGGBBDIC;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define LOKFDBENEKJ_BBDELFKGNJH_OFFSET UNITYSDK_OFFSET(0xB800B80)
#define LOKFDBENEKJ_BMAIBHEMACJ_OFFSET UNITYSDK_OFFSET(0xB800D40)
#define LOKFDBENEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8006A0)
#define LOKFDBENEKJ_FDJIDPJOFGN_OFFSET UNITYSDK_OFFSET(0xB800800)
#define LOKFDBENEKJ_FGMEBEGDHCN_OFFSET UNITYSDK_OFFSET(0xB800C60)
#define LOKFDBENEKJ_HHLMKAPGLOL_OFFSET UNITYSDK_OFFSET(0xB8008E0)
#define LOKFDBENEKJ_HNNIMCLCODO_OFFSET UNITYSDK_OFFSET(0xB800AA0)
#define LOKFDBENEKJ_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0xB800DD0)
#define LOKFDBENEKJ_MFHMDEJBBAJ_OFFSET UNITYSDK_OFFSET(0xB8009C0)
#define LOKFDBENEKJ_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xB8006B0)

inline static constexpr unsigned int LOKFDBENEKJ_TypeDefinitionIndex = 75493;

	class LOKFDBENEKJ : public ::System::Object
	{
	public:
		::AENHJIPFJPA* IBPBJBOKKMF; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource BPKKKMOCFIP; // 0x18
		::System::Void _ctor(::AENHJIPFJPA* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::AENHJIPFJPA*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean OIBKPJEGPOK(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_OIBKPJEGPOK_OFFSET))(this, a1, a2);
		}

		::System::Void FDJIDPJOFGN(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_FDJIDPJOFGN_OFFSET))(this, a1, a2);
		}

		::System::Void HHLMKAPGLOL(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_HHLMKAPGLOL_OFFSET))(this, a1, a2);
		}

		::System::Void MFHMDEJBBAJ(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_MFHMDEJBBAJ_OFFSET))(this, a1, a2);
		}

		::System::Void HNNIMCLCODO(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_HNNIMCLCODO_OFFSET))(this, a1, a2);
		}

		::System::Void BBDELFKGNJH(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_BBDELFKGNJH_OFFSET))(this, a1, a2);
		}

		::System::Void FGMEBEGDHCN(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_FGMEBEGDHCN_OFFSET))(this, a1, a2);
		}

		::System::Boolean BMAIBHEMACJ(::MEJBGGBBDIC* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEJBGGBBDIC*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_BMAIBHEMACJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource IOIFPHAMFDF()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKFDBENEKJ_IOIFPHAMFDF_OFFSET))(this);
		}

	};
