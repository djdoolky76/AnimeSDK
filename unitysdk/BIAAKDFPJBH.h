#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/LLFLBBCHACG.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }

#define BIAAKDFPJBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE28080)
#define BIAAKDFPJBH_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0xBE27E60)
#define BIAAKDFPJBH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBE27FC0)
#define BIAAKDFPJBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE27A00)
#define BIAAKDFPJBH_LEOHPDFIKHB_OFFSET UNITYSDK_OFFSET(0xBE27C10)
#define BIAAKDFPJBH_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBE27AE0)
#define BIAAKDFPJBH_NDFBMHNEKMD_OFFSET UNITYSDK_OFFSET(0xBE27C60)
#define BIAAKDFPJBH_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0xBE27A90)

inline static constexpr unsigned int BIAAKDFPJBH_TypeDefinitionIndex = 58207;

	class BIAAKDFPJBH : public ::ADKFPNMPIDD
	{
	public:
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x28
		::LLFLBBCHACG MCLLALGABAB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LLFLBBCHACG a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLFLBBCHACG))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PODJJPBKLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_PODJJPBKLDC_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LEOHPDFIKHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_LEOHPDFIKHB_OFFSET))(this);
		}

		::System::Boolean NDFBMHNEKMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_NDFBMHNEKMD_OFFSET))(this);
		}

		::UnityEngine::Vector3 IFOODPPCJIK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAAKDFPJBH_IFOODPPCJIK_OFFSET))(this);
		}

	};
