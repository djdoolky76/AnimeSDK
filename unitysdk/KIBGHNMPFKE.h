#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KIBGHNMPFKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KIBGHNMPFKE_BKGHHJBJDIP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KIBGHNMPFKE_FKCBKKKLADF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KIBGHNMPFKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIBGHNMPFKE_GLDILGKEAOD_OFFSET UNITYSDK_OFFSET(0x757290)
#define KIBGHNMPFKE_MNGCABPBLAA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KIBGHNMPFKE_MPBKKPNLCOK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KIBGHNMPFKE_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754970)
#define KIBGHNMPFKE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A50BDE0)
#define KIBGHNMPFKE_OHKHNFIAEOJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KIBGHNMPFKE_OPLLNKOAGII_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KIBGHNMPFKE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KIBGHNMPFKE_TypeDefinitionIndex = 11381;

struct alignas(4) KIBGHNMPFKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIBGHNMPFKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 OHKHNFIAEOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_OHKHNFIAEOJ_OFFSET))(this);
	}

	/*
	static ::KIBGHNMPFKE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KIBGHNMPFKE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MNGCABPBLAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_MNGCABPBLAA_OFFSET))(this);
	}

	::System::String* BKGHHJBJDIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_BKGHHJBJDIP_OFFSET))(this);
	}

	::System::String* MPBKKPNLCOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_MPBKKPNLCOK_OFFSET))(this);
	}

	::System::String* FKCBKKKLADF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_FKCBKKKLADF_OFFSET))(this);
	}

	/*
	::KIBGHNMPFKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIBGHNMPFKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OPLLNKOAGII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_OPLLNKOAGII_OFFSET))(this);
	}

	::System::String* GLDILGKEAOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBGHNMPFKE_GLDILGKEAOD_OFFSET))(this);
	}
};
