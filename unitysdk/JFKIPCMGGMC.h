#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
class AJDJIIKGLFD;
class JFKIPCMGGMC;

#define JFKIPCMGGMC_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB9999C0)
#define JFKIPCMGGMC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9996C0)
#define JFKIPCMGGMC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB999740)
#define JFKIPCMGGMC_CMGEPNMKOIH_OFFSET UNITYSDK_OFFSET(0xB999670)
#define JFKIPCMGGMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB999730)
#define JFKIPCMGGMC_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB9996B0)
#define JFKIPCMGGMC_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB9997F0)

inline static constexpr unsigned int JFKIPCMGGMC_TypeDefinitionIndex = 80763;

	class JFKIPCMGGMC : public ::EFENAEKOKBI
	{
	public:
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CMGEPNMKOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_CMGEPNMKOIH_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_JKOKFFCBJLJ_OFFSET))(this);
		}

		static ::JFKIPCMGGMC* BPLPBPMEODA(::AJDJIIKGLFD* a1)
		{
			return ((::JFKIPCMGGMC*(*)(::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKIPCMGGMC_AHEEAFKFALM_OFFSET))(this);
		}

	};
