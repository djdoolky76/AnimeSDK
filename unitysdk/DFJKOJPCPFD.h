#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFJKOJPCPFD_AMKIOLCPKLE_OFFSET UNITYSDK_OFFSET(0x1536E660)
#define DFJKOJPCPFD_BJKCMPGMGDD_OFFSET UNITYSDK_OFFSET(0x1536E650)
#define DFJKOJPCPFD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1536E3F0)
#define DFJKOJPCPFD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1536E670)
#define DFJKOJPCPFD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1536E360)
#define DFJKOJPCPFD_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1536E700)
#define DFJKOJPCPFD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1536E1F0)
#define DFJKOJPCPFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1536E2E0)
#define DFJKOJPCPFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1536E350)

inline static constexpr unsigned int DFJKOJPCPFD_TypeDefinitionIndex = 57577;

class DFJKOJPCPFD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF5; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* JGDNPNNNDFD; // 0x20
	::KPNIFGIKELE* _AEIENAPAINA_k__BackingField; // 0x28
	::System::UInt32 NMPJMCCBNLO; // 0x30
	::System::Single CKNLGCHBAMP; // 0x34
	::System::Boolean MGGFCNCOIII; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single PFDDJJOELBA; // 0x3C
	::System::Single HODDBKJIAEG; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFJKOJPCPFD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKOJPCPFD__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 JHGKGEGGGFF, ::System::Single HODDBKJIAEG, ::System::Single PFDDJJOELBA, ::System::Single CKNLGCHBAMP, ::System::Boolean MGGFCNCOIII, ::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, JHGKGEGGGFF, HODDBKJIAEG, PFDDJJOELBA, CKNLGCHBAMP, MGGFCNCOIII, CMAOBDOAKEI);
	}

	::KPNIFGIKELE* BJKCMPGMGDD()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_BJKCMPGMGDD_OFFSET))(this);
	}

	::System::Void AMKIOLCPKLE(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_AMKIOLCPKLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKOJPCPFD_OHFHFOHMBJH_OFFSET))(this);
	}
};
