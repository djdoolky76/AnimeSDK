#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class IJLOBIGIEDO;
class OMGJIDKKHHO;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBJHCKEKCEL_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x113CFEC0)
#define BBJHCKEKCEL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x113CFBC0)
#define BBJHCKEKCEL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x113CFDC0)
#define BBJHCKEKCEL_LDLEKFJKOIP_OFFSET UNITYSDK_OFFSET(0x113CFF80)
#define BBJHCKEKCEL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x113CFD30)
#define BBJHCKEKCEL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x113CFB30)
#define BBJHCKEKCEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x113CFC10)
#define BBJHCKEKCEL__CTOR_OFFSET UNITYSDK_OFFSET(0x113CFCA0)

inline static constexpr unsigned int BBJHCKEKCEL_TypeDefinitionIndex = 88701;

class BBJHCKEKCEL : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_EKMCDNMAJHH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BBJHCKEKCEL_TypeDefinitionIndex)->GetStaticField(0xD6F0);
	}
	// static const ::System::String* DJGPCJBJLMC; // 0x0
	// static const ::System::String* JIHDPPJIHOD; // 0x0
	// static const ::System::String* ELKNENGPLAE; // 0x0
	// static const ::System::String* HDIDPKCMEKC; // 0x0
	// static const ::System::String* JBCKAODDNHM; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x41; // 0x0
	::System::Action_2<::System::String*, ::System::Object*>* GJMKJFMANOA; // 0x48
	::OMGJIDKKHHO* EGICJEHDLPD; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* BGOIDHNOPIC; // 0x58
	::IJLOBIGIEDO* ECMMKCJLBMD; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* APLMNALEIEP; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBJHCKEKCEL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHCKEKCEL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHCKEKCEL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHCKEKCEL_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHCKEKCEL_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::BBJHCKEKCEL* JFDOOELFAOA()
	{
		return ((::BBJHCKEKCEL*(*)())((::PBYTE)hIl2Cpp + BBJHCKEKCEL_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::System::String* FKOHLNEKEJH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GCKPCFOAINM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + BBJHCKEKCEL_GALGFCPKMGC_OFFSET))(this, FKOHLNEKEJH, GCKPCFOAINM);
	}

	::System::Boolean LDLEKFJKOIP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHCKEKCEL_LDLEKFJKOIP_OFFSET))(this);
	}
};
