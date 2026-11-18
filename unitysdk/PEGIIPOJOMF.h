#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define PEGIIPOJOMF_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x1196B0E0)
#define PEGIIPOJOMF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1196B950)
#define PEGIIPOJOMF_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x1196B360)
#define PEGIIPOJOMF_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x1196BB50)
#define PEGIIPOJOMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1196B6A0)
#define PEGIIPOJOMF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1196B910)
#define PEGIIPOJOMF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1196B4C0)
#define PEGIIPOJOMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1196B780)
#define PEGIIPOJOMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1196B900)

inline static constexpr unsigned int PEGIIPOJOMF_TypeDefinitionIndex = 63284;

class PEGIIPOJOMF : public ::MoleMole::RendererFader
{
public:
	::UnityEngine::Color LJNOPOBPOCM; // 0x28
	::System::Single OCNJEGICJPC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGIIPOJOMF__CTOR_OFFSET))(this);
	}

	::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Renderer* DLGEGIHPJLD, ::System::Int32 JBEOJJKEGGI, ::System::String* BGJOPBCCMOC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_BBOMJDBNHIC_OFFSET))(this, DLGEGIHPJLD, JBEOJJKEGGI, BGJOPBCCMOC);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGIIPOJOMF_CMFOIAAGPFL_OFFSET))(this);
	}
};
