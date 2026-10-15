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

#define JCAIDCKHNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x16569F00)

inline static constexpr unsigned int JCAIDCKHNEH_TypeDefinitionIndex = 57638;

	class JCAIDCKHNEH : public ::HLHIKGINAHB
	{
	public:
		::RPG::GameCore::GameEntity* PCJLPCJNNHL; // 0x58
		::CHHGFHIPHAE* IHNJNKIPBJH; // 0x60
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GOLGCBPFFAM; // 0x68
		::LDMKDNCFGKL* FGNHFJHBPIM; // 0x70
		::RPG::GameCore::GameEntity* IHOHAHDDMLK; // 0x78
		::RPG::GameCore::WaveMonsterTiming JGAKLKBOPEG; // 0x80
		::System::UInt32 DOHFIEBOJIJ; // 0x84
		::System::Int32 LLJGKHNLGCK; // 0x88
		::System::Single HDKIBCJDINJ; // 0x8C
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0x90
		::System::Nullable_1<::RPG::GameCore::FixPoint> HIOJGGBEPPI; // 0x98
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> MDAIMLBJFAD; // 0xA8
		::System::Byte _padding1[0x8];
		::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAIDCKHNEH_CTOR_OFFSET))(this);
		}

	};
