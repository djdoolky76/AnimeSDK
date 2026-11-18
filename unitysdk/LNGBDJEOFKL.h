#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LNGBDJEOFKL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LNGBDJEOFKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LNGBDJEOFKL_DEGIAPANKLK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LNGBDJEOFKL_DOBNMEIIMGO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LNGBDJEOFKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNGBDJEOFKL_GJMFNIGGECE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LNGBDJEOFKL_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x754920)
#define LNGBDJEOFKL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19570490)
#define LNGBDJEOFKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LNGBDJEOFKL_TypeDefinitionIndex = 14184;

struct alignas(4) LNGBDJEOFKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNGBDJEOFKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::LNGBDJEOFKL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LNGBDJEOFKL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DOBNMEIIMGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_DOBNMEIIMGO_OFFSET))(this);
	}

	::System::String* DEGIAPANKLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_DEGIAPANKLK_OFFSET))(this);
	}

	::System::String* GJMFNIGGECE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_GJMFNIGGECE_OFFSET))(this);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_HJFCIELMJPA_OFFSET))(this);
	}

	/*
	::LNGBDJEOFKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNGBDJEOFKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNGBDJEOFKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
