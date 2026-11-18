#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IONKMMOCFMM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IONKMMOCFMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IONKMMOCFMM_DDPFJMKDGJB_OFFSET UNITYSDK_OFFSET(0x761240)
#define IONKMMOCFMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IONKMMOCFMM_IBCBFMCKECN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IONKMMOCFMM_IBLJFEMFEHM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IONKMMOCFMM_JMIPCPLGLCA_OFFSET UNITYSDK_OFFSET(0x7D4320)
#define IONKMMOCFMM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B62D170)
#define IONKMMOCFMM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IONKMMOCFMM_TypeDefinitionIndex = 15830;

struct alignas(4) IONKMMOCFMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONKMMOCFMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IONKMMOCFMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DDPFJMKDGJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONKMMOCFMM_DDPFJMKDGJB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONKMMOCFMM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IBCBFMCKECN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONKMMOCFMM_IBCBFMCKECN_OFFSET))(this);
	}

	/*
	::IONKMMOCFMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IONKMMOCFMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IONKMMOCFMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IBLJFEMFEHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONKMMOCFMM_IBLJFEMFEHM_OFFSET))(this);
	}

	/*
	static ::IONKMMOCFMM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IONKMMOCFMM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IONKMMOCFMM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean JMIPCPLGLCA(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + IONKMMOCFMM_JMIPCPLGLCA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
