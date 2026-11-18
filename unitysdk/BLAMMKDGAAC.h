#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }

#define BLAMMKDGAAC_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x6E9DF0)
#define BLAMMKDGAAC_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x128AFE70)
#define BLAMMKDGAAC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6E9DE0)
#define BLAMMKDGAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x6E9B90)

inline static constexpr unsigned int BLAMMKDGAAC_TypeDefinitionIndex = 47243;

struct alignas(4) BLAMMKDGAAC
{
	::Nap::NapECS::ComponentMask AHBODOMLMAA; // 0x10
	::Nap::NapECS::ComponentMask MLEFAMAAJGH; // 0x50
	::System::Boolean CAAPHHDKNOF; // 0x90
	::System::Boolean EBMHHKIMGCD; // 0x91

	::System::Void _ctor(::Nap::NapECS::ComponentMask LDNDNOBDKIA, ::Nap::NapECS::ComponentMask EFGCHJDNIMD, ::System::Boolean MIIKPGNACCL)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask, ::System::Boolean))((::PBYTE)hIl2Cpp + BLAMMKDGAAC__CTOR_OFFSET))(this, LDNDNOBDKIA, EFGCHJDNIMD, MIIKPGNACCL);
	}

	::System::Void _ctor_1(::Nap::NapECS::EcsFilter* PNPMMLNCDNK, ::System::Boolean MIIKPGNACCL)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLAMMKDGAAC__CTOR_1_OFFSET))(this, PNPMMLNCDNK, MIIKPGNACCL);
	}

	::System::Boolean ADGCPPFAPIA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLAMMKDGAAC_ADGCPPFAPIA_OFFSET))(this, KECKGDFIALJ);
	}

	/*
	static ::BLAMMKDGAAC JPPEEOLOGGP(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::BLAMMKDGAAC(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + BLAMMKDGAAC_JPPEEOLOGGP_OFFSET))(PNPMMLNCDNK);
	}
	*/
};
