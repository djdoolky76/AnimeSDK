#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHFOOCNCPLG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJPLJNPEKOD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJPLJNPEKOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A080)
#define MJPLJNPEKOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJPLJNPEKOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJPLJNPEKOD_HBPAPKEMNMB_1_OFFSET UNITYSDK_OFFSET(0x1BA9B880)
#define MJPLJNPEKOD_HBPAPKEMNMB_OFFSET UNITYSDK_OFFSET(0x1BA9B810)
#define MJPLJNPEKOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A070)
#define MJPLJNPEKOD___INIT_OFFSET UNITYSDK_OFFSET(0x81A050)

inline static constexpr unsigned int MJPLJNPEKOD_TypeDefinitionIndex = 14285;

struct alignas(8) MJPLJNPEKOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJPLJNPEKOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHFOOCNCPLG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHFOOCNCPLG&))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MJPLJNPEKOD HBPAPKEMNMB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJPLJNPEKOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_HBPAPKEMNMB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MJPLJNPEKOD HBPAPKEMNMB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJPLJNPEKOD EIFONLCJOPG)
	{
		return ((::MJPLJNPEKOD(*)(::FlatBuffers::ByteBuffer*, ::MJPLJNPEKOD))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_HBPAPKEMNMB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MJPLJNPEKOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJPLJNPEKOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPLJNPEKOD_GHKKNCCLPAN_OFFSET))(this);
	}
};
