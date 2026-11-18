#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBEIBBMOPFL.h"
#include "unitysdk/FBILDAHPBOH.h"
#include "unitysdk/PLBFJACKICL.h"

class BLCIDFMMHIL;

#define OGNJFGKBPHB_BBMPBBKPLCO_OFFSET UNITYSDK_OFFSET(0x16F7B680)
#define OGNJFGKBPHB_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0x16F7B690)
#define OGNJFGKBPHB_CBMBKKLPBIH_OFFSET UNITYSDK_OFFSET(0x16F7B9F0)
#define OGNJFGKBPHB_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x16F7B7F0)
#define OGNJFGKBPHB_PCGPGCGJBEH_OFFSET UNITYSDK_OFFSET(0x16F7B960)
#define OGNJFGKBPHB_PFCHLKLPDPB_OFFSET UNITYSDK_OFFSET(0x16F7BA80)
#define OGNJFGKBPHB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7B950)

inline static constexpr unsigned int OGNJFGKBPHB_TypeDefinitionIndex = 40991;

class OGNJFGKBPHB : public ::PLBFJACKICL
{
public:
	// static const ::System::Boolean KAIHKFHHMBH = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNJFGKBPHB__CTOR_OFFSET))(this);
	}

	::BBEIBBMOPFL BBMPBBKPLCO()
	{
		return ((::BBEIBBMOPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNJFGKBPHB_BBMPBBKPLCO_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNJFGKBPHB_BFNKPAAEGNM_OFFSET))(this);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNJFGKBPHB_INOKFEPEEDJ_OFFSET))(this);
	}

	::System::Void PCGPGCGJBEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNJFGKBPHB_PCGPGCGJBEH_OFFSET))(this);
	}

	::System::Void CBMBKKLPBIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNJFGKBPHB_CBMBKKLPBIH_OFFSET))(this);
	}

	::System::Void PFCHLKLPDPB(::BLCIDFMMHIL*& ECMMKCJLBMD, ::FBILDAHPBOH& OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::BLCIDFMMHIL*&, ::FBILDAHPBOH&))((::PBYTE)hIl2Cpp + OGNJFGKBPHB_PFCHLKLPDPB_OFFSET))(this, ECMMKCJLBMD, OBNIAHNMHPF);
	}
};
