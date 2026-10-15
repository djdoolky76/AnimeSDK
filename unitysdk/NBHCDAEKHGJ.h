#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define NBHCDAEKHGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC2C90)
#define NBHCDAEKHGJ_EAPEKCNFCPA_OFFSET UNITYSDK_OFFSET(0xBAC2550)
#define NBHCDAEKHGJ_ECPABJBOKOG_OFFSET UNITYSDK_OFFSET(0xBAC20A0)
#define NBHCDAEKHGJ_FJIKHIHFLHK_OFFSET UNITYSDK_OFFSET(0xBAC2670)
#define NBHCDAEKHGJ_HFHNOFBMLDP_OFFSET UNITYSDK_OFFSET(0xBAC2380)
#define NBHCDAEKHGJ_KFHACDNMGJE_OFFSET UNITYSDK_OFFSET(0xBAC2720)
#define NBHCDAEKHGJ_LBOJCKHODNH_OFFSET UNITYSDK_OFFSET(0xBAC2920)
#define NBHCDAEKHGJ_NBCLBPDOMOG_OFFSET UNITYSDK_OFFSET(0xBAC21C0)
#define NBHCDAEKHGJ_PEMBEFJJFKE_OFFSET UNITYSDK_OFFSET(0xBAC2270)

inline static constexpr unsigned int NBHCDAEKHGJ_TypeDefinitionIndex = 57700;

	class NBHCDAEKHGJ : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x10
		::GELIALJDFBL* GODIODIIBNC; // 0x18
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x20
		::System::Boolean BDLAKIDPLHB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ECPABJBOKOG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_ECPABJBOKOG_OFFSET))(this);
		}

		::System::Void NBCLBPDOMOG(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_NBCLBPDOMOG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PEMBEFJJFKE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_PEMBEFJJFKE_OFFSET))(this);
		}

		::System::Boolean HFHNOFBMLDP(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_HFHNOFBMLDP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EAPEKCNFCPA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_EAPEKCNFCPA_OFFSET))(this);
		}

		::System::Void FJIKHIHFLHK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_FJIKHIHFLHK_OFFSET))(this, a1);
		}

		::System::Boolean KFHACDNMGJE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_KFHACDNMGJE_OFFSET))(this, a1);
		}

		::System::Void LBOJCKHODNH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NBHCDAEKHGJ_LBOJCKHODNH_OFFSET))(this, a1, a2);
		}

	};
