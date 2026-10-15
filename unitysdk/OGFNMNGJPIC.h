#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define OGFNMNGJPIC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE572C0)
#define OGFNMNGJPIC_FKBJLLOAHGC_OFFSET UNITYSDK_OFFSET(0xBE571A0)
#define OGFNMNGJPIC_GET_DAMAGEFP_OFFSET UNITYSDK_OFFSET(0xBE57180)
#define OGFNMNGJPIC_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xBE57160)
#define OGFNMNGJPIC_JEPJNAFFDKF_OFFSET UNITYSDK_OFFSET(0xBE57240)
#define OGFNMNGJPIC_SET_DAMAGEFP_OFFSET UNITYSDK_OFFSET(0xBE57190)
#define OGFNMNGJPIC_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xBE57170)

inline static constexpr unsigned int OGFNMNGJPIC_TypeDefinitionIndex = 57610;

	class OGFNMNGJPIC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GCBMADOEPOA; // 0x10
		::System::Double FMABLBJLKBJ; // 0x18
		::System::UInt32 BNCKFPAGOMF; // 0x20
		::System::UInt32 ACCJKGEKHKP; // 0x24
		::System::UInt32 OKMHKBOJBOB; // 0x28
		::System::UInt32 BCMEPPEAKFD; // 0x2C
		::System::UInt32 GAJICDKPHPA; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _DamageFP_k__BackingField; // 0x38
		::System::Double _TotalDamage_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_CTOR_OFFSET))(this);
		}

		::System::Double get_TotalDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_GET_TOTALDAMAGE_OFFSET))(this);
		}

		::System::Void set_TotalDamage(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_SET_TOTALDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DamageFP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_GET_DAMAGEFP_OFFSET))(this);
		}

		::System::Void set_DamageFP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_SET_DAMAGEFP_OFFSET))(this, a1);
		}

		::System::Double FKBJLLOAHGC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_FKBJLLOAHGC_OFFSET))(this);
		}

		::System::Void JEPJNAFFDKF(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OGFNMNGJPIC_JEPJNAFFDKF_OFFSET))(this, a1);
		}

	};
