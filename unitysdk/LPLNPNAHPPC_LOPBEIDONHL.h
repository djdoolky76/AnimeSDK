#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIPCHKEHME;
namespace System { class String; }

#define LPLNPNAHPPC_LOPBEIDONHL_CLGFHHPIDAE_OFFSET UNITYSDK_OFFSET(0x14D554F0)
#define LPLNPNAHPPC_LOPBEIDONHL_EGFPNKPJGJB_OFFSET UNITYSDK_OFFSET(0x14D556F0)
#define LPLNPNAHPPC_LOPBEIDONHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14D55480)

inline static constexpr unsigned int LPLNPNAHPPC_LOPBEIDONHL_TypeDefinitionIndex = 87585;

class LPLNPNAHPPC_LOPBEIDONHL : public ::System::Object
{
public:
	::System::String* NBNKJCEMOHD; // 0x10
	::System::Int32 LFAKFEBIPKO; // 0x18
	::System::Int32 GKCICCHCGJN; // 0x1C

	::System::Void _ctor(::System::Int32 JJHEPDEEPDI, ::System::Int32 OPMPCAOEFBP, ::System::String* ONOAGAPJNCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + LPLNPNAHPPC_LOPBEIDONHL__CTOR_OFFSET))(this, JJHEPDEEPDI, OPMPCAOEFBP, ONOAGAPJNCG);
	}

	::System::Boolean CLGFHHPIDAE(::LHIPCHKEHME* CMDANBLAIKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIPCHKEHME*))((::PBYTE)hIl2Cpp + LPLNPNAHPPC_LOPBEIDONHL_CLGFHHPIDAE_OFFSET))(this, CMDANBLAIKM);
	}

	::System::String* EGFPNKPJGJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLNPNAHPPC_LOPBEIDONHL_EGFPNKPJGJB_OFFSET))(this);
	}
};
