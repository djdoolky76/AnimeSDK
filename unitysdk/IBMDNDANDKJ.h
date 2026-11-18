#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFEOMMEJHC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class PLOAOABEPLB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBMDNDANDKJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DE52D20)
#define IBMDNDANDKJ_ILPPHLABHAM_OFFSET UNITYSDK_OFFSET(0x1DE53310)
#define IBMDNDANDKJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DE53230)
#define IBMDNDANDKJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DE52EA0)
#define IBMDNDANDKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DE52DF0)
#define IBMDNDANDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE52D60)

inline static constexpr unsigned int IBMDNDANDKJ_TypeDefinitionIndex = 94200;

class IBMDNDANDKJ : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PLOAOABEPLB*>* JMINOGAOFIL; // 0x18
	::EMFEOMMEJHC DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDNDANDKJ__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDNDANDKJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDNDANDKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBMDNDANDKJ_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::PLOAOABEPLB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PLOAOABEPLB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBMDNDANDKJ_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Collections::Generic::List_1<::PLOAOABEPLB*>* ILPPHLABHAM()
	{
		return ((::System::Collections::Generic::List_1<::PLOAOABEPLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDNDANDKJ_ILPPHLABHAM_OFFSET))(this);
	}
};
