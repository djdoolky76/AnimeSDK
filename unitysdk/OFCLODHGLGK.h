#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define OFCLODHGLGK_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0xE0F5630)
#define OFCLODHGLGK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xE0F5F50)
#define OFCLODHGLGK_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0xE0F5880)
#define OFCLODHGLGK_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0xE0F5EB0)
#define OFCLODHGLGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0F5BF0)
#define OFCLODHGLGK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xE0F6320)
#define OFCLODHGLGK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xE0F5990)
#define OFCLODHGLGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE0F5CE0)
#define OFCLODHGLGK__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F5EA0)

inline static constexpr unsigned int OFCLODHGLGK_TypeDefinitionIndex = 68740;

class OFCLODHGLGK : public ::MoleMole::RendererFader
{
public:
	::System::Single OCNJEGICJPC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCLODHGLGK__CTOR_OFFSET))(this);
	}

	::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + OFCLODHGLGK_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + OFCLODHGLGK_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + OFCLODHGLGK_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCLODHGLGK_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCLODHGLGK_TOSTRING_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCLODHGLGK_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Renderer* DLGEGIHPJLD, ::System::Int32 JBEOJJKEGGI, ::System::String* BGJOPBCCMOC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + OFCLODHGLGK_BBOMJDBNHIC_OFFSET))(this, DLGEGIHPJLD, JBEOJJKEGGI, BGJOPBCCMOC);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCLODHGLGK_DPIHOJBBGLA_OFFSET))(this);
	}
};
