#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEOHMMGGKIA.h"
#include "unitysdk/System/ValueType.h"

class AHKCOBCOKCE;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFPJHHNGFEF_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x7A35E0)
#define NFPJHHNGFEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A3530)
#define NFPJHHNGFEF_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x7A35B0)
#define NFPJHHNGFEF_IKBGMGEEFLP_OFFSET UNITYSDK_OFFSET(0x7A3550)
#define NFPJHHNGFEF_JOCBAOCIJID_OFFSET UNITYSDK_OFFSET(0x7A3550)
#define NFPJHHNGFEF_KGLLLKKLBCP_OFFSET UNITYSDK_OFFSET(0x7A3540)
#define NFPJHHNGFEF_ONDOHGGNJJB_OFFSET UNITYSDK_OFFSET(0x7A35D0)
#define NFPJHHNGFEF_PLJOGPIBEIA_OFFSET UNITYSDK_OFFSET(0x7A35C0)
#define NFPJHHNGFEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17282AE0)

inline static constexpr unsigned int NFPJHHNGFEF_TypeDefinitionIndex = 43682;

struct alignas(8) NFPJHHNGFEF
{
	static ::System::Int32* StaticGet_FLHLLMNAHIC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NFPJHHNGFEF_TypeDefinitionIndex)->GetStaticField(0x124B0);
	}
	::System::Collections::Generic::List_1<::JEOHMMGGKIA>* JMDOANHOEJG; // 0x10
	::System::Action_1<::System::Boolean>* KPBLNMGHHNI; // 0x18
	::AHKCOBCOKCE* CGDDAIOFHPN; // 0x20
	::System::Boolean GEJDJLNLFGI; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPJHHNGFEF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_DISPOSE_OFFSET))(this);
	}

	::System::Void KGLLLKKLBCP(::System::Boolean NBNCOBIHKGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_KGLLLKKLBCP_OFFSET))(this, NBNCOBIHKGF);
	}

	::System::Boolean IKBGMGEEFLP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_IKBGMGEEFLP_OFFSET))(this);
	}

	::System::Boolean DKCCELBNBLM(::System::String* AELLPLBJELA, ::System::Boolean AHEAEIMIJJK, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_DKCCELBNBLM_OFFSET))(this, AELLPLBJELA, AHEAEIMIJJK, DKOFFFNEFJC);
	}

	::System::Boolean PLJOGPIBEIA(::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_PLJOGPIBEIA_OFFSET))(this, AELLPLBJELA);
	}

	::System::String* ONDOHGGNJJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_ONDOHGGNJJB_OFFSET))(this);
	}

	::System::Boolean JOCBAOCIJID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_JOCBAOCIJID_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::System::Boolean OBKEHPHKGKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPJHHNGFEF_ABDLEONNPAJ_OFFSET))(this, OBKEHPHKGKC);
	}
};
