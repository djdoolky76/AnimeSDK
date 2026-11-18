#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace MoleMole { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MATKEYWORDFADERBYINDEX_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x1192D8D0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1192E3A0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x1192DC30)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x1192E7C0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1192E040)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_DLGJKDPJEGB_OFFSET UNITYSDK_OFFSET(0x1192E5B0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1192EAC0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_FJIPJJIMEOD_OFFSET UNITYSDK_OFFSET(0x1192E8B0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MAT_OFFSET UNITYSDK_OFFSET(0x1192D510)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1192D500)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_HBFDBMOKEOL_OFFSET UNITYSDK_OFFSET(0x1192EB00)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_HDLMMKKCGKJ_OFFSET UNITYSDK_OFFSET(0x1192DB60)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_JIKGIBBPHFF_OFFSET UNITYSDK_OFFSET(0x1192E860)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1192DE70)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1192E120)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1192E390)

namespace MoleMole
{
	inline static constexpr unsigned int MatKeyWordFaderByIndex_TypeDefinitionIndex = 91996;

	class MatKeyWordFaderByIndex : public ::MoleMole::RendererFader
	{
	public:
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::System::String* keyWord; // 0x30
		::System::Boolean lastVal; // 0x38
		::System::Boolean oriVal; // 0x39
		::System::Boolean _hasInsMat; // 0x3A
		::System::Boolean _hasInitialFxClipState; // 0x3B
		::System::Int32 _matInstanceId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoEffect* get_MonoEffect()
		{
			return ((::MoleMole::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MONOEFFECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MAT_OFFSET))(this);
		}

		::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& JLFIMLIGEKF, ::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_AKLMDHKIFNB_OFFSET))(this, JLFIMLIGEKF, IMLLDOHDCNC);
		}

		::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
		}

		::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC(::MoleMole::MonoEffect* KCDHIILKFBE, ::System::Int32 CADLDDNJLKH, ::System::String* KMLGAOHHLDL, ::System::Boolean HKBIOEKPFDJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_BBOMJDBNHIC_OFFSET))(this, KCDHIILKFBE, CADLDDNJLKH, KMLGAOHHLDL, HKBIOEKPFDJ);
		}

		::System::Boolean HDLMMKKCGKJ(::System::Single IMLLDOHDCNC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_HDLMMKKCGKJ_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::Void DLGJKDPJEGB(::MoleMole::MonoEffect* KCDHIILKFBE, ::System::Int32 CADLDDNJLKH, ::System::Boolean HKBIOEKPFDJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_DLGJKDPJEGB_OFFSET))(this, KCDHIILKFBE, CADLDDNJLKH, HKBIOEKPFDJ);
		}

		::System::Void CMFOIAAGPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_CMFOIAAGPFL_OFFSET))(this);
		}

		::System::Void JIKGIBBPHFF(::System::String* KMLGAOHHLDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_JIKGIBBPHFF_OFFSET))(this, KMLGAOHHLDL);
		}

		::System::Void FJIPJJIMEOD(::MoleMole::MonoEffect* KCDHIILKFBE, ::System::Int32 CADLDDNJLKH, ::System::Boolean HKBIOEKPFDJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_FJIPJJIMEOD_OFFSET))(this, KCDHIILKFBE, CADLDDNJLKH, HKBIOEKPFDJ);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void HBFDBMOKEOL(::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_HBFDBMOKEOL_OFFSET))(this, IMLLDOHDCNC);
		}
	};
}
