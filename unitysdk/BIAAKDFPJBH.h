#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/LLFLBBCHACG.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }

#define BIAAKDFPJBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB490D60)
#define BIAAKDFPJBH_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0xB490B40)
#define BIAAKDFPJBH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB490CA0)
#define BIAAKDFPJBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB4906E0)
#define BIAAKDFPJBH_LEOHPDFIKHB_OFFSET UNITYSDK_OFFSET(0xB4908F0)
#define BIAAKDFPJBH_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB4907C0)
#define BIAAKDFPJBH_NDFBMHNEKMD_OFFSET UNITYSDK_OFFSET(0xB490940)
#define BIAAKDFPJBH_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0xB490770)

inline static constexpr unsigned int BIAAKDFPJBH_TypeDefinitionIndex = 56981;

	class BIAAKDFPJBH : public ::ADKFPNMPIDD
	{
	public:
		::LLFLBBCHACG MCLLALGABAB; // 0x28
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x40
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
