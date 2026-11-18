#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJMLKPBBDE.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GPJAEBDGJAG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADICPODJDFG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9A6E60)
#define ADICPODJDFG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9A75D0)
#define ADICPODJDFG_LFPJBPPKGAJ_OFFSET UNITYSDK_OFFSET(0x1D9A6F30)
#define ADICPODJDFG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9A71A0)
#define ADICPODJDFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9A7520)
#define ADICPODJDFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A6EA0)

inline static constexpr unsigned int ADICPODJDFG_TypeDefinitionIndex = 94236;

class ADICPODJDFG : public ::PJBGHMDHHBM
{
public:
	::IMJMLKPBBDE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GPJAEBDGJAG*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICPODJDFG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICPODJDFG_BHLAEBMEOLO_OFFSET))(this);
	}

	::GPJAEBDGJAG* LFPJBPPKGAJ(::System::Int32 OBNIAHNMHPF)
	{
		return ((::GPJAEBDGJAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADICPODJDFG_LFPJBPPKGAJ_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADICPODJDFG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::GPJAEBDGJAG* KGNEJKNNODJ(::System::Int32 NJCMPIIGHCJ)
	{
		return ((::GPJAEBDGJAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADICPODJDFG_KGNEJKNNODJ_OFFSET))(this, NJCMPIIGHCJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICPODJDFG_PHOADBJGFBE_OFFSET))(this);
	}
};
