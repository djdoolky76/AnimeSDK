#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GFKHDOCGBJE;
class JHIGAEIELKO;

#define DCGLCPKFJKJ_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0xE23EFB0)
#define DCGLCPKFJKJ_CREATE_OFFSET UNITYSDK_OFFSET(0xE23EF20)
#define DCGLCPKFJKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE23F220)
#define DCGLCPKFJKJ_FNFNNGCIEEE_OFFSET UNITYSDK_OFFSET(0xE23F1C0)
#define DCGLCPKFJKJ_PDHHNKABAFI_OFFSET UNITYSDK_OFFSET(0xE23F170)

inline static constexpr unsigned int DCGLCPKFJKJ_TypeDefinitionIndex = 54198;

	class DCGLCPKFJKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGLCPKFJKJ_CTOR_OFFSET))(this);
		}

		::GFKHDOCGBJE* Create(::JHIGAEIELKO* a1)
		{
			return ((::GFKHDOCGBJE*(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + DCGLCPKFJKJ_CREATE_OFFSET))(this, a1);
		}

		::System::Void ApplyValueRule(::JHIGAEIELKO* a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::JHIGAEIELKO*, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + DCGLCPKFJKJ_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint PDHHNKABAFI(::JHIGAEIELKO* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + DCGLCPKFJKJ_PDHHNKABAFI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint FNFNNGCIEEE(::JHIGAEIELKO* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + DCGLCPKFJKJ_FNFNNGCIEEE_OFFSET))(this, a1);
		}

	};
