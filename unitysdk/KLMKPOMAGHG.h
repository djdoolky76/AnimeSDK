#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
class GFKHDOCGBJE;
class JHIGAEIELKO;
class KLMKPOMAGHG;

#define KLMKPOMAGHG_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0xB52F240)
#define KLMKPOMAGHG_CREATE_OFFSET UNITYSDK_OFFSET(0xB52F140)
#define KLMKPOMAGHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB52F3A0)
#define KLMKPOMAGHG_FNFNNGCIEEE_OFFSET UNITYSDK_OFFSET(0xB52F340)
#define KLMKPOMAGHG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB52F0B0)
#define KLMKPOMAGHG_PDHHNKABAFI_OFFSET UNITYSDK_OFFSET(0xB52F2E0)

inline static constexpr unsigned int KLMKPOMAGHG_TypeDefinitionIndex = 54025;

	class KLMKPOMAGHG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint JIAOEIMMPBB; // 0x10
		::RPG::GameCore::FixPoint FEMPDMOOPAG; // 0x18
		::System::Int32 GAMGCOGLGNJ; // 0x20
		::System::Boolean APIAHMNJGIJ; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 BPHFOJPAJDN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKPOMAGHG_CTOR_OFFSET))(this);
		}

		::KLMKPOMAGHG* KPJGDHLENIP(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
		{
			return ((::KLMKPOMAGHG*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + KLMKPOMAGHG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::GFKHDOCGBJE* Create(::JHIGAEIELKO* a1)
		{
			return ((::GFKHDOCGBJE*(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + KLMKPOMAGHG_CREATE_OFFSET))(this, a1);
		}

		::System::Void ApplyValueRule(::JHIGAEIELKO* a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::JHIGAEIELKO*, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + KLMKPOMAGHG_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint PDHHNKABAFI(::JHIGAEIELKO* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + KLMKPOMAGHG_PDHHNKABAFI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint FNFNNGCIEEE(::JHIGAEIELKO* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + KLMKPOMAGHG_FNFNNGCIEEE_OFFSET))(this, a1);
		}

	};
