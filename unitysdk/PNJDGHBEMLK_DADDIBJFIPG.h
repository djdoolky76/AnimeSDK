#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }

#define PNJDGHBEMLK_DADDIBJFIPG_FCNECLMHPMO_OFFSET UNITYSDK_OFFSET(0x1C66D910)
#define PNJDGHBEMLK_DADDIBJFIPG_GJOKNBJOFKN_OFFSET UNITYSDK_OFFSET(0x1C66D920)
#define PNJDGHBEMLK_DADDIBJFIPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66D900)

inline static constexpr unsigned int PNJDGHBEMLK_DADDIBJFIPG_TypeDefinitionIndex = 64960;

class PNJDGHBEMLK_DADDIBJFIPG : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_Rotate* OAIDHFOBKKO; // 0x20
	::UnityEngine::Quaternion FEIHAPJEKBJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DADDIBJFIPG__CTOR_OFFSET))(this);
	}

	::System::Void FCNECLMHPMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DADDIBJFIPG_FCNECLMHPMO_OFFSET))(this);
	}

	::System::Void GJOKNBJOFKN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DADDIBJFIPG_GJOKNBJOFKN_OFFSET))(this, EGEGIMGMJHN);
	}
};
