#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCKGKHKDBLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCMDGPPMADJ_AJNHHKKGLFM_1_OFFSET UNITYSDK_OFFSET(0x1A54DC20)
#define DCMDGPPMADJ_AJNHHKKGLFM_OFFSET UNITYSDK_OFFSET(0x1A54DBB0)
#define DCMDGPPMADJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DCMDGPPMADJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9FB0)
#define DCMDGPPMADJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCMDGPPMADJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DCMDGPPMADJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9FF0)
#define DCMDGPPMADJ___INIT_OFFSET UNITYSDK_OFFSET(0x7F9F90)

inline static constexpr unsigned int DCMDGPPMADJ_TypeDefinitionIndex = 11251;

struct alignas(8) DCMDGPPMADJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCMDGPPMADJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DCMDGPPMADJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCMDGPPMADJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DCMDGPPMADJ AJNHHKKGLFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCMDGPPMADJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_AJNHHKKGLFM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DCMDGPPMADJ AJNHHKKGLFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DCMDGPPMADJ EIFONLCJOPG)
	{
		return ((::DCMDGPPMADJ(*)(::FlatBuffers::ByteBuffer*, ::DCMDGPPMADJ))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_AJNHHKKGLFM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCKGKHKDBLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCKGKHKDBLJ&))((::PBYTE)hIl2Cpp + DCMDGPPMADJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
