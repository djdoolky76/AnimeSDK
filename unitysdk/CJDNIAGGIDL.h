#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBGNNLOGCLG.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CJDNIAGGIDL_AIHPJIAHOKD_OFFSET UNITYSDK_OFFSET(0xCF8F1B0)
#define CJDNIAGGIDL_BANJGKPEGFG_OFFSET UNITYSDK_OFFSET(0xCF8EBB0)
#define CJDNIAGGIDL_CKBLPBNPGKA_OFFSET UNITYSDK_OFFSET(0xCF8F2A0)
#define CJDNIAGGIDL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8E040)
#define CJDNIAGGIDL_ENMDHDJNCGN_OFFSET UNITYSDK_OFFSET(0xCF8F380)
#define CJDNIAGGIDL_FIICKNIFKOL_OFFSET UNITYSDK_OFFSET(0xCF8E0F0)
#define CJDNIAGGIDL_GAJLKKOLCNH_OFFSET UNITYSDK_OFFSET(0xCF8F3E0)
#define CJDNIAGGIDL_HBKNGAJILJG_OFFSET UNITYSDK_OFFSET(0xCF8EAF0)
#define CJDNIAGGIDL_KMPILLKDOLH_OFFSET UNITYSDK_OFFSET(0xCF8F230)
#define CJDNIAGGIDL_NFOHOFKGKLM_OFFSET UNITYSDK_OFFSET(0xCF8F140)
#define CJDNIAGGIDL_OEMMHFALFFL_OFFSET UNITYSDK_OFFSET(0xCF8E770)
#define CJDNIAGGIDL_OHPMNIHBCMB_OFFSET UNITYSDK_OFFSET(0xCF8E9C0)
#define CJDNIAGGIDL_OMFDLOCEADN_OFFSET UNITYSDK_OFFSET(0xCF8E260)

inline static constexpr unsigned int CJDNIAGGIDL_TypeDefinitionIndex = 52413;

	class CJDNIAGGIDL : public ::FBGNNLOGCLG
	{
	public:
		::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0xE0
		::System::Single MNLONPNBPMK; // 0xE8
		::System::Single NHIJIAFHAOO; // 0xEC
		::System::Single IGMFDEIJLCO; // 0xF0
		::UnityEngine::Vector3 BBCPCAKFPEN; // 0xF4
		::System::Single NINAAADLGOA; // 0x100
		::System::Single PHGOEPOKMGE; // 0x104
		::System::Single LDBPJDGPFBE; // 0x108
		::UnityEngine::Vector3 DDGJAFOFCMB; // 0x10C
		::System::Single ALPDJLABECC; // 0x118
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FIICKNIFKOL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_FIICKNIFKOL_OFFSET))(this);
		}

		::System::Void OMFDLOCEADN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_OMFDLOCEADN_OFFSET))(this);
		}

		::System::Boolean OEMMHFALFFL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_OEMMHFALFFL_OFFSET))(this, a1);
		}

		::System::Boolean OHPMNIHBCMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_OHPMNIHBCMB_OFFSET))(this);
		}

		::System::Boolean HBKNGAJILJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_HBKNGAJILJG_OFFSET))(this);
		}

		::System::Void BANJGKPEGFG(::RPG::GameCore::CharacterMotionFlag a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::Client::CameraBlendCurve* a9, ::System::Single a10, ::System::Single a11, ::RPG::GameCore::TaskContext* a12, ::RPG::GameCore::TaskConfig* a13, ::System::Single a14, ::System::Single a15, ::System::Single a16, ::System::Single a17, ::System::Single a18, ::System::Boolean a19, ::System::Single a20, ::System::Single a21)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_BANJGKPEGFG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
		}

		::System::Void AIHPJIAHOKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_AIHPJIAHOKD_OFFSET))(this);
		}

		::System::Void KMPILLKDOLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_KMPILLKDOLH_OFFSET))(this);
		}

		::System::Void CKBLPBNPGKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_CKBLPBNPGKA_OFFSET))(this);
		}

		::System::Void ENMDHDJNCGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_ENMDHDJNCGN_OFFSET))(this);
		}

		::System::Void NFOHOFKGKLM(::RPG::Client::CameraBlendCurve* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraBlendCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_NFOHOFKGKLM_OFFSET))(this, a1, a2);
		}

		::System::Void GAJLKKOLCNH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJDNIAGGIDL_GAJLKKOLCNH_OFFSET))(this, a1);
		}

	};
