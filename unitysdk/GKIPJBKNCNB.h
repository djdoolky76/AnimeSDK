#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBPMHGMEOH;
class POHNBOACDHB;

#define GKIPJBKNCNB_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15A8D8C0)
#define GKIPJBKNCNB_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A8DB30)
#define GKIPJBKNCNB_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15A8D700)
#define GKIPJBKNCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A919B0)
#define GKIPJBKNCNB_EMCLIFKLNAA_OFFSET UNITYSDK_OFFSET(0x15A906E0)
#define GKIPJBKNCNB_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0x15A8F680)
#define GKIPJBKNCNB_GAPJCNMJIPG_OFFSET UNITYSDK_OFFSET(0x15A8FF80)
#define GKIPJBKNCNB_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x15A91970)
#define GKIPJBKNCNB_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x15A91030)
#define GKIPJBKNCNB_GNMPHJDHBKK_OFFSET UNITYSDK_OFFSET(0x15A8F7E0)
#define GKIPJBKNCNB_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x15A8EEC0)
#define GKIPJBKNCNB_HCEEFNKGKLL_OFFSET UNITYSDK_OFFSET(0x15A8F6C0)
#define GKIPJBKNCNB_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0x15A8E8E0)
#define GKIPJBKNCNB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x15A8DE20)
#define GKIPJBKNCNB_JPDMJCDHPMC_OFFSET UNITYSDK_OFFSET(0x15A901E0)
#define GKIPJBKNCNB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A8D1A0)
#define GKIPJBKNCNB_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0x15A8DF70)
#define GKIPJBKNCNB_NCPIFNCFGBE_OFFSET UNITYSDK_OFFSET(0x15A8D3D0)
#define GKIPJBKNCNB_NNFAEMDBIHC_OFFSET UNITYSDK_OFFSET(0x15A8DFD0)

inline static constexpr unsigned int GKIPJBKNCNB_TypeDefinitionIndex = 77047;

	class GKIPJBKNCNB : public ::CBIKMJHGEDE
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit>* KIPGEBIACHF; // 0x18
		::System::Single CFOHJFIOCMO; // 0x20
		::System::Single CEGEFFGMPNL; // 0x24
		::System::Single LDPNNKKBEHK; // 0x28
		::System::Single FLHOEGBFPJB; // 0x2C
		::System::Single MPFEKLNFEOC; // 0x30
		::UnityEngine::Vector3 AMBHDMPIKHP; // 0x34
		::System::Single GFGHPPEKBOA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_CLEAR_OFFSET))(this);
		}

		::System::Void NCPIFNCFGBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_NCPIFNCFGBE_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Void NNFAEMDBIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_NNFAEMDBIHC_OFFSET))(this);
		}

		::System::Boolean HLGPIAMPANI(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_HLGPIAMPANI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HBJBCBJAHOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_HBJBCBJAHOJ_OFFSET))(this, a1);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void HCEEFNKGKLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_HCEEFNKGKLL_OFFSET))(this);
		}

		::System::Void GNMPHJDHBKK(::DEBPMHGMEOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBPMHGMEOH*))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_GNMPHJDHBKK_OFFSET))(this, a1);
		}

		::System::Boolean JPDMJCDHPMC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_JPDMJCDHPMC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GAPJCNMJIPG(::DEBPMHGMEOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBPMHGMEOH*))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_GAPJCNMJIPG_OFFSET))(this, a1);
		}

		::System::Boolean EMCLIFKLNAA(::DEBPMHGMEOH* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEBPMHGMEOH*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_EMCLIFKLNAA_OFFSET))(this, a1, a2);
		}

		::System::Void GGCCNDAIMDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_GGCCNDAIMDF_OFFSET))(this);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIPJBKNCNB_GBCHFFLMIIC_OFFSET))(this);
		}

	};
