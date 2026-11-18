#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOPMCHBGNM.h"
#include "unitysdk/COBABJOLFLG.h"
#include "unitysdk/HLLMHIAANOG.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEDGDCLJLGF_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x60E910)
#define OEDGDCLJLGF_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x60E920)
#define OEDGDCLJLGF_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x60E900)
#define OEDGDCLJLGF_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x60E860)
#define OEDGDCLJLGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10060F00)

inline static constexpr unsigned int OEDGDCLJLGF_TypeDefinitionIndex = 83771;

struct alignas(8) OEDGDCLJLGF
{
	static ::OEDGDCLJLGF* StaticGet_FDJHEBHLJLD()
	{
		return (::OEDGDCLJLGF*)Il2CppClass::FromTypeDefinitionIndex(OEDGDCLJLGF_TypeDefinitionIndex)->GetStaticField(0x531A0);
	}
	::System::String* MGEDBKBHJPM; // 0x10
	::System::Int32 MMMHLENHKLN; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::COBABJOLFLG>* MBOOAJFIEFB; // 0x20
	::System::Collections::Generic::List_1<::HLLMHIAANOG>* GCBDFGDKDPG; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* BEHNOMAOLGD; // 0x30
	::System::Collections::Generic::List_1<::CEOPMCHBGNM>* NNBFDNMFJKD; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDGDCLJLGF__CCTOR_OFFSET))();
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + OEDGDCLJLGF_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDGDCLJLGF_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + OEDGDCLJLGF_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDGDCLJLGF_JDAPDDEOCEA_OFFSET))(this);
	}
};
