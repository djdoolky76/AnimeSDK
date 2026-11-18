#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AEPEOOIOMKL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AEPEOOIOMKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AEPEOOIOMKL_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AEPEOOIOMKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEPEOOIOMKL_MMLIHCLFNAK_OFFSET UNITYSDK_OFFSET(0x754970)
#define AEPEOOIOMKL_NNNDPKGFFFM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AEPEOOIOMKL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A56C160)
#define AEPEOOIOMKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AEPEOOIOMKL_TypeDefinitionIndex = 16199;

struct alignas(4) AEPEOOIOMKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEPEOOIOMKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	static ::AEPEOOIOMKL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AEPEOOIOMKL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::AEPEOOIOMKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEPEOOIOMKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NNNDPKGFFFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_NNNDPKGFFFM_OFFSET))(this);
	}

	::System::Int32 MMLIHCLFNAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPEOOIOMKL_MMLIHCLFNAK_OFFSET))(this);
	}
};
