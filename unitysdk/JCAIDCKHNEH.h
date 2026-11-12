#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLHIKGINAHB.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
#include "unitysdk/System/Nullable_1.h"
class CHHGFHIPHAE;
class LDMKDNCFGKL;
namespace RPG::GameCore { class GameEntity; }

#define JCAIDCKHNEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B1040)

inline static constexpr unsigned int JCAIDCKHNEH_TypeDefinitionIndex = 58867;

	class JCAIDCKHNEH : public ::HLHIKGINAHB
	{
	public:
		::RPG::GameCore::GameEntity* PCJLPCJNNHL; // 0x78
		::LDMKDNCFGKL* FGNHFJHBPIM; // 0x80
		::RPG::GameCore::GameEntity* IHOHAHDDMLK; // 0x88
		::CHHGFHIPHAE* IHNJNKIPBJH; // 0x90
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GOLGCBPFFAM; // 0x98
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0xA0
		::System::Single HDKIBCJDINJ; // 0xA8
		::RPG::GameCore::WaveMonsterTiming JGAKLKBOPEG; // 0xAC
		::System::Nullable_1<::RPG::GameCore::FixPoint> MDAIMLBJFAD; // 0xB0
		::System::Byte _padding0[0x8];
		::System::UInt32 DOHFIEBOJIJ; // 0xC0
		::System::Int32 LLJGKHNLGCK; // 0xC4
		::System::Nullable_1<::RPG::GameCore::FixPoint> HIOJGGBEPPI; // 0xC8
		::System::Byte _padding1[0x8];
		::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAIDCKHNEH_CTOR_OFFSET))(this);
		}

	};
