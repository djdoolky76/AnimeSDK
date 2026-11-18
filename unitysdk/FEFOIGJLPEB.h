#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FEFOIGJLPEB_ABBHOPCGMHA_OFFSET UNITYSDK_OFFSET(0x766C00)
#define FEFOIGJLPEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEFOIGJLPEB_DMBPEBMPGEH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FEFOIGJLPEB_EPKGOCGEDLD_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define FEFOIGJLPEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEFOIGJLPEB_GICAMFAEEIA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FEFOIGJLPEB_IDBOMLOFLON_OFFSET UNITYSDK_OFFSET(0x754920)
#define FEFOIGJLPEB_JALAFDDBDHK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FEFOIGJLPEB_JCNHHJIJPHD_OFFSET UNITYSDK_OFFSET(0x754970)
#define FEFOIGJLPEB_MHLEIGMLOLF_OFFSET UNITYSDK_OFFSET(0x754D50)
#define FEFOIGJLPEB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18B97EF0)
#define FEFOIGJLPEB_OBGPPEIODIC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FEFOIGJLPEB_PPOABMKKCBL_OFFSET UNITYSDK_OFFSET(0x754790)
#define FEFOIGJLPEB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEFOIGJLPEB_TypeDefinitionIndex = 16402;

struct alignas(4) FEFOIGJLPEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFOIGJLPEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean ABBHOPCGMHA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_ABBHOPCGMHA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DMBPEBMPGEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_DMBPEBMPGEH_OFFSET))(this);
	}

	::System::Int32 JCNHHJIJPHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_JCNHHJIJPHD_OFFSET))(this);
	}

	::System::Int32 JALAFDDBDHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_JALAFDDBDHK_OFFSET))(this);
	}

	/*
	::FEFOIGJLPEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEFOIGJLPEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IDBOMLOFLON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_IDBOMLOFLON_OFFSET))(this);
	}

	/*
	static ::FEFOIGJLPEB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FEFOIGJLPEB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OBGPPEIODIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_OBGPPEIODIC_OFFSET))(this);
	}

	::System::Int32 MHLEIGMLOLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_MHLEIGMLOLF_OFFSET))(this);
	}

	::System::Int32 PPOABMKKCBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_PPOABMKKCBL_OFFSET))(this);
	}

	::System::Int32 GICAMFAEEIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_GICAMFAEEIA_OFFSET))(this);
	}

	::System::Boolean EPKGOCGEDLD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FEFOIGJLPEB_EPKGOCGEDLD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
