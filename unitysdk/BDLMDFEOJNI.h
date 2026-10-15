#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
class HGJLBGPLHIA;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define BDLMDFEOJNI_CLNDABJACBD_OFFSET UNITYSDK_OFFSET(0x1C8B7FB0)
#define BDLMDFEOJNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B83D0)
#define BDLMDFEOJNI_FHPAMJCKENP_OFFSET UNITYSDK_OFFSET(0x1C8B8270)
#define BDLMDFEOJNI_FLJNCJHKBDP_OFFSET UNITYSDK_OFFSET(0x1C8B7EA0)
#define BDLMDFEOJNI_HNIOMOEHLLF_OFFSET UNITYSDK_OFFSET(0x1C8B82C0)
#define BDLMDFEOJNI_IBPFPNKJMMP_OFFSET UNITYSDK_OFFSET(0x1C8B8110)
#define BDLMDFEOJNI_JCDOIHAFJBB_OFFSET UNITYSDK_OFFSET(0x1C8B7F50)
#define BDLMDFEOJNI_NAKLJNNBJCF_OFFSET UNITYSDK_OFFSET(0x1C8B8370)

inline static constexpr unsigned int BDLMDFEOJNI_TypeDefinitionIndex = 42603;

	class BDLMDFEOJNI : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_CTOR_OFFSET))(this);
		}

		::HGJLBGPLHIA* FLJNCJHKBDP()
		{
			return ((::HGJLBGPLHIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_FLJNCJHKBDP_OFFSET))(this);
		}

		::System::Boolean JCDOIHAFJBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_JCDOIHAFJBB_OFFSET))(this);
		}

		::System::Void CLNDABJACBD(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_CLNDABJACBD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IBPFPNKJMMP(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_IBPFPNKJMMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FHPAMJCKENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_FHPAMJCKENP_OFFSET))(this);
		}

		::HGJLBGPLHIA* HNIOMOEHLLF()
		{
			return ((::HGJLBGPLHIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_HNIOMOEHLLF_OFFSET))(this);
		}

		::System::Boolean NAKLJNNBJCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLMDFEOJNI_NAKLJNNBJCF_OFFSET))(this);
		}

	};
