#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAGPLLGCECI.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILENIEJKGLK_AEKGPFNFHIG_OFFSET UNITYSDK_OFFSET(0x759E40)
#define ILENIEJKGLK_CLDONDNACKN_OFFSET UNITYSDK_OFFSET(0x409330)
#define ILENIEJKGLK_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x75A0B0)
#define ILENIEJKGLK_DIHFCICIHNO_OFFSET UNITYSDK_OFFSET(0x759E30)
#define ILENIEJKGLK_ELHJNKBPDOI_OFFSET UNITYSDK_OFFSET(0x75A010)
#define ILENIEJKGLK_JBBPMOMOMNA_OFFSET UNITYSDK_OFFSET(0x759EE0)
#define ILENIEJKGLK_MHCFFAELHJF_OFFSET UNITYSDK_OFFSET(0x759ED0)
#define ILENIEJKGLK_NAMOOAOPCDN_OFFSET UNITYSDK_OFFSET(0x358A70)
#define ILENIEJKGLK_OAGBICNMOID_OFFSET UNITYSDK_OFFSET(0x75A000)
#define ILENIEJKGLK__CTOR_OFFSET UNITYSDK_OFFSET(0x759E10)

inline static constexpr unsigned int ILENIEJKGLK_TypeDefinitionIndex = 73168;

struct alignas(4) ILENIEJKGLK
{
	::System::Single HAAEBCOBKFF; // 0x10
	::System::Single BFMMEICFNCD; // 0x14
	::System::Single JBGLCAFPGHK; // 0x18
	::System::Single KKAMDFNMMJH; // 0x1C

	::System::Void _ctor(::System::Single FKJIDHNGPNN, ::System::Single OJNNLBJLJFE, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILENIEJKGLK__CTOR_OFFSET))(this, FKJIDHNGPNN, OJNNLBJLJFE, JBGLCAFPGHK, KKAMDFNMMJH);
	}

	::System::Single DIHFCICIHNO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILENIEJKGLK_DIHFCICIHNO_OFFSET))(this);
	}

	::UnityEngine::Vector3 AEKGPFNFHIG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ILENIEJKGLK_AEKGPFNFHIG_OFFSET))(this);
	}

	::System::Boolean MHCFFAELHJF(::Il2CppArray<::UnityEngine::Vector3>* GCJHIKPJGBP)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + ILENIEJKGLK_MHCFFAELHJF_OFFSET))(this, GCJHIKPJGBP);
	}

	::System::Single CLDONDNACKN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILENIEJKGLK_CLDONDNACKN_OFFSET))(this);
	}

	::System::Single NAMOOAOPCDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILENIEJKGLK_NAMOOAOPCDN_OFFSET))(this);
	}

	::BAGPLLGCECI JBBPMOMOMNA(::System::Single GNHOCNHLCCA)
	{
		return ((::BAGPLLGCECI(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILENIEJKGLK_JBBPMOMOMNA_OFFSET))(this, GNHOCNHLCCA);
	}

	::System::Single OAGBICNMOID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILENIEJKGLK_OAGBICNMOID_OFFSET))(this);
	}

	/*
	::System::Boolean ELHJNKBPDOI(::ILENIEJKGLK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ILENIEJKGLK))((::PBYTE)hIl2Cpp + ILENIEJKGLK_ELHJNKBPDOI_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean COHDMPBBMPO(::UnityEngine::Vector3 GPGPMAEGCBN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ILENIEJKGLK_COHDMPBBMPO_OFFSET))(this, GPGPMAEGCBN);
	}
};
