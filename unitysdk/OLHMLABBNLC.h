#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OLHMLABBNLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OLHMLABBNLC_CJONCKILOJC_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define OLHMLABBNLC_DDJKLLPJNPG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OLHMLABBNLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLHMLABBNLC_IAKMBNHENAH_OFFSET UNITYSDK_OFFSET(0x758200)
#define OLHMLABBNLC_IMAIMGLFBMC_OFFSET UNITYSDK_OFFSET(0x755890)
#define OLHMLABBNLC_MHOFMBEECDF_OFFSET UNITYSDK_OFFSET(0x754970)
#define OLHMLABBNLC_MMLKHIDBJPM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OLHMLABBNLC_NBEDHLBICEO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OLHMLABBNLC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB36180)
#define OLHMLABBNLC_OLDNCBEBEOJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define OLHMLABBNLC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OLHMLABBNLC_TypeDefinitionIndex = 12996;

struct alignas(4) OLHMLABBNLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLHMLABBNLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OLHMLABBNLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLHMLABBNLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLHMLABBNLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OLHMLABBNLC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OLHMLABBNLC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OLHMLABBNLC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NBEDHLBICEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_NBEDHLBICEO_OFFSET))(this);
	}

	::System::Int32 MMLKHIDBJPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_MMLKHIDBJPM_OFFSET))(this);
	}

	::System::Boolean IAKMBNHENAH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OLHMLABBNLC_IAKMBNHENAH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OLDNCBEBEOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_OLDNCBEBEOJ_OFFSET))(this);
	}

	::System::Int32 DDJKLLPJNPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_DDJKLLPJNPG_OFFSET))(this);
	}

	::System::Int32 MHOFMBEECDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_MHOFMBEECDF_OFFSET))(this);
	}

	::System::Int32 CJONCKILOJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_CJONCKILOJC_OFFSET))(this);
	}

	::System::Int32 IMAIMGLFBMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHMLABBNLC_IMAIMGLFBMC_OFFSET))(this);
	}
};
