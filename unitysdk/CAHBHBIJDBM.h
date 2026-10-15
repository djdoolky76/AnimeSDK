#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAHBHBIJDBM_WorldFourSpeState.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;
namespace System { class Object; }

#define CAHBHBIJDBM_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0xC47EF40)
#define CAHBHBIJDBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC47EA10)
#define CAHBHBIJDBM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC47EA30)
#define CAHBHBIJDBM_JHOFCONKMDJ_OFFSET UNITYSDK_OFFSET(0xC47F150)
#define CAHBHBIJDBM_JICODPDLIGK_OFFSET UNITYSDK_OFFSET(0xC47ED40)
#define CAHBHBIJDBM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC47EC80)
#define CAHBHBIJDBM_JOHJHMAFNLA_OFFSET UNITYSDK_OFFSET(0xC47EB40)
#define CAHBHBIJDBM_MDKNDALHDKC_OFFSET UNITYSDK_OFFSET(0xC47EC30)
#define CAHBHBIJDBM___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xC47F340)

	class CAHBHBIJDBM : public ::CBOAHKAAECG
	{
	public:
		::CAHBHBIJDBM_WorldFourSpeState NJJCEADBFOH; // 0x28
		::RPG::MVector3 NAMGGEJCDMP; // 0x2C
		// static const ::System::String* LINFKKKAADL; // 0x0
		// static const ::System::String* LDEABAFJJLD; // 0x0
		// static const ::System::String* JPCINMNJDJK; // 0x0
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void MDKNDALHDKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_MDKNDALHDKC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JICODPDLIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_JICODPDLIGK_OFFSET))(this);
		}

		::System::Void JHOFCONKMDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_JHOFCONKMDJ_OFFSET))(this);
		}

		::System::Void JOHJHMAFNLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_JOHJHMAFNLA_OFFSET))(this);
		}

		::System::Void ALGBFIAIMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAHBHBIJDBM_ALGBFIAIMDJ_OFFSET))(this, a1);
		}

		::System::Void __AddEndCellEffect_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHBHBIJDBM___ADDENDCELLEFFECT_B__5_0_OFFSET))(this);
		}

	};
