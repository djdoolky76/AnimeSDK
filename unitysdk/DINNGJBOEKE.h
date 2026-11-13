#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
class AGENEONNBML;
class IFBFJDCECML;
class IFBOFKLBBKO;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePathFind; }

#define DINNGJBOEKE_BNNPALBNLHB_OFFSET UNITYSDK_OFFSET(0x1BA78500)
#define DINNGJBOEKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA752F0)
#define DINNGJBOEKE_EIINPPBIGPE_OFFSET UNITYSDK_OFFSET(0x1BA789B0)
#define DINNGJBOEKE_FJMBDBILHNE_OFFSET UNITYSDK_OFFSET(0x1BA78A70)
#define DINNGJBOEKE_FKLIDKKAJEG_OFFSET UNITYSDK_OFFSET(0x1BA78420)
#define DINNGJBOEKE_FMHFMJFHPIJ_OFFSET UNITYSDK_OFFSET(0x1BA77AA0)
#define DINNGJBOEKE_FMNBNMCHFGH_OFFSET UNITYSDK_OFFSET(0x1BA78B80)
#define DINNGJBOEKE_GLJCHLLCOIB_OFFSET UNITYSDK_OFFSET(0x1BA77C10)
#define DINNGJBOEKE_JOGEHKAALFB_OFFSET UNITYSDK_OFFSET(0x1BA779C0)
#define DINNGJBOEKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BA777E0)
#define DINNGJBOEKE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BA78070)
#define DINNGJBOEKE_TICK_OFFSET UNITYSDK_OFFSET(0x1BA780C0)

inline static constexpr unsigned int DINNGJBOEKE_TypeDefinitionIndex = 37915;

	class DINNGJBOEKE
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Int32 PGMIOKKLHIE; // 0x38
		::System::Int32 HBDJCFFDGDD; // 0x3C
		::System::Boolean EJBKPGOBJKD; // 0x40
		::System::Boolean JEPHPLPKGNN; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 LOPMOAGGCPP; // 0x44
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*))((::PBYTE)hIl2Cpp + DINNGJBOEKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DINNGJBOEKE_TICK_OFFSET))(this, a1);
		}

		::System::Void FJMBDBILHNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_FJMBDBILHNE_OFFSET))(this);
		}

		::System::Void GLJCHLLCOIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_GLJCHLLCOIB_OFFSET))(this);
		}

		::System::Boolean BNNPALBNLHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_BNNPALBNLHB_OFFSET))(this);
		}

		::System::Void EIINPPBIGPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_EIINPPBIGPE_OFFSET))(this);
		}

		::System::Void FMHFMJFHPIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DINNGJBOEKE_FMHFMJFHPIJ_OFFSET))(this, a1);
		}

		::System::Void FKLIDKKAJEG(::IFBOFKLBBKO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBOFKLBBKO*, ::System::UInt32))((::PBYTE)hIl2Cpp + DINNGJBOEKE_FKLIDKKAJEG_OFFSET))(this, a1, a2);
		}

		::System::Void JOGEHKAALFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINNGJBOEKE_JOGEHKAALFB_OFFSET))(this);
		}

		::System::Void FMNBNMCHFGH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::CakeRaceMoveState a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + DINNGJBOEKE_FMNBNMCHFGH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
