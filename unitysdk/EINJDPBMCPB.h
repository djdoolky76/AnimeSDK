#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HMCAFIMFIOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EINJDPBMCPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EINJDPBMCPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EAC50)
#define EINJDPBMCPB_FJCMLHEOPOI_1_OFFSET UNITYSDK_OFFSET(0x19AE5D90)
#define EINJDPBMCPB_FJCMLHEOPOI_OFFSET UNITYSDK_OFFSET(0x19AE5D20)
#define EINJDPBMCPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EINJDPBMCPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EINJDPBMCPB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EAC90)
#define EINJDPBMCPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EACA0)
#define EINJDPBMCPB___INIT_OFFSET UNITYSDK_OFFSET(0x7EAC30)

inline static constexpr unsigned int EINJDPBMCPB_TypeDefinitionIndex = 9503;

struct alignas(8) EINJDPBMCPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINJDPBMCPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EINJDPBMCPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EINJDPBMCPB FJCMLHEOPOI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EINJDPBMCPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EINJDPBMCPB_FJCMLHEOPOI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EINJDPBMCPB FJCMLHEOPOI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EINJDPBMCPB EIFONLCJOPG)
	{
		return ((::EINJDPBMCPB(*)(::FlatBuffers::ByteBuffer*, ::EINJDPBMCPB))((::PBYTE)hIl2Cpp + EINJDPBMCPB_FJCMLHEOPOI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EINJDPBMCPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EINJDPBMCPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EINJDPBMCPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HMCAFIMFIOO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HMCAFIMFIOO&, ::System::Int32&))((::PBYTE)hIl2Cpp + EINJDPBMCPB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINJDPBMCPB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EINJDPBMCPB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HMCAFIMFIOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HMCAFIMFIOO&))((::PBYTE)hIl2Cpp + EINJDPBMCPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
