#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDJIIKGLFD;
class FKGHKOKABPC;
namespace UnityEngine { class Transform; }

#define FKGHKOKABPC_ACLNNIECDBL_OFFSET UNITYSDK_OFFSET(0x157F3610)
#define FKGHKOKABPC_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x157F38A0)
#define FKGHKOKABPC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157F3540)
#define FKGHKOKABPC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x157F3670)
#define FKGHKOKABPC_CTOR_OFFSET UNITYSDK_OFFSET(0x157F35B0)
#define FKGHKOKABPC_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0x157F35C0)
#define FKGHKOKABPC_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x157F3530)
#define FKGHKOKABPC_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x157F3860)
#define FKGHKOKABPC_MPFIJBMEHCE_OFFSET UNITYSDK_OFFSET(0x157F37C0)
#define FKGHKOKABPC_NDJLEDDJDCK_OFFSET UNITYSDK_OFFSET(0x157F36C0)

	class FKGHKOKABPC : public ::EFENAEKOKBI
	{
	public:
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x28
		::UnityEngine::Vector3 ALOJDABCGOD; // 0x30
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + FKGHKOKABPC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHKOKABPC_JKOKFFCBJLJ_OFFSET))(this);
		}

		static ::FKGHKOKABPC* BPLPBPMEODA(::AJDJIIKGLFD* a1)
		{
			return ((::FKGHKOKABPC*(*)(::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + FKGHKOKABPC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void IIOIBAAMBHL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FKGHKOKABPC_IIOIBAAMBHL_OFFSET))(this, a1);
		}

		::System::Void ACLNNIECDBL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FKGHKOKABPC_ACLNNIECDBL_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHKOKABPC_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHKOKABPC_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHKOKABPC_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void NDJLEDDJDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHKOKABPC_NDJLEDDJDCK_OFFSET))(this);
		}

		::System::Void MPFIJBMEHCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHKOKABPC_MPFIJBMEHCE_OFFSET))(this);
		}

	};
