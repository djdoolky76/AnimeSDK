#pragma once
#include "unitysdk/unitysdk.h"
class BDLMDFEOJNI;
class HGJLBGPLHIA;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define IECKIBNMODA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD9B50)
#define IECKIBNMODA_FHPAMJCKENP_OFFSET UNITYSDK_OFFSET(0x1CAD9AF0)
#define IECKIBNMODA_HNIOMOEHLLF_OFFSET UNITYSDK_OFFSET(0x1CAD93A0)
#define IECKIBNMODA_IBPFPNKJMMP_OFFSET UNITYSDK_OFFSET(0x1CAD9820)
#define IECKIBNMODA_MLFGJPLMMOB_OFFSET UNITYSDK_OFFSET(0x1CAD9420)
#define IECKIBNMODA_NAKLJNNBJCF_OFFSET UNITYSDK_OFFSET(0x1CAD9400)
#define IECKIBNMODA_NDAJLMGINBJ_OFFSET UNITYSDK_OFFSET(0x1CAD92C0)

inline static constexpr unsigned int IECKIBNMODA_TypeDefinitionIndex = 42601;

	class IECKIBNMODA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKIBNMODA_CTOR_OFFSET))(this);
		}

		::BDLMDFEOJNI* NDAJLMGINBJ()
		{
			return ((::BDLMDFEOJNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKIBNMODA_NDAJLMGINBJ_OFFSET))(this);
		}

		::HGJLBGPLHIA* HNIOMOEHLLF()
		{
			return ((::HGJLBGPLHIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKIBNMODA_HNIOMOEHLLF_OFFSET))(this);
		}

		::System::Boolean NAKLJNNBJCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKIBNMODA_NAKLJNNBJCF_OFFSET))(this);
		}

		::BDLMDFEOJNI* MLFGJPLMMOB(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
		{
			return ((::BDLMDFEOJNI*(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + IECKIBNMODA_MLFGJPLMMOB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IBPFPNKJMMP(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + IECKIBNMODA_IBPFPNKJMMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FHPAMJCKENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKIBNMODA_FHPAMJCKENP_OFFSET))(this);
		}

	};
