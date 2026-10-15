#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/NCFCENAJMKJ_WorldThreeSpeState.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;
namespace System { class Object; }

#define NCFCENAJMKJ_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0xBB0B540)
#define NCFCENAJMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0AF80)
#define NCFCENAJMKJ_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0xBB0B990)
#define NCFCENAJMKJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBB0AF90)
#define NCFCENAJMKJ_JHOFCONKMDJ_OFFSET UNITYSDK_OFFSET(0xBB0B7A0)
#define NCFCENAJMKJ_JICODPDLIGK_OFFSET UNITYSDK_OFFSET(0xBB0B340)
#define NCFCENAJMKJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB0B280)
#define NCFCENAJMKJ_JOHJHMAFNLA_OFFSET UNITYSDK_OFFSET(0xBB0B0A0)
#define NCFCENAJMKJ___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xBB0BA80)

inline static constexpr unsigned int NCFCENAJMKJ_TypeDefinitionIndex = 75804;

	class NCFCENAJMKJ : public ::CBOAHKAAECG
	{
	public:
		::RPG::MVector3 PDJBFBPEHFE; // 0x28
		::System::Single LLNIGIGFCEA; // 0x34
		::NCFCENAJMKJ_WorldThreeSpeState NJJCEADBFOH; // 0x38
		::RPG::MVector3 NAMGGEJCDMP; // 0x3C
		::System::Single PGGLECDKOLM; // 0x48
		// static const ::System::String* LINFKKKAADL; // 0x0
		// static const ::System::String* LDEABAFJJLD; // 0x0
		// static const ::System::String* DJKPLBFDOCD; // 0x0
		// static const ::System::String* GHFCJGHAFIM; // 0x0
		// static const ::System::String* JPCINMNJDJK; // 0x0
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JICODPDLIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_JICODPDLIGK_OFFSET))(this);
		}

		::System::Void FKEBMDNHDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_FKEBMDNHDFK_OFFSET))(this, a1);
		}

		::System::Void JHOFCONKMDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_JHOFCONKMDJ_OFFSET))(this);
		}

		::System::Void JOHJHMAFNLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_JOHJHMAFNLA_OFFSET))(this);
		}

		::System::Void ALGBFIAIMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCFCENAJMKJ_ALGBFIAIMDJ_OFFSET))(this, a1);
		}

		::System::Void __AddEndCellEffect_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCENAJMKJ___ADDENDCELLEFFECT_B__5_0_OFFSET))(this);
		}

	};
