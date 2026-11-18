#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHIKCGJDEAF_EFPAAKBPKLE.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define EHIKCGJDEAF_GICNOMPCHIA_OFFSET UNITYSDK_OFFSET(0x10F2EFB0)
#define EHIKCGJDEAF__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2EFA0)

inline static constexpr unsigned int EHIKCGJDEAF_TypeDefinitionIndex = 44209;

class EHIKCGJDEAF : public ::System::Object
{
public:
	::EHIKCGJDEAF_EFPAAKBPKLE IODBDPOLPKA; // 0x10
	::System::Int32 HIHONIFPMKL; // 0x14
	::System::Int32 DAJHHBCHJBM; // 0x18
	::System::Boolean KCBDGFHGNJN; // 0x1C
	::System::Boolean KDGKICHMLJK; // 0x1D
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 ILOJFPNKJII; // 0x20
	::MoleMole::FlowCanvas::Nodes::AreaIDTag KIHGNGKBADE; // 0x28
	::System::Int32 ILENJMJHLJA; // 0x2C

	::System::Void _ctor(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EHIKCGJDEAF__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::MoleMole::Vector2Int GICNOMPCHIA()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIKCGJDEAF_GICNOMPCHIA_OFFSET))(this);
	}
};
