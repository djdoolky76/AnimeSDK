#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MLLEMLENJAO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MLLEMLENJAO_BFMDEIFMEFM_OFFSET UNITYSDK_OFFSET(0x754970)
#define MLLEMLENJAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MLLEMLENJAO_BODIPAAMBBJ_OFFSET UNITYSDK_OFFSET(0x788D40)
#define MLLEMLENJAO_EOAPGMILKNM_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define MLLEMLENJAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLLEMLENJAO_MPNOMNHBINN_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MLLEMLENJAO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0B9630)
#define MLLEMLENJAO_PCLCOIPMHEE_OFFSET UNITYSDK_OFFSET(0x766650)
#define MLLEMLENJAO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MLLEMLENJAO_TypeDefinitionIndex = 10884;

struct alignas(4) MLLEMLENJAO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLLEMLENJAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MPNOMNHBINN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_MPNOMNHBINN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_ACOEONABOJL_OFFSET))(this);
	}

	::System::UInt64 PCLCOIPMHEE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_PCLCOIPMHEE_OFFSET))(this);
	}

	::System::UInt64 EOAPGMILKNM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_EOAPGMILKNM_OFFSET))(this);
	}

	::System::Int32 BFMDEIFMEFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_BFMDEIFMEFM_OFFSET))(this);
	}

	::System::UInt64 BODIPAAMBBJ()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLEMLENJAO_BODIPAAMBBJ_OFFSET))(this);
	}

	/*
	::MLLEMLENJAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLLEMLENJAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLLEMLENJAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MLLEMLENJAO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MLLEMLENJAO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MLLEMLENJAO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
