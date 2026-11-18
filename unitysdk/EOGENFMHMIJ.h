#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHNCCABJGPA.h"
#include "unitysdk/KOLFGAALPJM.h"
#include "unitysdk/MFEIKFOLILJ.h"

class EIMGMBNCJON;
class KOHPAOOBMGD;
class OMKHOPABFDJ;
class PPPHCHDBPKE;
namespace System { class Object; }
namespace System { class String; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define EOGENFMHMIJ_AGNKHOHENBD_OFFSET UNITYSDK_OFFSET(0x1B2F0670)
#define EOGENFMHMIJ_BODOFCJDMIC_OFFSET UNITYSDK_OFFSET(0x1B2F0470)
#define EOGENFMHMIJ_CNEDMCLLNHA_OFFSET UNITYSDK_OFFSET(0x1B2F0450)
#define EOGENFMHMIJ_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1B2F04F0)
#define EOGENFMHMIJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B2EFF00)
#define EOGENFMHMIJ_DKBFHOAPHCE_OFFSET UNITYSDK_OFFSET(0x1B2F0880)
#define EOGENFMHMIJ_DKHALDDAFFC_OFFSET UNITYSDK_OFFSET(0x1B2EFE70)
#define EOGENFMHMIJ_EFGBEHCBDNI_OFFSET UNITYSDK_OFFSET(0x1B2F0460)
#define EOGENFMHMIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B2F0140)
#define EOGENFMHMIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2F0070)
#define EOGENFMHMIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B2F01D0)
#define EOGENFMHMIJ_GIALDDHFBLF_OFFSET UNITYSDK_OFFSET(0x1B2EFF70)
#define EOGENFMHMIJ_HBDBJDANMLP_OFFSET UNITYSDK_OFFSET(0x1B2EFE80)
#define EOGENFMHMIJ_IGLKAKNLADP_OFFSET UNITYSDK_OFFSET(0x1B2F0890)
#define EOGENFMHMIJ_JKELAOKCLJP_OFFSET UNITYSDK_OFFSET(0x1B2F02F0)
#define EOGENFMHMIJ_LEHECPACPJD_OFFSET UNITYSDK_OFFSET(0x1B2F0780)
#define EOGENFMHMIJ_METHOD_21_OFFSET UNITYSDK_OFFSET(0x1B2F0840)
#define EOGENFMHMIJ_MNGHBPNCMPK_OFFSET UNITYSDK_OFFSET(0x1B2F02C0)
#define EOGENFMHMIJ_NNMIABKFEOJ_1_OFFSET UNITYSDK_OFFSET(0x1B2F0420)
#define EOGENFMHMIJ_NNMIABKFEOJ_OFFSET UNITYSDK_OFFSET(0x1B2F03A0)
#define EOGENFMHMIJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1B2F0480)
#define EOGENFMHMIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2F0240)
#define EOGENFMHMIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F0530)
#define EOGENFMHMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EFE90)

inline static constexpr unsigned int EOGENFMHMIJ_TypeDefinitionIndex = 22312;

class EOGENFMHMIJ : public ::IHNCCABJGPA
{
public:
	static ::System::Object** StaticGet_JNPBMHMGDBO()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EOGENFMHMIJ_TypeDefinitionIndex)->GetStaticField(0x1DEB0);
	}
	static ::System::Object** StaticGet_GPOBHMEOBOF()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EOGENFMHMIJ_TypeDefinitionIndex)->GetStaticField(0x1DEB8);
	}
	static ::KOHPAOOBMGD** StaticGet_ELKODHCMHMN()
	{
		return (::KOHPAOOBMGD**)Il2CppClass::FromTypeDefinitionIndex(EOGENFMHMIJ_TypeDefinitionIndex)->GetStaticField(0x1DEC0);
	}
	::ELKFEFPPPFL_2<::System::String*, ::System::String*>* BEJNPNAPJOI; // 0x20
	::ELKFEFPPPFL_2<::System::String*, ::System::Int32>* HMDNHACNPJJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOGENFMHMIJ__CCTOR_OFFSET))();
	}

	::System::UInt16 DKHALDDAFFC()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_DKHALDDAFFC_OFFSET))(this);
	}

	::EIMGMBNCJON* HBDBJDANMLP()
	{
		return ((::EIMGMBNCJON*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_HBDBJDANMLP_OFFSET))(this);
	}

	::EOGENFMHMIJ* DGNAAPGKIPL()
	{
		return ((::EOGENFMHMIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::EOGENFMHMIJ* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOGENFMHMIJ*))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_TOSTRING_OFFSET))(this);
	}

	::System::Void MNGHBPNCMPK(::OMKHOPABFDJ* AJMCCOEAIFE)
	{
		return ((::System::Void(*)(::PVOID, ::OMKHOPABFDJ*))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_MNGHBPNCMPK_OFFSET))(this, AJMCCOEAIFE);
	}

	::System::Int32 JKELAOKCLJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_JKELAOKCLJP_OFFSET))(this);
	}

	::System::Void NNMIABKFEOJ(::EOGENFMHMIJ* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::EOGENFMHMIJ*))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_NNMIABKFEOJ_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void NNMIABKFEOJ_1(::PPPHCHDBPKE* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::PPPHCHDBPKE*))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_NNMIABKFEOJ_1_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void CNEDMCLLNHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_CNEDMCLLNHA_OFFSET))(this);
	}

	::System::Void EFGBEHCBDNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_EFGBEHCBDNI_OFFSET))(this);
	}

	::System::Void BODOFCJDMIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_BODOFCJDMIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void GIALDDHFBLF(::EOGENFMHMIJ* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::EOGENFMHMIJ*))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_GIALDDHFBLF_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void AGNKHOHENBD(::MFEIKFOLILJ& HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::MFEIKFOLILJ&))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_AGNKHOHENBD_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void LEHECPACPJD(::KOLFGAALPJM& AJMCCOEAIFE)
	{
		return ((::System::Void(*)(::PVOID, ::KOLFGAALPJM&))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_LEHECPACPJD_OFFSET))(this, AJMCCOEAIFE);
	}

	static ::EOGENFMHMIJ* Method_21()
	{
		return ((::EOGENFMHMIJ*(*)())((::PBYTE)hIl2Cpp + EOGENFMHMIJ_METHOD_21_OFFSET))();
	}

	::ELKFEFPPPFL_2<::System::String*, ::System::String*>* DKBFHOAPHCE()
	{
		return ((::ELKFEFPPPFL_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_DKBFHOAPHCE_OFFSET))(this);
	}

	::ELKFEFPPPFL_2<::System::String*, ::System::Int32>* IGLKAKNLADP()
	{
		return ((::ELKFEFPPPFL_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGENFMHMIJ_IGLKAKNLADP_OFFSET))(this);
	}
};
