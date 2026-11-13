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

#define JCAIDCKHNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x19A7A680)

inline static constexpr unsigned int JCAIDCKHNEH_TypeDefinitionIndex = 58867;

	class JCAIDCKHNEH : public ::HLHIKGINAHB
	{
	public:
		::CHHGFHIPHAE* IHNJNKIPBJH; // 0x78
		::RPG::GameCore::GameEntity* IHOHAHDDMLK; // 0x80
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GOLGCBPFFAM; // 0x88
		::LDMKDNCFGKL* FGNHFJHBPIM; // 0x90
		::RPG::GameCore::GameEntity* PCJLPCJNNHL; // 0x98
		::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0xA0
		::RPG::GameCore::WaveMonsterTiming JGAKLKBOPEG; // 0xA8
		::System::Int32 LLJGKHNLGCK; // 0xAC
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0xB0
		::System::Nullable_1<::RPG::GameCore::FixPoint> HIOJGGBEPPI; // 0xB8
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> MDAIMLBJFAD; // 0xC8
		::System::Byte _padding1[0x8];
		::System::Single HDKIBCJDINJ; // 0xD8
		::System::UInt32 DOHFIEBOJIJ; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAIDCKHNEH_CTOR_OFFSET))(this);
		}

	};
