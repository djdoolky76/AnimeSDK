#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BBEGNBOJLBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBDIJKPFGOF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JBDIJKPFGOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD640)
#define JBDIJKPFGOF_FIMPPCBDCNN_1_OFFSET UNITYSDK_OFFSET(0x1A5E8480)
#define JBDIJKPFGOF_FIMPPCBDCNN_OFFSET UNITYSDK_OFFSET(0x1A5E8410)
#define JBDIJKPFGOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBDIJKPFGOF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBDIJKPFGOF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD630)
#define JBDIJKPFGOF___INIT_OFFSET UNITYSDK_OFFSET(0x7FD610)

inline static constexpr unsigned int JBDIJKPFGOF_TypeDefinitionIndex = 11152;

struct alignas(8) JBDIJKPFGOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBDIJKPFGOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BBEGNBOJLBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBEGNBOJLBK&))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JBDIJKPFGOF FIMPPCBDCNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBDIJKPFGOF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_FIMPPCBDCNN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JBDIJKPFGOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBDIJKPFGOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JBDIJKPFGOF FIMPPCBDCNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBDIJKPFGOF EIFONLCJOPG)
	{
		return ((::JBDIJKPFGOF(*)(::FlatBuffers::ByteBuffer*, ::JBDIJKPFGOF))((::PBYTE)hIl2Cpp + JBDIJKPFGOF_FIMPPCBDCNN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
