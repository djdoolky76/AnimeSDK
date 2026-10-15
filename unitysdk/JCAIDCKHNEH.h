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

#define JCAIDCKHNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x16577E50)

inline static constexpr unsigned int JCAIDCKHNEH_TypeDefinitionIndex = 57638;

	class JCAIDCKHNEH : public ::HLHIKGINAHB
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GOLGCBPFFAM; // 0x58
		::CHHGFHIPHAE* IHNJNKIPBJH; // 0x60
		::RPG::GameCore::GameEntity* PCJLPCJNNHL; // 0x68
		::RPG::GameCore::GameEntity* IHOHAHDDMLK; // 0x70
		::LDMKDNCFGKL* FGNHFJHBPIM; // 0x78
		::System::Nullable_1<::RPG::GameCore::FixPoint> HIOJGGBEPPI; // 0x80
		::System::Byte _padding0[0x8];
		::System::Single HDKIBCJDINJ; // 0x90
		::System::UInt32 DOHFIEBOJIJ; // 0x94
		::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0x98
		::System::Nullable_1<::RPG::GameCore::FixPoint> MDAIMLBJFAD; // 0xA0
		::System::Byte _padding1[0x8];
		::System::Int32 LLJGKHNLGCK; // 0xB0
		::RPG::GameCore::WaveMonsterTiming JGAKLKBOPEG; // 0xB4
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAIDCKHNEH_CTOR_OFFSET))(this);
		}

	};
