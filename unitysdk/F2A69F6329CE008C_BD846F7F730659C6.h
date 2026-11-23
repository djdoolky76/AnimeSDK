#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3E924FA034550A4.h"
#include "unitysdk/FEC0E6D302F81A77.h"

namespace System { class String; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class TerrainData; }

#define F2A69F6329CE008C_BD846F7F730659C6__CTOR_OFFSET UNITYSDK_OFFSET(0x38368C0)

inline static constexpr unsigned int F2A69F6329CE008C_BD846F7F730659C6_TypeDefinitionIndex = 17920;

class F2A69F6329CE008C_BD846F7F730659C6 : public ::FEC0E6D302F81A77
{
public:
	::System::String* F9B8B5B76EE23E70; // 0x18
	::System::Int32 A5175A0F939EB177; // 0x20
	::System::Single E980D1C4ED8049D1; // 0x24
	::UnityEngine::Terrain* BA33CA5196A28709; // 0x28
	::UnityEngine::TerrainData* FC26A51724AC2A43; // 0x30
	::System::Int32 B3945FB03B393134; // 0x38
	::System::Int32 F3A097AEFEA812C5; // 0x3C
	::E3E924FA034550A4 B2A0B12783A9A3A2; // 0x40
	::System::Single EA5B5DB37914952E; // 0x68
	::System::Int32 ED59B29C20E0EB20; // 0x6C
	::System::Int32 F0C98C82F740B496; // 0x70
	::System::Int32 F23B658766147CD9; // 0x74
	::System::Int32 FA7576E3621BFF96; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2A69F6329CE008C_BD846F7F730659C6__CTOR_OFFSET))(this);
	}
};
