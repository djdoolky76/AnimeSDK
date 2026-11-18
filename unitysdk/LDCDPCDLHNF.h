#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDCDPCDLHNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDCDPCDLHNF_BLIMPIHIAKE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LDCDPCDLHNF_BOFFMNMAMLP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LDCDPCDLHNF_DENNAGNEFCO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LDCDPCDLHNF_DPDAOJGBMIF_OFFSET UNITYSDK_OFFSET(0x755790)
#define LDCDPCDLHNF_GCMBGENEHMJ_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define LDCDPCDLHNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDCDPCDLHNF_GIMFFMLLNKB_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define LDCDPCDLHNF_KKPNODCECPJ_OFFSET UNITYSDK_OFFSET(0x761360)
#define LDCDPCDLHNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BE11B0)
#define LDCDPCDLHNF_OBAKDBKFIBC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDCDPCDLHNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDCDPCDLHNF_TypeDefinitionIndex = 15911;

struct alignas(4) LDCDPCDLHNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDCDPCDLHNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LDCDPCDLHNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LDCDPCDLHNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean KKPNODCECPJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_KKPNODCECPJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OBAKDBKFIBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_OBAKDBKFIBC_OFFSET))(this);
	}

	::System::String* DENNAGNEFCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_DENNAGNEFCO_OFFSET))(this);
	}

	::System::Int32 GIMFFMLLNKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_GIMFFMLLNKB_OFFSET))(this);
	}

	::System::Boolean GCMBGENEHMJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_GCMBGENEHMJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BOFFMNMAMLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_BOFFMNMAMLP_OFFSET))(this);
	}

	::System::Int32 DPDAOJGBMIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_DPDAOJGBMIF_OFFSET))(this);
	}

	/*
	::LDCDPCDLHNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDCDPCDLHNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BLIMPIHIAKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCDPCDLHNF_BLIMPIHIAKE_OFFSET))(this);
	}
};
