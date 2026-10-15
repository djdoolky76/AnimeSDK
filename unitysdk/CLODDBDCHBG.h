#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SurfaceBorderType.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/KLNKLOMDIIC.h"
class HFCPGANBGMI;

#define CLODDBDCHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA214F0)
#define CLODDBDCHBG_EKDDGABODCO_OFFSET UNITYSDK_OFFSET(0xDA214E0)
#define CLODDBDCHBG_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xDA214B0)
#define CLODDBDCHBG_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xDA1EAD0)
#define CLODDBDCHBG_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0xDA1F680)
#define CLODDBDCHBG_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xDA1F6E0)
#define CLODDBDCHBG_HPGNIJLFLHO_OFFSET UNITYSDK_OFFSET(0xDA20570)
#define CLODDBDCHBG_IOBMAEKOCLG_OFFSET UNITYSDK_OFFSET(0xDA1F760)
#define CLODDBDCHBG_KFIBFFMNKAK_OFFSET UNITYSDK_OFFSET(0xDA214D0)
#define CLODDBDCHBG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDA1EA80)
#define CLODDBDCHBG_LDJDINLKGEO_OFFSET UNITYSDK_OFFSET(0xDA214C0)
#define CLODDBDCHBG_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xDA1F820)
#define CLODDBDCHBG_NJCMDMFEHLE_OFFSET UNITYSDK_OFFSET(0xDA1FD30)
#define CLODDBDCHBG_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xDA1F230)
#define CLODDBDCHBG_ONNIPGJJEEP_OFFSET UNITYSDK_OFFSET(0xDA213A0)

inline static constexpr unsigned int CLODDBDCHBG_TypeDefinitionIndex = 77001;

	class CLODDBDCHBG : public ::OEAMAMLDKFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLODDBDCHBG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + CLODDBDCHBG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLODDBDCHBG_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLODDBDCHBG_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLODDBDCHBG_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLODDBDCHBG_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void IOBMAEKOCLG(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLODDBDCHBG_IOBMAEKOCLG_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CLODDBDCHBG_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void NJCMDMFEHLE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CLODDBDCHBG_NJCMDMFEHLE_OFFSET))(this, a1);
		}

		::System::Void HPGNIJLFLHO(::HGBCMFANCOE a1, ::KLNKLOMDIIC a2, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::KLNKLOMDIIC, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType))((::PBYTE)hIl2Cpp + CLODDBDCHBG_HPGNIJLFLHO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ONNIPGJJEEP(::HGBCMFANCOE a1, ::KLNKLOMDIIC a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::KLNKLOMDIIC, ::System::UInt32))((::PBYTE)hIl2Cpp + CLODDBDCHBG_ONNIPGJJEEP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLODDBDCHBG_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean LDJDINLKGEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLODDBDCHBG_LDJDINLKGEO_OFFSET))(this);
		}

		::System::Boolean KFIBFFMNKAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLODDBDCHBG_KFIBFFMNKAK_OFFSET))(this);
		}

		::System::Boolean EKDDGABODCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLODDBDCHBG_EKDDGABODCO_OFFSET))(this);
		}

	};
