#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EAFKALGKOLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EAFKALGKOLK_COEPINJDIHJ_OFFSET UNITYSDK_OFFSET(0x754C20)
#define EAFKALGKOLK_DNHGFAGAEHL_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EAFKALGKOLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EAFKALGKOLK_LOFIGEFAJAG_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define EAFKALGKOLK_MMLGNOKJMJK_OFFSET UNITYSDK_OFFSET(0x755790)
#define EAFKALGKOLK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A55B250)
#define EAFKALGKOLK_PECIKPBEICH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EAFKALGKOLK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EAFKALGKOLK_TypeDefinitionIndex = 11143;

struct alignas(4) EAFKALGKOLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKALGKOLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAFKALGKOLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EAFKALGKOLK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EAFKALGKOLK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EAFKALGKOLK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MMLGNOKJMJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKALGKOLK_MMLGNOKJMJK_OFFSET))(this);
	}

	::System::Boolean LOFIGEFAJAG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EAFKALGKOLK_LOFIGEFAJAG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PECIKPBEICH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKALGKOLK_PECIKPBEICH_OFFSET))(this);
	}

	/*
	::EAFKALGKOLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAFKALGKOLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAFKALGKOLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 COEPINJDIHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKALGKOLK_COEPINJDIHJ_OFFSET))(this);
	}

	::System::Boolean DNHGFAGAEHL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EAFKALGKOLK_DNHGFAGAEHL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
