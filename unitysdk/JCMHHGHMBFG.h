#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JCMHHGHMBFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCMHHGHMBFG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JCMHHGHMBFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCMHHGHMBFG_HHGIIPANAPB_OFFSET UNITYSDK_OFFSET(0x779440)
#define JCMHHGHMBFG_JOENLMINFCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCMHHGHMBFG_LGPBCANCFFC_OFFSET UNITYSDK_OFFSET(0x758780)
#define JCMHHGHMBFG_LMEPNMAMIAD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JCMHHGHMBFG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6308B0)
#define JCMHHGHMBFG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCMHHGHMBFG_TypeDefinitionIndex = 17361;

struct alignas(4) JCMHHGHMBFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCMHHGHMBFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_BKNKCFDBLGH_OFFSET))(this);
	}

	/*
	::JCMHHGHMBFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCMHHGHMBFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LGPBCANCFFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_LGPBCANCFFC_OFFSET))(this);
	}

	::System::String* LMEPNMAMIAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_LMEPNMAMIAD_OFFSET))(this);
	}

	/*
	static ::JCMHHGHMBFG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCMHHGHMBFG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JOENLMINFCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_JOENLMINFCF_OFFSET))(this);
	}

	::System::Boolean HHGIIPANAPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHHGHMBFG_HHGIIPANAPB_OFFSET))(this);
	}
};
