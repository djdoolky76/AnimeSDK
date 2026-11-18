#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JAKBAFMPLCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JAKBAFMPLCL_DICIAJKJGFD_OFFSET UNITYSDK_OFFSET(0x7A87D0)
#define JAKBAFMPLCL_DKDMJAJFKHO_OFFSET UNITYSDK_OFFSET(0x754C20)
#define JAKBAFMPLCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JAKBAFMPLCL_NDMCIIGGBEJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JAKBAFMPLCL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17485EC0)
#define JAKBAFMPLCL_PCIBFHACNPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JAKBAFMPLCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JAKBAFMPLCL_TypeDefinitionIndex = 15857;

struct alignas(4) JAKBAFMPLCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAKBAFMPLCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JAKBAFMPLCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAKBAFMPLCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NDMCIIGGBEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_NDMCIIGGBEJ_OFFSET))(this);
	}

	::System::Int32 DKDMJAJFKHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_DKDMJAJFKHO_OFFSET))(this);
	}

	::System::Boolean DICIAJKJGFD(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_DICIAJKJGFD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JAKBAFMPLCL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JAKBAFMPLCL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PCIBFHACNPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKBAFMPLCL_PCIBFHACNPN_OFFSET))(this);
	}
};
