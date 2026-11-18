#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGKLMMOOFKN.h"
#include "unitysdk/CGLKOJBKGPN.h"
#include "unitysdk/IJFPMHMHIFC.h"
#include "unitysdk/INMGCFDLLBG.h"
#include "unitysdk/JKHKHKJEGMI.h"
#include "unitysdk/NBBBLBFIAJP.h"
#include "unitysdk/OHLDPHIBMFK.h"
#include "unitysdk/System/ValueType.h"

#define BIJEDLFPFJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x113E9CC0)
#define BIJEDLFPFJI__CTOR_OFFSET UNITYSDK_OFFSET(0x678E50)

inline static constexpr unsigned int BIJEDLFPFJI_TypeDefinitionIndex = 49662;

struct alignas(4) BIJEDLFPFJI
{
	static ::BIJEDLFPFJI* StaticGet_HICEJEACBGD()
	{
		return (::BIJEDLFPFJI*)Il2CppClass::FromTypeDefinitionIndex(BIJEDLFPFJI_TypeDefinitionIndex)->GetStaticField(0x11770);
	}
	::System::Boolean AHOJLADNFIP; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single LLBEKEFONPC; // 0x14
	::INMGCFDLLBG MLDGOHGHECK; // 0x18
	::CGLKOJBKGPN FAOLEDHCKLL; // 0x38
	::NBBBLBFIAJP MCJNKOKGPGN; // 0x44
	::BGKLMMOOFKN OENLDAIMCPN; // 0x68
	::OHLDPHIBMFK OELOAAKBDDD; // 0x94
	::IJFPMHMHIFC IBGCODGDJOA; // 0xA8
	::JKHKHKJEGMI IKNCEGGJOAJ; // 0xB0

	::System::Void _ctor(::System::Single PMNLNNGEIFM, ::INMGCFDLLBG& KOIKJLGCBEM, ::CGLKOJBKGPN& KMCHCDKODFG, ::NBBBLBFIAJP& ACMIDENMJEH, ::BGKLMMOOFKN& HAMFOCKOJMK, ::OHLDPHIBMFK& PIOPKONDIIH, ::IJFPMHMHIFC& CAHBGBGHMPH, ::JKHKHKJEGMI& GAKJOMPDGEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::INMGCFDLLBG&, ::CGLKOJBKGPN&, ::NBBBLBFIAJP&, ::BGKLMMOOFKN&, ::OHLDPHIBMFK&, ::IJFPMHMHIFC&, ::JKHKHKJEGMI&))((::PBYTE)hIl2Cpp + BIJEDLFPFJI__CTOR_OFFSET))(this, PMNLNNGEIFM, KOIKJLGCBEM, KMCHCDKODFG, ACMIDENMJEH, HAMFOCKOJMK, PIOPKONDIIH, CAHBGBGHMPH, GAKJOMPDGEA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIJEDLFPFJI__CCTOR_OFFSET))();
	}
};
