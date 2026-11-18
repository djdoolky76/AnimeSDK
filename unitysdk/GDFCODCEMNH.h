#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NNOLNJIDLEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDFCODCEMNH_BBCEOGBLKND_1_OFFSET UNITYSDK_OFFSET(0x193286B0)
#define GDFCODCEMNH_BBCEOGBLKND_OFFSET UNITYSDK_OFFSET(0x19328510)
#define GDFCODCEMNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDFCODCEMNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE3E0)
#define GDFCODCEMNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDFCODCEMNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDFCODCEMNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE3D0)
#define GDFCODCEMNH___INIT_OFFSET UNITYSDK_OFFSET(0x7DE3B0)

inline static constexpr unsigned int GDFCODCEMNH_TypeDefinitionIndex = 16433;

struct alignas(8) GDFCODCEMNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFCODCEMNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDFCODCEMNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GDFCODCEMNH BBCEOGBLKND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDFCODCEMNH EIFONLCJOPG)
	{
		return ((::GDFCODCEMNH(*)(::FlatBuffers::ByteBuffer*, ::GDFCODCEMNH))((::PBYTE)hIl2Cpp + GDFCODCEMNH_BBCEOGBLKND_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFCODCEMNH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFCODCEMNH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GDFCODCEMNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDFCODCEMNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDFCODCEMNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NNOLNJIDLEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNOLNJIDLEJ&))((::PBYTE)hIl2Cpp + GDFCODCEMNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GDFCODCEMNH BBCEOGBLKND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDFCODCEMNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDFCODCEMNH_BBCEOGBLKND_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
