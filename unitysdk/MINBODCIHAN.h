#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MINBODCIHAN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MINBODCIHAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MINBODCIHAN_BIGNJNMPEBE_OFFSET UNITYSDK_OFFSET(0x762D20)
#define MINBODCIHAN_DDHEAHFDGOJ_OFFSET UNITYSDK_OFFSET(0x756440)
#define MINBODCIHAN_DPOOGNKFDFD_OFFSET UNITYSDK_OFFSET(0x7606B0)
#define MINBODCIHAN_FCOFHJHFIGA_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define MINBODCIHAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MINBODCIHAN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MINBODCIHAN_JCEOCLLHFKE_OFFSET UNITYSDK_OFFSET(0x760F60)
#define MINBODCIHAN_KMHJBEEJCJL_OFFSET UNITYSDK_OFFSET(0x762A90)
#define MINBODCIHAN_NFDDBLOMGJP_OFFSET UNITYSDK_OFFSET(0x758780)
#define MINBODCIHAN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C089E90)
#define MINBODCIHAN_ODOMILLKPGF_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define MINBODCIHAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MINBODCIHAN_TypeDefinitionIndex = 12386;

struct alignas(4) MINBODCIHAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MINBODCIHAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFDDBLOMGJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_NFDDBLOMGJP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* DPOOGNKFDFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_DPOOGNKFDFD_OFFSET))(this);
	}

	::System::Int32 ODOMILLKPGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_ODOMILLKPGF_OFFSET))(this);
	}

	::System::Boolean JCEOCLLHFKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_JCEOCLLHFKE_OFFSET))(this);
	}

	/*
	static ::MINBODCIHAN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MINBODCIHAN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MINBODCIHAN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BIGNJNMPEBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_BIGNJNMPEBE_OFFSET))(this);
	}

	::System::String* KMHJBEEJCJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_KMHJBEEJCJL_OFFSET))(this);
	}

	::System::Int32 DDHEAHFDGOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_DDHEAHFDGOJ_OFFSET))(this);
	}

	/*
	::MINBODCIHAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MINBODCIHAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MINBODCIHAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINBODCIHAN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean FCOFHJHFIGA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MINBODCIHAN_FCOFHJHFIGA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
