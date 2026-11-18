#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define OEBDNEPBCLB_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x114E9B80)
#define OEBDNEPBCLB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x114EA670)
#define OEBDNEPBCLB_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x114E9DD0)
#define OEBDNEPBCLB_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x114EA5D0)
#define OEBDNEPBCLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114EA0B0)
#define OEBDNEPBCLB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x114EA590)
#define OEBDNEPBCLB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x114E9EE0)
#define OEBDNEPBCLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x114EA180)
#define OEBDNEPBCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x114EA580)

inline static constexpr unsigned int OEBDNEPBCLB_TypeDefinitionIndex = 43638;

class OEBDNEPBCLB : public ::MoleMole::RendererFader
{
public:
	::System::Single HOGDDNDPJPC; // 0x28
	::System::Single OCNJEGICJPC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBDNEPBCLB__CTOR_OFFSET))(this);
	}

	::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Renderer* DLGEGIHPJLD, ::System::Int32 JBEOJJKEGGI, ::System::String* BGJOPBCCMOC, ::System::Single PIPHENBKPND)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OEBDNEPBCLB_BBOMJDBNHIC_OFFSET))(this, DLGEGIHPJLD, JBEOJJKEGGI, BGJOPBCCMOC, PIPHENBKPND);
	}
};
