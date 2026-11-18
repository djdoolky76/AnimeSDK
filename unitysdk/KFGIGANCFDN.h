#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KFGIGANCFDN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KFGIGANCFDN_AHHFJGMECHO_OFFSET UNITYSDK_OFFSET(0x757330)
#define KFGIGANCFDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFGIGANCFDN_CHMKNBJBJJD_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KFGIGANCFDN_DGJAFCLNJCN_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define KFGIGANCFDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFGIGANCFDN_ILGMIIIILON_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KFGIGANCFDN_IOAGBNMODPF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KFGIGANCFDN_JDFOEJNBCJN_OFFSET UNITYSDK_OFFSET(0x757760)
#define KFGIGANCFDN_JOJNCDLNJNM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KFGIGANCFDN_KNACJDJDHLO_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KFGIGANCFDN_LMLJEAFNNKL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KFGIGANCFDN_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x757690)
#define KFGIGANCFDN_MNFEFHKIOMH_OFFSET UNITYSDK_OFFSET(0x757E20)
#define KFGIGANCFDN_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x758780)
#define KFGIGANCFDN_NMNBMNIFCIJ_OFFSET UNITYSDK_OFFSET(0x755190)
#define KFGIGANCFDN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152FF7D0)
#define KFGIGANCFDN_OIKCBJKMNAF_OFFSET UNITYSDK_OFFSET(0x757B50)
#define KFGIGANCFDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFGIGANCFDN_TypeDefinitionIndex = 9862;

struct alignas(4) KFGIGANCFDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFGIGANCFDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LMLJEAFNNKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_LMLJEAFNNKL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NMNBMNIFCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_NMNBMNIFCIJ_OFFSET))(this);
	}

	::System::String* JDFOEJNBCJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_JDFOEJNBCJN_OFFSET))(this);
	}

	::System::String* MNFEFHKIOMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_MNFEFHKIOMH_OFFSET))(this);
	}

	::System::String* CHMKNBJBJJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_CHMKNBJBJJD_OFFSET))(this);
	}

	/*
	::KFGIGANCFDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFGIGANCFDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFGIGANCFDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IOAGBNMODPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_IOAGBNMODPF_OFFSET))(this);
	}

	::System::Int32 AHHFJGMECHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_AHHFJGMECHO_OFFSET))(this);
	}

	::System::Boolean OIKCBJKMNAF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KFGIGANCFDN_OIKCBJKMNAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KFGIGANCFDN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFGIGANCFDN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFGIGANCFDN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JOJNCDLNJNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_JOJNCDLNJNM_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_MLMPIEEGOGH_OFFSET))(this);
	}

	::System::Int32 KNACJDJDHLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_KNACJDJDHLO_OFFSET))(this);
	}

	::System::Boolean DGJAFCLNJCN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KFGIGANCFDN_DGJAFCLNJCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_NLBOALNBODH_OFFSET))(this);
	}

	::System::Int32 ILGMIIIILON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGIGANCFDN_ILGMIIIILON_OFFSET))(this);
	}
};
