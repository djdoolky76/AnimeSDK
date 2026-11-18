#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define ADOAJIBJGNJ_GCADKDBMGMB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16FD75A0)
#define ADOAJIBJGNJ_GCADKDBMGMB_FJIIDMPKCBM_OFFSET UNITYSDK_OFFSET(0x16FD7430)
#define ADOAJIBJGNJ_GCADKDBMGMB_HMMLMLNDODN_OFFSET UNITYSDK_OFFSET(0x16FD76E0)
#define ADOAJIBJGNJ_GCADKDBMGMB_NNMDPAGLEBM_OFFSET UNITYSDK_OFFSET(0x16FD7630)
#define ADOAJIBJGNJ_GCADKDBMGMB_PFLKBAMNDNG_OFFSET UNITYSDK_OFFSET(0x16FD7440)
#define ADOAJIBJGNJ_GCADKDBMGMB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16FD7060)
#define ADOAJIBJGNJ_GCADKDBMGMB__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD7420)

inline static constexpr unsigned int ADOAJIBJGNJ_GCADKDBMGMB_TypeDefinitionIndex = 60811;

class ADOAJIBJGNJ_GCADKDBMGMB : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::MoleMole::EntityHandle BGJCLAONNIO; // 0x18
	::System::Single DOBFFIICAII; // 0x28
	::System::Boolean EPGPDDPDKDN; // 0x2C
	::System::Boolean _LPHFKMHLHIF_k__BackingField; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Single NOGGAPFJGJI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB__CTOR_OFFSET))(this);
	}

	::System::Void FJIIDMPKCBM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB_FJIIDMPKCBM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PFLKBAMNDNG(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB_PFLKBAMNDNG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 CFMBGCMCNMM, ::System::String* HIAIKHDFCLN, ::System::Single NOGGAPFJGJI, ::System::Single DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB_BBOMJDBNHIC_OFFSET))(this, CFMBGCMCNMM, HIAIKHDFCLN, NOGGAPFJGJI, DOBFFIICAII);
	}

	::MoleMole::Battle::Entity* NNMDPAGLEBM()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB_NNMDPAGLEBM_OFFSET))(this);
	}

	::System::Boolean HMMLMLNDODN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB_HMMLMLNDODN_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GCADKDBMGMB_PHOADBJGFBE_OFFSET))(this);
	}
};
