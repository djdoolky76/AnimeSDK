#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define INKIEKCGFDJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define INKIEKCGFDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define INKIEKCGFDJ_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define INKIEKCGFDJ_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x754970)
#define INKIEKCGFDJ_EMOACCCKGNN_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define INKIEKCGFDJ_ENDNEADDNLE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define INKIEKCGFDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INKIEKCGFDJ_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define INKIEKCGFDJ_KBPKNADLJPM_OFFSET UNITYSDK_OFFSET(0x756440)
#define INKIEKCGFDJ_KPDGMKDDMAM_OFFSET UNITYSDK_OFFSET(0x758780)
#define INKIEKCGFDJ_LLMLCKGAGNE_OFFSET UNITYSDK_OFFSET(0x761710)
#define INKIEKCGFDJ_MKPGFMOBDGD_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define INKIEKCGFDJ_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754920)
#define INKIEKCGFDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int INKIEKCGFDJ_TypeDefinitionIndex = 14774;

struct alignas(4) INKIEKCGFDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INKIEKCGFDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EMOACCCKGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_EMOACCCKGNN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_NKCNGLADFNA_OFFSET))(this);
	}

	::System::String* MKPGFMOBDGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_MKPGFMOBDGD_OFFSET))(this);
	}

	::System::String* LLMLCKGAGNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_LLMLCKGAGNE_OFFSET))(this);
	}

	::System::Int32 KBPKNADLJPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_KBPKNADLJPM_OFFSET))(this);
	}

	::System::Int32 KPDGMKDDMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_KPDGMKDDMAM_OFFSET))(this);
	}

	::System::String* ENDNEADDNLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_ENDNEADDNLE_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::INKIEKCGFDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INKIEKCGFDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INKIEKCGFDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
