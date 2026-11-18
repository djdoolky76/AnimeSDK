#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace System { class Action; }

#define PNJDGHBEMLK_OBKDELELHEL_NCGDNFGECCB_OFFSET UNITYSDK_OFFSET(0x119A4640)
#define PNJDGHBEMLK_OBKDELELHEL_NHKPMOAANMA_OFFSET UNITYSDK_OFFSET(0x119A4440)
#define PNJDGHBEMLK_OBKDELELHEL__CTOR_OFFSET UNITYSDK_OFFSET(0x119A4430)

inline static constexpr unsigned int PNJDGHBEMLK_OBKDELELHEL_TypeDefinitionIndex = 64977;

class PNJDGHBEMLK_OBKDELELHEL : public ::System::Object
{
public:
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_MoveXY* OAIDHFOBKKO; // 0x18
	::System::Action* IHLBALNBGKM; // 0x20
	::UnityEngine::Vector3 FKAMEPNDONK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OBKDELELHEL__CTOR_OFFSET))(this);
	}

	::System::Void NHKPMOAANMA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OBKDELELHEL_NHKPMOAANMA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NCGDNFGECCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_OBKDELELHEL_NCGDNFGECCB_OFFSET))(this);
	}
};
