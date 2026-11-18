#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GONODIJFCFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GONODIJFCFH_BPCPMBKBGLL_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GONODIJFCFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GONODIJFCFH_GHIKECCFBHG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GONODIJFCFH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x755190)
#define GONODIJFCFH_JHGCKDJFNJA_OFFSET UNITYSDK_OFFSET(0x757290)
#define GONODIJFCFH_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GONODIJFCFH_LAHAPJAPNPN_OFFSET UNITYSDK_OFFSET(0x757190)
#define GONODIJFCFH_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GONODIJFCFH_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define GONODIJFCFH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A85580)
#define GONODIJFCFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GONODIJFCFH_TypeDefinitionIndex = 9162;

struct alignas(4) GONODIJFCFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONODIJFCFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GONODIJFCFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GONODIJFCFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONODIJFCFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_KKNNPLPEOFO_OFFSET))(this);
	}

	::System::String* BPCPMBKBGLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_BPCPMBKBGLL_OFFSET))(this);
	}

	::System::String* GHIKECCFBHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_GHIKECCFBHG_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* JHGCKDJFNJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_JHGCKDJFNJA_OFFSET))(this);
	}

	/*
	static ::GONODIJFCFH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GONODIJFCFH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GONODIJFCFH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* LAHAPJAPNPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONODIJFCFH_LAHAPJAPNPN_OFFSET))(this);
	}
};
