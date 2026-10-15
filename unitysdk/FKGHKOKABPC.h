#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDJIIKGLFD;
class FKGHKOKABPC;
namespace UnityEngine { class Transform; }

#define FKGHKOKABPC_ACLNNIECDBL_OFFSET UNITYSDK_OFFSET(0x157E79D0)
#define FKGHKOKABPC_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x157E7C60)
#define FKGHKOKABPC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157E7900)
#define FKGHKOKABPC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x157E7A30)
#define FKGHKOKABPC_CTOR_OFFSET UNITYSDK_OFFSET(0x157E7970)
#define FKGHKOKABPC_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0x157E7980)
#define FKGHKOKABPC_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x157E78F0)
#define FKGHKOKABPC_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x157E7C20)
#define FKGHKOKABPC_MPFIJBMEHCE_OFFSET UNITYSDK_OFFSET(0x157E7B80)
#define FKGHKOKABPC_NDJLEDDJDCK_OFFSET UNITYSDK_OFFSET(0x157E7A80)

inline static constexpr unsigned int FKGHKOKABPC_TypeDefinitionIndex = 78022;

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
