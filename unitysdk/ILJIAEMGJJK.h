#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/BODIAENCNJK.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class HFCPGANBGMI;

#define ILJIAEMGJJK_CTOR_OFFSET UNITYSDK_OFFSET(0x164C0B00)
#define ILJIAEMGJJK_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x164C0AF0)
#define ILJIAEMGJJK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x164BE890)
#define ILJIAEMGJJK_FJHEIEFJGGM_OFFSET UNITYSDK_OFFSET(0x164C0380)
#define ILJIAEMGJJK_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0x164BF150)
#define ILJIAEMGJJK_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x164BF7A0)
#define ILJIAEMGJJK_IOBMAEKOCLG_OFFSET UNITYSDK_OFFSET(0x164BF820)
#define ILJIAEMGJJK_JAKLFCAONLA_OFFSET UNITYSDK_OFFSET(0x164BFBB0)
#define ILJIAEMGJJK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164BE840)
#define ILJIAEMGJJK_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x164BF8E0)
#define ILJIAEMGJJK_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0x164BF1D0)
#define ILJIAEMGJJK_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x164BED10)
#define ILJIAEMGJJK_ODDFFNPOLJO_OFFSET UNITYSDK_OFFSET(0x164BF510)

	class ILJIAEMGJJK : public ::OEAMAMLDKFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void IOBMAEKOCLG(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_IOBMAEKOCLG_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void MNMPLEEMKKN(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_MNMPLEEMKKN_OFFSET))(this, a1, a2);
		}

		::System::Void JAKLFCAONLA(::HGBCMFANCOE a1, ::BODIAENCNJK a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::BODIAENCNJK, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_JAKLFCAONLA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODDFFNPOLJO(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_ODDFFNPOLJO_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion FJHEIEFJGGM(::System::Boolean a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3, ::System::Single a4)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Boolean, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_FJHEIEFJGGM_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJIAEMGJJK_EPPAFNJFCMH_OFFSET))(this);
		}

	};
