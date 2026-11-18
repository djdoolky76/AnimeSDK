#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define HCPEGNMFBIG_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x146EF890)
#define HCPEGNMFBIG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x146EFFA0)
#define HCPEGNMFBIG_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x146EFA40)
#define HCPEGNMFBIG_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x146F0240)
#define HCPEGNMFBIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146EFC70)
#define HCPEGNMFBIG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x146F02E0)
#define HCPEGNMFBIG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x146EFAC0)
#define HCPEGNMFBIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x146EFD50)
#define HCPEGNMFBIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146EFF90)

inline static constexpr unsigned int HCPEGNMFBIG_TypeDefinitionIndex = 87094;

class HCPEGNMFBIG : public ::MoleMole::RendererFader
{
public:
	::System::String* MAAIKLADELJ; // 0x28
	::UnityEngine::Material* GHLPHGKADLK; // 0x30
	::System::Int32 AHEFEIECIOB; // 0x38
	::System::Single GFPCECACIFJ; // 0x3C
	::System::Single IOBNOGJJGJK; // 0x40
	::System::Int32 BLAEELJPIKC; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEGNMFBIG__CTOR_OFFSET))(this);
	}

	::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_TOSTRING_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 JBEOJJKEGGI, ::System::String* FPHFDCNNHHP, ::System::Single HKBIOEKPFDJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_BBOMJDBNHIC_OFFSET))(this, KNNDDLMOKCG, JBEOJJKEGGI, FPHFDCNNHHP, HKBIOEKPFDJ);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEGNMFBIG_DPIHOJBBGLA_OFFSET))(this);
	}
};
