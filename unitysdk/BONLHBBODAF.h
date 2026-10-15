#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CENEFPOMFKG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BONLHBBODAF_CTOR_OFFSET UNITYSDK_OFFSET(0xC198A70)
#define BONLHBBODAF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC198770)
#define BONLHBBODAF_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0xC198760)
#define BONLHBBODAF_IHCFFNABEMK_OFFSET UNITYSDK_OFFSET(0xC198990)
#define BONLHBBODAF_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC1987E0)
#define BONLHBBODAF_NMCEFGCGHFG_OFFSET UNITYSDK_OFFSET(0xC198860)

inline static constexpr unsigned int BONLHBBODAF_TypeDefinitionIndex = 53765;

	class BONLHBBODAF : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* LDNHOKKHOCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONLHBBODAF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + BONLHBBODAF_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONLHBBODAF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONLHBBODAF_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void IHCFFNABEMK(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillPropertyType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BONLHBBODAF_IHCFFNABEMK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NMCEFGCGHFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONLHBBODAF_NMCEFGCGHFG_OFFSET))(this);
		}

	};
