#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define JEGHAFPCJKK_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x1980DAF0)
#define JEGHAFPCJKK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1980E240)
#define JEGHAFPCJKK_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x1980DCB0)
#define JEGHAFPCJKK_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x1980E510)
#define JEGHAFPCJKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1980DEE0)
#define JEGHAFPCJKK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1980E5B0)
#define JEGHAFPCJKK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1980DD40)
#define JEGHAFPCJKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1980DFD0)
#define JEGHAFPCJKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1980E230)

inline static constexpr unsigned int JEGHAFPCJKK_TypeDefinitionIndex = 78879;

class JEGHAFPCJKK : public ::MoleMole::RendererFader
{
public:
	::System::String* MAAIKLADELJ; // 0x28
	::UnityEngine::Material* GHLPHGKADLK; // 0x30
	::System::Boolean GFPCECACIFJ; // 0x38
	::System::Boolean IOBNOGJJGJK; // 0x39
	::System::Byte _padding0[0x2];
	::System::Int32 BLAEELJPIKC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGHAFPCJKK__CTOR_OFFSET))(this);
	}

	::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_TOSTRING_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Material* KNNDDLMOKCG, ::System::Int32 JBEOJJKEGGI, ::System::String* FPHFDCNNHHP, ::System::Boolean HKBIOEKPFDJ, ::System::Boolean GIDPMBKHMIC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_BBOMJDBNHIC_OFFSET))(this, KNNDDLMOKCG, JBEOJJKEGGI, FPHFDCNNHHP, HKBIOEKPFDJ, GIDPMBKHMIC);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGHAFPCJKK_DPIHOJBBGLA_OFFSET))(this);
	}
};
