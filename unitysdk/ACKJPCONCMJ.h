#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ACKJPCONCMJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ACKJPCONCMJ_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x754920)
#define ACKJPCONCMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ACKJPCONCMJ_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ACKJPCONCMJ_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x758780)
#define ACKJPCONCMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACKJPCONCMJ_GFIPPFMGAPC_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define ACKJPCONCMJ_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ACKJPCONCMJ_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ACKJPCONCMJ_MHBPIBHBLGK_OFFSET UNITYSDK_OFFSET(0x756780)
#define ACKJPCONCMJ_NPEDOGCFCOJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ACKJPCONCMJ_OCICODHEAON_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ACKJPCONCMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ACKJPCONCMJ_TypeDefinitionIndex = 9839;

struct alignas(4) ACKJPCONCMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACKJPCONCMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LDIENHMALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_LDIENHMALPL_OFFSET))(this);
	}

	::System::Int32 NPEDOGCFCOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_NPEDOGCFCOJ_OFFSET))(this);
	}

	::System::Int32 FCICGEALCFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_FCICGEALCFA_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 GFIPPFMGAPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_GFIPPFMGAPC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* OCICODHEAON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_OCICODHEAON_OFFSET))(this);
	}

	/*
	::ACKJPCONCMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACKJPCONCMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::Boolean MHBPIBHBLGK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ACKJPCONCMJ_MHBPIBHBLGK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
