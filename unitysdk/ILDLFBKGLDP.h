#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAHCLJPMCIG;
class JEDPJHPMPJB;
class OBJANKHLNGO;
namespace System { class Action; }
namespace System { class String; }

#define ILDLFBKGLDP_BEGGPLGOHFD_OFFSET UNITYSDK_OFFSET(0x1649C480)
#define ILDLFBKGLDP_BNNMAENOKNL_OFFSET UNITYSDK_OFFSET(0x1649C270)
#define ILDLFBKGLDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1649C010)
#define ILDLFBKGLDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1649CC00)
#define ILDLFBKGLDP_DPDHJMGJFPG_OFFSET UNITYSDK_OFFSET(0x1649C160)
#define ILDLFBKGLDP_FHGEBNLBFII_OFFSET UNITYSDK_OFFSET(0x1649CB70)
#define ILDLFBKGLDP_GAOCIKGOMEC_OFFSET UNITYSDK_OFFSET(0x1649C1B0)
#define ILDLFBKGLDP_GBBJJGPBOLI_OFFSET UNITYSDK_OFFSET(0x1649C3F0)
#define ILDLFBKGLDP_GBNKIEAHDKH_OFFSET UNITYSDK_OFFSET(0x1649C890)
#define ILDLFBKGLDP_GET_CURRENTRULE_OFFSET UNITYSDK_OFFSET(0x1649C0D0)
#define ILDLFBKGLDP_GET_FORCESELECTCARDINDEX_OFFSET UNITYSDK_OFFSET(0x1649C140)
#define ILDLFBKGLDP_GET_ISGAMEPADCARDAUTOFOCUSENABLED_OFFSET UNITYSDK_OFFSET(0x1649C250)
#define ILDLFBKGLDP_GHJIKHDOMJJ_OFFSET UNITYSDK_OFFSET(0x1649C5F0)
#define ILDLFBKGLDP_HBAHJFAADOE_OFFSET UNITYSDK_OFFSET(0x1649CAD0)
#define ILDLFBKGLDP_KMOCGKJIKDI_OFFSET UNITYSDK_OFFSET(0x1649C340)
#define ILDLFBKGLDP_KPBLKACGDIK_OFFSET UNITYSDK_OFFSET(0x1649C4F0)
#define ILDLFBKGLDP_LHKIIKMBBCH_OFFSET UNITYSDK_OFFSET(0x1649C7A0)
#define ILDLFBKGLDP_MMFCINGBMOM_OFFSET UNITYSDK_OFFSET(0x1649C550)
#define ILDLFBKGLDP_NEBMEDBMEGK_OFFSET UNITYSDK_OFFSET(0x1649C690)
#define ILDLFBKGLDP_PKNPPCPADAE_OFFSET UNITYSDK_OFFSET(0x1649C9D0)
#define ILDLFBKGLDP_PLDDMNAEBJA_OFFSET UNITYSDK_OFFSET(0x1649C0F0)
#define ILDLFBKGLDP_SET_CURRENTRULE_OFFSET UNITYSDK_OFFSET(0x1649C0E0)
#define ILDLFBKGLDP_SET_FORCESELECTCARDINDEX_OFFSET UNITYSDK_OFFSET(0x1649C150)
#define ILDLFBKGLDP_SET_ISGAMEPADCARDAUTOFOCUSENABLED_OFFSET UNITYSDK_OFFSET(0x1649C260)

inline static constexpr unsigned int ILDLFBKGLDP_TypeDefinitionIndex = 80711;

	class ILDLFBKGLDP : public ::System::Object
	{
	public:
		::JEDPJHPMPJB* _CurrentRule_k__BackingField; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::EAHCLJPMCIG* EHBMCGLLEBM; // 0x20
		::System::Action* IDLDNPGDGOK; // 0x28
		::System::Boolean _IsGamepadCardAutoFocusEnabled_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 _ForceSelectCardIndex_k__BackingField; // 0x34
		// static const ::System::Object MBAINCGCIIE; // 0x0
		::System::Void _ctor(::EAHCLJPMCIG* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_CTOR_OFFSET))(this, a1, a2);
		}

		::JEDPJHPMPJB* get_CurrentRule()
		{
			return ((::JEDPJHPMPJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GET_CURRENTRULE_OFFSET))(this);
		}

		::System::Void set_CurrentRule(::JEDPJHPMPJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEDPJHPMPJB*))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_SET_CURRENTRULE_OFFSET))(this, a1);
		}

		::System::Boolean PLDDMNAEBJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_PLDDMNAEBJA_OFFSET))(this);
		}

		::System::Int32 get_ForceSelectCardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GET_FORCESELECTCARDINDEX_OFFSET))(this);
		}

		::System::Void set_ForceSelectCardIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_SET_FORCESELECTCARDINDEX_OFFSET))(this, a1);
		}

		::System::Boolean DPDHJMGJFPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_DPDHJMGJFPG_OFFSET))(this);
		}

		::System::Boolean GAOCIKGOMEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GAOCIKGOMEC_OFFSET))(this);
		}

		::System::Boolean get_IsGamepadCardAutoFocusEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GET_ISGAMEPADCARDAUTOFOCUSENABLED_OFFSET))(this);
		}

		::System::Void set_IsGamepadCardAutoFocusEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_SET_ISGAMEPADCARDAUTOFOCUSENABLED_OFFSET))(this, a1);
		}

		::System::Void BNNMAENOKNL(::JEDPJHPMPJB* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JEDPJHPMPJB*, ::System::Action*))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_BNNMAENOKNL_OFFSET))(this, a1, a2);
		}

		::System::Void KMOCGKJIKDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_KMOCGKJIKDI_OFFSET))(this);
		}

		::System::Boolean GBBJJGPBOLI(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GBBJJGPBOLI_OFFSET))(this, a1, a2);
		}

		::System::Boolean KPBLKACGDIK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_KPBLKACGDIK_OFFSET))(this, a1);
		}

		::System::Boolean MMFCINGBMOM(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_MMFCINGBMOM_OFFSET))(this, a1, a2);
		}

		::System::Void GHJIKHDOMJJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GHJIKHDOMJJ_OFFSET))(this, a1);
		}

		::System::Void LHKIIKMBBCH(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_LHKIIKMBBCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean BEGGPLGOHFD(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_BEGGPLGOHFD_OFFSET))(this, a1, a2);
		}

		::System::Void PKNPPCPADAE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_PKNPPCPADAE_OFFSET))(this, a1);
		}

		::System::Void NEBMEDBMEGK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_NEBMEDBMEGK_OFFSET))(this, a1);
		}

		::System::Void HBAHJFAADOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_HBAHJFAADOE_OFFSET))(this);
		}

		::System::Void FHGEBNLBFII(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_FHGEBNLBFII_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GBNKIEAHDKH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDLFBKGLDP_GBNKIEAHDKH_OFFSET))(this, a1);
		}

	};
