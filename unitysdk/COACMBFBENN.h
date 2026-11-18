#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define COACMBFBENN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COACMBFBENN_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define COACMBFBENN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COACMBFBENN_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COACMBFBENN_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x754970)
#define COACMBFBENN_KGOONEJPHBD_OFFSET UNITYSDK_OFFSET(0x756720)
#define COACMBFBENN_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x758590)
#define COACMBFBENN_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x754D50)
#define COACMBFBENN_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define COACMBFBENN_MGNGGHCICHE_OFFSET UNITYSDK_OFFSET(0x77A420)
#define COACMBFBENN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17775710)
#define COACMBFBENN_PMMFLFCNMJB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define COACMBFBENN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COACMBFBENN_TypeDefinitionIndex = 15492;

struct alignas(4) COACMBFBENN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COACMBFBENN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + COACMBFBENN_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Int32 KGOONEJPHBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_KGOONEJPHBD_OFFSET))(this);
	}

	::System::String* PMMFLFCNMJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_PMMFLFCNMJB_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_HIHKBMCPIJH_OFFSET))(this);
	}

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_LPFHBOMNFPE_OFFSET))(this);
	}

	/*
	::COACMBFBENN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COACMBFBENN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COACMBFBENN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COACMBFBENN_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::COACMBFBENN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COACMBFBENN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COACMBFBENN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean MGNGGHCICHE(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + COACMBFBENN_MGNGGHCICHE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
