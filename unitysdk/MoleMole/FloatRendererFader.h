#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_FLOATRENDERERFADER_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x103FCC10)
#define MOLEMOLE_FLOATRENDERERFADER_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x103FD610)
#define MOLEMOLE_FLOATRENDERERFADER_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x103FCE20)
#define MOLEMOLE_FLOATRENDERERFADER_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x103FDA10)
#define MOLEMOLE_FLOATRENDERERFADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103FD120)
#define MOLEMOLE_FLOATRENDERERFADER_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x103FDE70)
#define MOLEMOLE_FLOATRENDERERFADER_JIKGIBBPHFF_OFFSET UNITYSDK_OFFSET(0x103FDAB0)
#define MOLEMOLE_FLOATRENDERERFADER_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x103FCF30)
#define MOLEMOLE_FLOATRENDERERFADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x103FD200)
#define MOLEMOLE_FLOATRENDERERFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x103FD600)

namespace MoleMole
{
	inline static constexpr unsigned int FloatRendererFader_TypeDefinitionIndex = 74832;

	class FloatRendererFader : public ::MoleMole::RendererFader
	{
	public:
		::System::Single _origAlpha; // 0x28
		::System::Single _startAlpha; // 0x2C
		::System::Boolean _isOneZero; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER__CTOR_OFFSET))(this);
		}

		::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
		}

		::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
		}

		::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_TOSTRING_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC(::UnityEngine::Renderer* DLGEGIHPJLD, ::System::Int32 JBEOJJKEGGI, ::System::String* BGJOPBCCMOC, ::System::Single PIPHENBKPND, ::System::Boolean LJDNCEDHCGF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_BBOMJDBNHIC_OFFSET))(this, DLGEGIHPJLD, JBEOJJKEGGI, BGJOPBCCMOC, PIPHENBKPND, LJDNCEDHCGF);
		}

		::System::Void CMFOIAAGPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_CMFOIAAGPFL_OFFSET))(this);
		}

		::System::Void JIKGIBBPHFF(::System::Int32 DABJIHHDFNO, ::System::Single PIPHENBKPND, ::System::Boolean LJDNCEDHCGF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_JIKGIBBPHFF_OFFSET))(this, DABJIHHDFNO, PIPHENBKPND, LJDNCEDHCGF);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
