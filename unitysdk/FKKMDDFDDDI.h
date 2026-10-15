#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/RPG/MVector3.h"

#define FKKMDDFDDDI_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3C47A90)
#define FKKMDDFDDDI_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C47A20)

	struct alignas(4) FKKMDDFDDDI
	{
		::Dest::Math::IntersectionTypes DLMLMAGCHJK; // 0x10
		::Dest::Math::IntersectionTypes GMFBKGEACCL; // 0x14
		::System::Boolean GOJIFBNIMBI; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 LLAODKFHDOD; // 0x1C
		::RPG::MVector3 CPFJGMEMLGM; // 0x20
		::RPG::MVector3 BOHPLLMNCHE; // 0x2C
		::RPG::MVector3 FJIOOLKFJPL; // 0x38
		::RPG::MVector3 NDNEOOIPNAC; // 0x44
		::RPG::MVector3 IKOJENBMLGO; // 0x50
		::RPG::MVector3 MOOIFDBKPOD; // 0x5C
		::RPG::MVector3 PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKKMDDFDDDI_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FKKMDDFDDDI_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

	};
