#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/CCBBMJPLKME.h"
#include "unitysdk/LLFLBBCHACG.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }

#define NBGOKLIOCOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB156C0)
#define NBGOKLIOCOJ_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x1BB15370)
#define NBGOKLIOCOJ_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0x1BB15280)
#define NBGOKLIOCOJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1BB153D0)
#define NBGOKLIOCOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1BB14AE0)
#define NBGOKLIOCOJ_LEOHPDFIKHB_OFFSET UNITYSDK_OFFSET(0x1BB14E20)
#define NBGOKLIOCOJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1BB14BD0)
#define NBGOKLIOCOJ_NDFBMHNEKMD_OFFSET UNITYSDK_OFFSET(0x1BB14FC0)
#define NBGOKLIOCOJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1BB14E70)
#define NBGOKLIOCOJ_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0x1BB14B80)

inline static constexpr unsigned int NBGOKLIOCOJ_TypeDefinitionIndex = 58208;

	class NBGOKLIOCOJ : public ::ADKFPNMPIDD
	{
	public:
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x28
		::LLFLBBCHACG MCLLALGABAB; // 0x30
		::CCBBMJPLKME IGHAHBNLIJA; // 0x48
		::UnityEngine::Vector3 JDKBEHDOCFG; // 0x50
		::System::Boolean JNOJDHNPFFC; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 PJDCCMFAIIG; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LLFLBBCHACG a1, ::CCBBMJPLKME a2)
		{
			return ((::System::Void(*)(::PVOID, ::LLFLBBCHACG, ::CCBBMJPLKME))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void PODJJPBKLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_PODJJPBKLDC_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LEOHPDFIKHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_LEOHPDFIKHB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Boolean NDFBMHNEKMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_NDFBMHNEKMD_OFFSET))(this);
		}

		::UnityEngine::Vector3 IFOODPPCJIK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGOKLIOCOJ_IFOODPPCJIK_OFFSET))(this);
		}

	};
