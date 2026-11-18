#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace MoleMole { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_AKLMDHKIFNB_OFFSET UNITYSDK_OFFSET(0x12B4FC40)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12B506A0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_CBCPMNENKOK_OFFSET UNITYSDK_OFFSET(0x12B4FDF0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x12B50600)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B50110)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12B508A0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_HASINSMAT_OFFSET UNITYSDK_OFFSET(0x12B4FC30)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MAT_OFFSET UNITYSDK_OFFSET(0x12B4F9B0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MONOEFFECT_OFFSET UNITYSDK_OFFSET(0x12B4F9A0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_HBFDBMOKEOL_OFFSET UNITYSDK_OFFSET(0x12B50450)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_JIKGIBBPHFF_OFFSET UNITYSDK_OFFSET(0x12B50850)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12B4FF60)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B501F0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x12B50440)

namespace MoleMole
{
	inline static constexpr unsigned int MatKeyPropValueFaderByIndex_TypeDefinitionIndex = 60349;

	class MatKeyPropValueFaderByIndex : public ::MoleMole::RendererFader
	{
	public:
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::System::Single lastVal; // 0x30
		::System::Single oriVal; // 0x34
		::System::Boolean _hasInsMat; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 _materialInstanceId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoEffect* get_MonoEffect()
		{
			return ((::MoleMole::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MONOEFFECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MAT_OFFSET))(this);
		}

		::System::Boolean get_HasInsMat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_HASINSMAT_OFFSET))(this);
		}

		::System::Void AKLMDHKIFNB(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_AKLMDHKIFNB_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
		}

		::System::Void CBCPMNENKOK(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF, ::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_CBCPMNENKOK_OFFSET))(this, POJEDACFDOF, IMLLDOHDCNC);
		}

		::System::Void NPOLNFDBOOD(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_NPOLNFDBOOD_OFFSET))(this, POJEDACFDOF);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Void HBFDBMOKEOL(::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_HBFDBMOKEOL_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::Void CMFOIAAGPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_CMFOIAAGPFL_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC(::MoleMole::MonoEffect* KCDHIILKFBE, ::System::Int32 JBEOJJKEGGI, ::System::String* KMLGAOHHLDL, ::System::Single HKBIOEKPFDJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_BBOMJDBNHIC_OFFSET))(this, KCDHIILKFBE, JBEOJJKEGGI, KMLGAOHHLDL, HKBIOEKPFDJ);
		}

		::System::Void JIKGIBBPHFF(::System::Int32 MGNBJGDBCFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_JIKGIBBPHFF_OFFSET))(this, MGNBJGDBCFD);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
