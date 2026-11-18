#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBDPHDFICG_JNEGJAEMPPL.h"
#include "unitysdk/System/Object.h"

class BNENHEDNODF;
class LGLPJIFCEIK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PICPKGKNFMC_DOHLICAPCPO_OFFSET UNITYSDK_OFFSET(0x1E0A7BB0)
#define PICPKGKNFMC_HBBKPIEDMCF_OFFSET UNITYSDK_OFFSET(0x1E0A7B70)
#define PICPKGKNFMC_KOKLAHNKAPG_OFFSET UNITYSDK_OFFSET(0x1E0A7C70)
#define PICPKGKNFMC_LAJCIAHDADL_OFFSET UNITYSDK_OFFSET(0x1E0A7EF0)
#define PICPKGKNFMC_OGGALJAOKMJ_OFFSET UNITYSDK_OFFSET(0x1E0A8080)
#define PICPKGKNFMC_PCEAHPFEAPM_OFFSET UNITYSDK_OFFSET(0x1E0A7DC0)
#define PICPKGKNFMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E0A69A0)
#define PICPKGKNFMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A7B60)
#define PICPKGKNFMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A7AB0)

inline static constexpr unsigned int PICPKGKNFMC_TypeDefinitionIndex = 8428;

class PICPKGKNFMC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NAILHNBDBLI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PICPKGKNFMC_TypeDefinitionIndex)->GetStaticField(0x3850);
	}
	::System::String* CIFKEAJLODA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::LGLPJIFCEIK*>* GADLKNLOGOD; // 0x18
	::System::Int32 LLBONHEOMHL; // 0x20

	::System::Void _ctor(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PICPKGKNFMC__CTOR_OFFSET))(this, HIAIKHDFCLN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICPKGKNFMC__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::LGLPJIFCEIK*>* HBBKPIEDMCF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::LGLPJIFCEIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPKGKNFMC_HBBKPIEDMCF_OFFSET))(this);
	}

	::System::Void DOHLICAPCPO(::BNENHEDNODF* MFFNGFOFFGH, ::LGLPJIFCEIK* OJMIAGMGMFI, ::LHBDPHDFICG_JNEGJAEMPPL GEJCKFFFKCL, ::System::Boolean FAADEJBNDFO, ::System::Int32 FAKHCNLCBCE)
	{
		return ((::System::Void(*)(::PVOID, ::BNENHEDNODF*, ::LGLPJIFCEIK*, ::LHBDPHDFICG_JNEGJAEMPPL, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + PICPKGKNFMC_DOHLICAPCPO_OFFSET))(this, MFFNGFOFFGH, OJMIAGMGMFI, GEJCKFFFKCL, FAADEJBNDFO, FAKHCNLCBCE);
	}

	::System::Void KOKLAHNKAPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPKGKNFMC_KOKLAHNKAPG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPKGKNFMC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PCEAHPFEAPM(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PICPKGKNFMC_PCEAHPFEAPM_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void LAJCIAHDADL(::BNENHEDNODF* FHEFEFMNDMJ, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::BNENHEDNODF*, ::System::String*))((::PBYTE)hIl2Cpp + PICPKGKNFMC_LAJCIAHDADL_OFFSET))(this, FHEFEFMNDMJ, MCOHLHMKLIP);
	}

	::BNENHEDNODF* OGGALJAOKMJ(::System::String* MCOHLHMKLIP)
	{
		return ((::BNENHEDNODF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PICPKGKNFMC_OGGALJAOKMJ_OFFSET))(this, MCOHLHMKLIP);
	}
};
