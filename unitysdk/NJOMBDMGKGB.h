#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCBPNHHMAFJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define NJOMBDMGKGB_CANBGCJINAE_OFFSET UNITYSDK_OFFSET(0x1A7A4AE0)
#define NJOMBDMGKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A5C60)
#define NJOMBDMGKGB_EMBDIMBJFGE_OFFSET UNITYSDK_OFFSET(0x1A7A3D00)
#define NJOMBDMGKGB_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1A7A5C50)
#define NJOMBDMGKGB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1A7A4210)
#define NJOMBDMGKGB_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x1A7A3BE0)
#define NJOMBDMGKGB_GOCMBBKBIBH_OFFSET UNITYSDK_OFFSET(0x1A7A59F0)
#define NJOMBDMGKGB_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x1A7A4820)
#define NJOMBDMGKGB_HCDFBIPODLD_OFFSET UNITYSDK_OFFSET(0x1A7A37D0)
#define NJOMBDMGKGB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1A7A3A20)
#define NJOMBDMGKGB_IJCLCMAJBHJ_OFFSET UNITYSDK_OFFSET(0x1A7A55C0)
#define NJOMBDMGKGB_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0x1A7A54D0)
#define NJOMBDMGKGB_KPCEDAHLLBK_OFFSET UNITYSDK_OFFSET(0x1A7A5AC0)
#define NJOMBDMGKGB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A7A3700)
#define NJOMBDMGKGB_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0x1A7A5350)
#define NJOMBDMGKGB_LLOPPKPLIHF_OFFSET UNITYSDK_OFFSET(0x1A7A52E0)
#define NJOMBDMGKGB_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1A7A44F0)
#define NJOMBDMGKGB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A7A4630)

inline static constexpr unsigned int NJOMBDMGKGB_TypeDefinitionIndex = 79123;

	class NJOMBDMGKGB : public ::BCBPNHHMAFJ
	{
	public:
		::System::Boolean FMIMNOJLFNN; // 0xE8
		::System::Boolean PHKIBLCODMH; // 0xE9
		::System::Byte _padding0[0x2];
		::System::Single DBHIOFJHLGC; // 0xEC
		::System::Single PLKCGAHOBOM; // 0xF0
		::System::Single NPKAOPOLMCH; // 0xF4
		::System::Single EFJNDBIHCPK; // 0xF8
		// static const ::System::Object MGLLFPDEKMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJJFCIKKA(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_LIFJJFCIKKA_OFFSET))(this, a1);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_JCDFALFLNJL_OFFSET))(this);
		}

		::System::Void IJCLCMAJBHJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_IJCLCMAJBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void GOCMBBKBIBH(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_GOCMBBKBIBH_OFFSET))(this, a1);
		}

		::System::Void GGCCNDAIMDF(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Void CANBGCJINAE(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_CANBGCJINAE_OFFSET))(this, a1);
		}

		::System::Void LLOPPKPLIHF(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_LLOPPKPLIHF_OFFSET))(this, a1, a2);
		}

		::System::Void EMBDIMBJFGE(::JAODHHPIKGJ* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_EMBDIMBJFGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KPCEDAHLLBK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_KPCEDAHLLBK_OFFSET))(this, a1, a2);
		}

		::System::Void HCDFBIPODLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_HCDFBIPODLD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMBDMGKGB_EPPAFNJFCMH_OFFSET))(this);
		}

	};
