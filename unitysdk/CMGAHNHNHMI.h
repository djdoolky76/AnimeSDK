#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
class AJDJIIKGLFD;
class CMGAHNHNHMI;
namespace UnityEngine { class Transform; }

#define CMGAHNHNHMI_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xDA310D0)
#define CMGAHNHNHMI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDA30D40)
#define CMGAHNHNHMI_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xDA30E10)
#define CMGAHNHNHMI_CTOR_OFFSET UNITYSDK_OFFSET(0xDA30DB0)
#define CMGAHNHNHMI_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0xDA30DC0)
#define CMGAHNHNHMI_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xDA30D30)
#define CMGAHNHNHMI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDA30E50)
#define CMGAHNHNHMI_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xDA31000)

	class CMGAHNHNHMI : public ::EFENAEKOKBI
	{
	public:
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x28
		// static const ::System::Object LMEIKNMJGDL; // 0x0
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_JKOKFFCBJLJ_OFFSET))(this);
		}

		static ::CMGAHNHNHMI* BPLPBPMEODA(::AJDJIIKGLFD* a1)
		{
			return ((::CMGAHNHNHMI*(*)(::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void IIOIBAAMBHL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_IIOIBAAMBHL_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGAHNHNHMI_OMJCIPOOJNF_OFFSET))(this);
		}

	};
