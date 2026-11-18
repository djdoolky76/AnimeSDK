#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoMatCapController_BIBJBPOKEHN.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_MONOMATCAPCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15AC2A80)
#define MOLEMOLE_MONOMATCAPCONTROLLER_EEHMFMGFKDB_OFFSET UNITYSDK_OFFSET(0x15AC3A30)
#define MOLEMOLE_MONOMATCAPCONTROLLER_FBBFBJFDJBG_OFFSET UNITYSDK_OFFSET(0x15AC38C0)
#define MOLEMOLE_MONOMATCAPCONTROLLER_FKBPGIMODBC_OFFSET UNITYSDK_OFFSET(0x15AC2E90)
#define MOLEMOLE_MONOMATCAPCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15AC3060)
#define MOLEMOLE_MONOMATCAPCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15AC3010)
#define MOLEMOLE_MONOMATCAPCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x15AC2C10)
#define MOLEMOLE_MONOMATCAPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC3A60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMatCapController_TypeDefinitionIndex = 93148;

	class MonoMatCapController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* GHLPHGKADLK; // 0x18
		::MoleMole::MonoMatCapController_BIBJBPOKEHN LFDBCOHPGJG; // 0x20
		::System::Single ONNABIEHKOI; // 0x24
		::UnityEngine::Texture* EOADAKGMAKI; // 0x28
		::UnityEngine::Texture* FKMFBOGAFLG; // 0x30
		::System::Single LGOFKLBENID; // 0x38
		::UnityEngine::Color KAFLFKHFGNG; // 0x3C
		::System::Single KDBNMGKHMGD; // 0x4C
		::System::Single JEPMAOOMGBJ; // 0x50
		::System::Single CPCICENFPFP; // 0x54
		::System::Single JAHGHLAPHKE; // 0x58
		::System::Single GKDBNIEHJHO; // 0x5C
		::System::Single EOMOCCLEGBO; // 0x60
		::System::Single EIJADDGINFC; // 0x64
		::UnityEngine::Color GJIPKJLMCEO; // 0x68
		::System::Single PBDBPIAEMOA; // 0x78
		::System::Int32 AKDJELDKILD; // 0x7C
		::System::Int32 PNBLJIGDEKJ; // 0x80
		::System::Int32 AMCOHKFBCNA; // 0x84
		::System::Int32 CNOGKFNIKEI; // 0x88
		::System::Int32 JCNOAMICAGF; // 0x8C
		::System::Int32 IBGNBDPOAKG; // 0x90
		::System::Int32 APOAEJFPMFE; // 0x94
		::System::Int32 LDCPMCLKLLK; // 0x98
		::System::Int32 AKKNHLCFJIC; // 0x9C
		::System::Int32 GJEGLKLMJNP; // 0xA0
		::System::Int32 IIBMOEDFHEP; // 0xA4
		::System::Int32 JGHAHADHCAF; // 0xA8
		::System::Int32 JKMPEBOADDP; // 0xAC
		::System::Int32 KIDJBCLHMHB; // 0xB0
		::System::Int32 FFBFKMNGJOD; // 0xB4
		::System::Boolean JHDEBBHMLEL; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single JEEFJPADPOC; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::MoleMole::MonoMatCapController_BIBJBPOKEHN FKBPGIMODBC(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::MoleMole::MonoMatCapController_BIBJBPOKEHN(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_FKBPGIMODBC_OFFSET))(this, KNNDDLMOKCG);
		}

		::System::Single EEHMFMGFKDB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_EEHMFMGFKDB_OFFSET))(this);
		}

		::MoleMole::MonoMatCapController_BIBJBPOKEHN FBBFBJFDJBG()
		{
			return ((::MoleMole::MonoMatCapController_BIBJBPOKEHN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_FBBFBJFDJBG_OFFSET))(this);
		}
	};
}
