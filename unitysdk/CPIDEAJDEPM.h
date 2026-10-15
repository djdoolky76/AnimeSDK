#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/RPG/MVector2.h"

#define CPIDEAJDEPM_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3C453C0)
#define CPIDEAJDEPM_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C45350)

	struct alignas(4) CPIDEAJDEPM
	{
		::Dest::Math::IntersectionTypes DLMLMAGCHJK; // 0x10
		::System::Int32 LLAODKFHDOD; // 0x14
		::RPG::MVector2 CPFJGMEMLGM; // 0x18
		::RPG::MVector2 BOHPLLMNCHE; // 0x20
		::RPG::MVector2 FJIOOLKFJPL; // 0x28
		::RPG::MVector2 NDNEOOIPNAC; // 0x30
		::RPG::MVector2 IKOJENBMLGO; // 0x38
		::RPG::MVector2 MOOIFDBKPOD; // 0x40
		::RPG::MVector2 PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPIDEAJDEPM_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CPIDEAJDEPM_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

	};
