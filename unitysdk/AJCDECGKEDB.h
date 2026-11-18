#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define AJCDECGKEDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AJCDECGKEDB_GABCDPDNADN_OFFSET UNITYSDK_OFFSET(0x760EC0)
#define AJCDECGKEDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJCDECGKEDB_IJNIKAFPIFE_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define AJCDECGKEDB_JPPKCFOKIMF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AJCDECGKEDB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15723EB0)
#define AJCDECGKEDB_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AJCDECGKEDB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AJCDECGKEDB_TypeDefinitionIndex = 15169;

struct alignas(4) AJCDECGKEDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDECGKEDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCDECGKEDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AJCDECGKEDB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 PBHJGJGHHLB, ::System::Int32 DLFFOBLKJLI, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AJCDECGKEDB(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AJCDECGKEDB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, PBHJGJGHHLB, DLFFOBLKJLI, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JPPKCFOKIMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDECGKEDB_JPPKCFOKIMF_OFFSET))(this);
	}

	/*
	::AJCDECGKEDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJCDECGKEDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCDECGKEDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GABCDPDNADN(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + AJCDECGKEDB_GABCDPDNADN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDECGKEDB_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 IJNIKAFPIFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDECGKEDB_IJNIKAFPIFE_OFFSET))(this);
	}
};
