#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NKOKPBANAIG_BBKGGJDNOFI_OFFSET UNITYSDK_OFFSET(0x754970)
#define NKOKPBANAIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NKOKPBANAIG_EPBDFBNKOCD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NKOKPBANAIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKOKPBANAIG_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NKOKPBANAIG_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NKOKPBANAIG_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754920)
#define NKOKPBANAIG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAA7E80)
#define NKOKPBANAIG_OGAHDLMOLEG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NKOKPBANAIG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NKOKPBANAIG_TypeDefinitionIndex = 15274;

struct alignas(4) NKOKPBANAIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKOKPBANAIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_MLKFNKGDBPN_OFFSET))(this);
	}

	/*
	::NKOKPBANAIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKOKPBANAIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKOKPBANAIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EPBDFBNKOCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_EPBDFBNKOCD_OFFSET))(this);
	}

	::System::String* OGAHDLMOLEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_OGAHDLMOLEG_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 BBKGGJDNOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOKPBANAIG_BBKGGJDNOFI_OFFSET))(this);
	}

	/*
	static ::NKOKPBANAIG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NKOKPBANAIG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NKOKPBANAIG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
