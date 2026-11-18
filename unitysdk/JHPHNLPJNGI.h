#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHPHNLPJNGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHPHNLPJNGI_DALBMMIGLOD_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define JHPHNLPJNGI_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JHPHNLPJNGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHPHNLPJNGI_HAICFECAGPF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JHPHNLPJNGI_IONJGOPJOAL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHPHNLPJNGI_KENDDNBOHAD_OFFSET UNITYSDK_OFFSET(0x754C20)
#define JHPHNLPJNGI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B897500)
#define JHPHNLPJNGI_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JHPHNLPJNGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHPHNLPJNGI_TypeDefinitionIndex = 10099;

struct alignas(4) JHPHNLPJNGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHPHNLPJNGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HAICFECAGPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_HAICFECAGPF_OFFSET))(this);
	}

	::System::Int32 KENDDNBOHAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_KENDDNBOHAD_OFFSET))(this);
	}

	::System::Int32 IONJGOPJOAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_IONJGOPJOAL_OFFSET))(this);
	}

	/*
	static ::JHPHNLPJNGI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHPHNLPJNGI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean DALBMMIGLOD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_DALBMMIGLOD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_EPKHFGDILDG_OFFSET))(this);
	}

	/*
	::JHPHNLPJNGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHPHNLPJNGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHNLPJNGI_PLNBBDEBIII_OFFSET))(this);
	}
};
