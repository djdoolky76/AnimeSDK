#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/System/Object.h"

class HLKFMJPHIME;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKLLNPGJPNG_BGEJKEDCCKB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xF7A1DE0)
#define BKLLNPGJPNG_BGEJKEDCCKB_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0xF7A1D20)
#define BKLLNPGJPNG_BGEJKEDCCKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xF7A1D70)
#define BKLLNPGJPNG_BGEJKEDCCKB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xF7A1B80)
#define BKLLNPGJPNG_BGEJKEDCCKB__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A1B70)

inline static constexpr unsigned int BKLLNPGJPNG_BGEJKEDCCKB_TypeDefinitionIndex = 48480;

class BKLLNPGJPNG_BGEJKEDCCKB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LFGBJHCEJID>* IJMMIIJKGAP; // 0x10
	::HLKFMJPHIME* FAMOMMKCPBJ; // 0x18
	::System::Int32 POKCLEEIDBJ; // 0x20
	::System::Int32 HIEMFOPBPKF; // 0x24
	::System::Int32 IDHGNFACJJG; // 0x28
	::System::Single HACJFKBLODH; // 0x2C
	::System::Single HPCILAJBBHH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLLNPGJPNG_BGEJKEDCCKB__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKLLNPGJPNG_BGEJKEDCCKB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean OKLLFEIJKHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLLNPGJPNG_BGEJKEDCCKB_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLLNPGJPNG_BGEJKEDCCKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 JGDJIDCIIGE, ::System::Int32 DNHABCHNMLE, ::System::Single EKEKKEGLAOC, ::HLKFMJPHIME* IJKIMCMPBCF, ::System::Collections::Generic::List_1<::LFGBJHCEJID>* IJMMIIJKGAP, ::System::Int32 IDHGNFACJJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::HLKFMJPHIME*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*, ::System::Int32))((::PBYTE)hIl2Cpp + BKLLNPGJPNG_BGEJKEDCCKB_BBOMJDBNHIC_OFFSET))(this, JGDJIDCIIGE, DNHABCHNMLE, EKEKKEGLAOC, IJKIMCMPBCF, IJMMIIJKGAP, IDHGNFACJJG);
	}
};
