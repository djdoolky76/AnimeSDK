#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OJGMILPHGEN_LBDMBKJBNDA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define OJGMILPHGEN_BHEJJFCDNOH_OFFSET UNITYSDK_OFFSET(0x172CE970)
#define OJGMILPHGEN_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x172CE160)
#define OJGMILPHGEN_IKKJFCHNLDP_OFFSET UNITYSDK_OFFSET(0x172CE7A0)
#define OJGMILPHGEN_LNMBAEJENCH_OFFSET UNITYSDK_OFFSET(0x172CE8C0)
#define OJGMILPHGEN_NBBDNFAEODE_OFFSET UNITYSDK_OFFSET(0x172CE800)
#define OJGMILPHGEN_NPLCDLGNPNA_OFFSET UNITYSDK_OFFSET(0x172CE420)
#define OJGMILPHGEN_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x172CE1C0)
#define OJGMILPHGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x172CE840)

inline static constexpr unsigned int OJGMILPHGEN_TypeDefinitionIndex = 68449;

class OJGMILPHGEN : public ::System::Object
{
public:
	// static const ::System::Int32 IKDGPGBJNBJ = 0x168; // 0x0
	::System::Action_1<::System::Boolean>* OPBEOJOGDOI; // 0x10
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x18
	::UnityEngine::Vector3 LDKHAGBGDLN; // 0x28
	::System::Single IJPJAMNLKBJ; // 0x34
	::OJGMILPHGEN_LBDMBKJBNDA FDKGFMBMIJB; // 0x38
	::System::Boolean BFDBEGDNFPC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGMILPHGEN__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGMILPHGEN_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void OJFBBOMGIEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGMILPHGEN_OJFBBOMGIEN_OFFSET))(this);
	}

	::System::Void IKKJFCHNLDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGMILPHGEN_IKKJFCHNLDP_OFFSET))(this);
	}

	::System::Boolean NBBDNFAEODE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGMILPHGEN_NBBDNFAEODE_OFFSET))(this);
	}

	static ::System::Boolean LNMBAEJENCH(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single IJPJAMNLKBJ)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OJGMILPHGEN_LNMBAEJENCH_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, IJPJAMNLKBJ);
	}

	static ::System::Single BHEJJFCDNOH(::System::Single CJGAFLKGLKL)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + OJGMILPHGEN_BHEJJFCDNOH_OFFSET))(CJGAFLKGLKL);
	}

	static ::System::Boolean NPLCDLGNPNA(::UnityEngine::Vector3 JIHPGMMCGIN, ::UnityEngine::Vector3 HODAIDNDKHD, ::OJGMILPHGEN_LBDMBKJBNDA HFAGMLOAHEF, ::System::Single IJPJAMNLKBJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::OJGMILPHGEN_LBDMBKJBNDA, ::System::Single))((::PBYTE)hIl2Cpp + OJGMILPHGEN_NPLCDLGNPNA_OFFSET))(JIHPGMMCGIN, HODAIDNDKHD, HFAGMLOAHEF, IJPJAMNLKBJ);
	}
};
