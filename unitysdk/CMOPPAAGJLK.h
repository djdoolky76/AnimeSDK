#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFPLNFLBBKI.h"
#include "unitysdk/OEDGDCLJLGF.h"
#include "unitysdk/PHAHJCOGLJK.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMOPPAAGJLK_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x76D5E0)
#define CMOPPAAGJLK_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x60E920)
#define CMOPPAAGJLK_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x76D5D0)
#define CMOPPAAGJLK_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x76D530)
#define CMOPPAAGJLK__CCTOR_OFFSET UNITYSDK_OFFSET(0x159E8820)

inline static constexpr unsigned int CMOPPAAGJLK_TypeDefinitionIndex = 69656;

struct alignas(8) CMOPPAAGJLK
{
	static ::CMOPPAAGJLK* StaticGet_FDJHEBHLJLD()
	{
		return (::CMOPPAAGJLK*)Il2CppClass::FromTypeDefinitionIndex(CMOPPAAGJLK_TypeDefinitionIndex)->GetStaticField(0x53160);
	}
	::System::String* KMEBJPAEBCK; // 0x10
	::System::Int32 CCHFLKAKOMO; // 0x18
	::System::Int32 GBAFGJLNMPK; // 0x1C
	::System::String* NNJFMINKCMF; // 0x20
	::System::Collections::Generic::List_1<::OEDGDCLJLGF>* JLNCOICNMMA; // 0x28
	::System::Collections::Generic::List_1<::HFPLNFLBBKI>* NNBFDNMFJKD; // 0x30
	::System::Collections::Generic::List_1<::PHAHJCOGLJK>* OJNFAOMCJPG; // 0x38
	::System::Collections::Generic::List_1<::PHAHJCOGLJK>* PKNCNPLBINL; // 0x40
	::System::Collections::Generic::List_1<::PHAHJCOGLJK>* KOEHBLEAMDK; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMOPPAAGJLK__CCTOR_OFFSET))();
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CMOPPAAGJLK_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPPAAGJLK_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CMOPPAAGJLK_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPPAAGJLK_JDAPDDEOCEA_OFFSET))(this);
	}
};
