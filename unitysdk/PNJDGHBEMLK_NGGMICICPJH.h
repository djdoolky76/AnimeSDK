#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define PNJDGHBEMLK_NGGMICICPJH_BJKNJDCBDBK_OFFSET UNITYSDK_OFFSET(0x1C1E1680)
#define PNJDGHBEMLK_NGGMICICPJH_EHGPMOCFHNN_OFFSET UNITYSDK_OFFSET(0x1C1E1600)
#define PNJDGHBEMLK_NGGMICICPJH_ELBMEJMNGAP_OFFSET UNITYSDK_OFFSET(0x1C1E1480)
#define PNJDGHBEMLK_NGGMICICPJH_LHBFCNEBBBM_OFFSET UNITYSDK_OFFSET(0x1C1E1610)
#define PNJDGHBEMLK_NGGMICICPJH_OLHKOADLAIP_OFFSET UNITYSDK_OFFSET(0x1C1E15A0)
#define PNJDGHBEMLK_NGGMICICPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E1470)

inline static constexpr unsigned int PNJDGHBEMLK_NGGMICICPJH_TypeDefinitionIndex = 64964;

class PNJDGHBEMLK_NGGMICICPJH : public ::System::Object
{
public:
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::System::Action* KAKAEMACNPB; // 0x18
	::System::Action* JNCGLPCKKFL; // 0x20
	::System::Action* PEGBHJCNKJG; // 0x28
	::System::Single MDPPNMIPDMP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGGMICICPJH__CTOR_OFFSET))(this);
	}

	::System::Void ELBMEJMNGAP(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGGMICICPJH_ELBMEJMNGAP_OFFSET))(this, JGPIGFLIDOJ);
	}

	::System::Void EHGPMOCFHNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGGMICICPJH_EHGPMOCFHNN_OFFSET))(this);
	}

	::System::Void LHBFCNEBBBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGGMICICPJH_LHBFCNEBBBM_OFFSET))(this);
	}

	::System::Void OLHKOADLAIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGGMICICPJH_OLHKOADLAIP_OFFSET))(this);
	}

	::System::Void BJKNJDCBDBK(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NGGMICICPJH_BJKNJDCBDBK_OFFSET))(this, JGPIGFLIDOJ);
	}
};
