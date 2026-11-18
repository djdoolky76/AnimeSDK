#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/LKLELNMAPDE.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PGFEHMPHNBK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PGFEHMPHNBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PGFEHMPHNBK_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PGFEHMPHNBK_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PGFEHMPHNBK_DJDOJFCNCLI_OFFSET UNITYSDK_OFFSET(0x756360)
#define PGFEHMPHNBK_DPOBBENDLOH_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define PGFEHMPHNBK_EJAPIIIMDMK_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define PGFEHMPHNBK_FCADOBCLEIO_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define PGFEHMPHNBK_FCOKGCAFNFP_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define PGFEHMPHNBK_FNCKEEDJDEO_OFFSET UNITYSDK_OFFSET(0x757290)
#define PGFEHMPHNBK_FOFPACLNHCM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define PGFEHMPHNBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGFEHMPHNBK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define PGFEHMPHNBK_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PGFEHMPHNBK_LJHNEFLEOPK_OFFSET UNITYSDK_OFFSET(0x755320)
#define PGFEHMPHNBK_LLFLGNKNACA_OFFSET UNITYSDK_OFFSET(0x755190)
#define PGFEHMPHNBK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19140460)
#define PGFEHMPHNBK_ODMANGFIOMP_OFFSET UNITYSDK_OFFSET(0x756780)
#define PGFEHMPHNBK_OMEENAIGOKL_OFFSET UNITYSDK_OFFSET(0x755890)
#define PGFEHMPHNBK_PIPILGNEHKC_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PGFEHMPHNBK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PGFEHMPHNBK_TypeDefinitionIndex = 13773;

struct alignas(4) PGFEHMPHNBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGFEHMPHNBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PGFEHMPHNBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGFEHMPHNBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FNCKEEDJDEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_FNCKEEDJDEO_OFFSET))(this);
	}

	::System::Boolean DJDOJFCNCLI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_DJDOJFCNCLI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::LKLELNMAPDE LLFLGNKNACA()
	{
		return ((::LKLELNMAPDE(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_LLFLGNKNACA_OFFSET))(this);
	}

	::System::Boolean ODMANGFIOMP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_ODMANGFIOMP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EJAPIIIMDMK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_EJAPIIIMDMK_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PIPILGNEHKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_PIPILGNEHKC_OFFSET))(this);
	}

	::System::Int32 FCOKGCAFNFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_FCOKGCAFNFP_OFFSET))(this);
	}

	::System::Int32 OMEENAIGOKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_OMEENAIGOKL_OFFSET))(this);
	}

	::System::String* FOFPACLNHCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_FOFPACLNHCM_OFFSET))(this);
	}

	/*
	static ::PGFEHMPHNBK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PGFEHMPHNBK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 DPOBBENDLOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_DPOBBENDLOH_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 FCADOBCLEIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_FCADOBCLEIO_OFFSET))(this);
	}

	::System::Int32 LJHNEFLEOPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFEHMPHNBK_LJHNEFLEOPK_OFFSET))(this);
	}
};
