#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGGCCFOCCBK.h"
#include "unitysdk/OIIGJNOAOFO.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Battle { class Entity; }

#define HBMBKGJPNOB_AHBKPGJHEFB_OFFSET UNITYSDK_OFFSET(0x17A35190)
#define HBMBKGJPNOB_AIJBFLBNPCF_OFFSET UNITYSDK_OFFSET(0x17A356D0)
#define HBMBKGJPNOB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17A35650)
#define HBMBKGJPNOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A348F0)
#define HBMBKGJPNOB_FDPKGPIMALE_OFFSET UNITYSDK_OFFSET(0x17A35610)
#define HBMBKGJPNOB_JJLANKAPHHP_OFFSET UNITYSDK_OFFSET(0x17A353C0)
#define HBMBKGJPNOB_NKMHGAMGOPK_OFFSET UNITYSDK_OFFSET(0x17A35570)
#define HBMBKGJPNOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A348A0)
#define HBMBKGJPNOB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A349A0)

inline static constexpr unsigned int HBMBKGJPNOB_TypeDefinitionIndex = 70964;

class HBMBKGJPNOB : public ::FGGCCFOCCBK
{
public:
	::System::Boolean ACDNAEGJCCL; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 IPOJPMIIKFL; // 0x1C
	::OIIGJNOAOFO KNCELLAPNMD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMBKGJPNOB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_DISPOSE_OFFSET))(this);
	}

	::System::Void AHBKPGJHEFB(::System::UInt32& BKLGNCBNEGM, ::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_AHBKPGJHEFB_OFFSET))(this, BKLGNCBNEGM, EGGFIHLJHNO);
	}

	::System::Boolean JJLANKAPHHP(::MoleMole::Battle::Entity*& KECKGDFIALJ, ::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_JJLANKAPHHP_OFFSET))(this, KECKGDFIALJ, EGGFIHLJHNO);
	}

	static ::HBMBKGJPNOB* COKNIICCODC()
	{
		return ((::HBMBKGJPNOB*(*)())((::PBYTE)hIl2Cpp + HBMBKGJPNOB_COKNIICCODC_OFFSET))();
	}

	::System::Boolean NKMHGAMGOPK(::System::UInt32& BKLGNCBNEGM, ::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_NKMHGAMGOPK_OFFSET))(this, BKLGNCBNEGM, EGGFIHLJHNO);
	}

	::System::Void FDPKGPIMALE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_FDPKGPIMALE_OFFSET))(this);
	}

	::MoleMole::EntityHandle AIJBFLBNPCF()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMBKGJPNOB_AIJBFLBNPCF_OFFSET))(this);
	}
};
