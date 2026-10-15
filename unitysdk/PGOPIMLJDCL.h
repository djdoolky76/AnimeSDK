#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
class AGCPAMNLCGN;
class AJDJIIKGLFD;
class PGOPIMLJDCL;
namespace Cinemachine { class CinemachineVirtualCamera; }

#define PGOPIMLJDCL_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC235BD0)
#define PGOPIMLJDCL_BDJHKINKPGC_OFFSET UNITYSDK_OFFSET(0xC235050)
#define PGOPIMLJDCL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2350F0)
#define PGOPIMLJDCL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC235220)
#define PGOPIMLJDCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC235160)
#define PGOPIMLJDCL_HJBIBFIOAGL_OFFSET UNITYSDK_OFFSET(0xC235A70)
#define PGOPIMLJDCL_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xC235040)
#define PGOPIMLJDCL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xC2356F0)
#define PGOPIMLJDCL_NECIOEMCJHI_OFFSET UNITYSDK_OFFSET(0xC235170)
#define PGOPIMLJDCL_OIKHEIOONAL_OFFSET UNITYSDK_OFFSET(0xC2354F0)
#define PGOPIMLJDCL_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xC2358C0)

	class PGOPIMLJDCL : public ::EFENAEKOKBI
	{
	public:
		::AGCPAMNLCGN* IFNKOIGKIAO; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_JKOKFFCBJLJ_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* BDJHKINKPGC()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_BDJHKINKPGC_OFFSET))(this);
		}

		static ::PGOPIMLJDCL* BPLPBPMEODA(::AJDJIIKGLFD* a1)
		{
			return ((::PGOPIMLJDCL*(*)(::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void NECIOEMCJHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_NECIOEMCJHI_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_OMJCIPOOJNF_OFFSET))(this);
		}

		::System::Single HJBIBFIOAGL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_HJBIBFIOAGL_OFFSET))(this);
		}

		::System::Void OIKHEIOONAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOPIMLJDCL_OIKHEIOONAL_OFFSET))(this);
		}

	};
