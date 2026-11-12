#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJOMBDMGKGB.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class JAODHHPIKGJ;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define DGBHGHNHBHO_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0xF414C20)
#define DGBHGHNHBHO_CTOR_OFFSET UNITYSDK_OFFSET(0xF414F00)
#define DGBHGHNHBHO_DGJIJMGAHCM_OFFSET UNITYSDK_OFFSET(0xF414C90)
#define DGBHGHNHBHO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xF414EF0)
#define DGBHGHNHBHO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xF4149C0)
#define DGBHGHNHBHO_IJCLCMAJBHJ_OFFSET UNITYSDK_OFFSET(0xF414E30)
#define DGBHGHNHBHO_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0xF414AB0)
#define DGBHGHNHBHO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xF414A30)
#define DGBHGHNHBHO_OCPKOILCJDC_OFFSET UNITYSDK_OFFSET(0xF414E90)

inline static constexpr unsigned int DGBHGHNHBHO_TypeDefinitionIndex = 79127;

	class DGBHGHNHBHO : public ::NJOMBDMGKGB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJJFCIKKA(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_LIFJJFCIKKA_OFFSET))(this, a1);
		}

		::System::Void IJCLCMAJBHJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_IJCLCMAJBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void DGJIJMGAHCM(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_DGJIJMGAHCM_OFFSET))(this, a1, a2);
		}

		::System::Single OCPKOILCJDC(::RPG::GameCore::FiveDimTrampolineConfig* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_OCPKOILCJDC_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBHGHNHBHO_ANMDLJPJEHA_OFFSET))(this);
		}

	};
