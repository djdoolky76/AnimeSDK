#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BNHOOADOOGL_BDHLJAICCAI_OFFSET UNITYSDK_OFFSET(0x754970)
#define BNHOOADOOGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BNHOOADOOGL_BPJDJMLKCDC_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define BNHOOADOOGL_EFDJNDNPPOB_OFFSET UNITYSDK_OFFSET(0x754920)
#define BNHOOADOOGL_EILOAHBODGP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BNHOOADOOGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNHOOADOOGL_INJFLBACOIH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define BNHOOADOOGL_JBPHLGDBLEI_OFFSET UNITYSDK_OFFSET(0x757190)
#define BNHOOADOOGL_JMNDJKMKENA_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define BNHOOADOOGL_KELEFBCAOKJ_OFFSET UNITYSDK_OFFSET(0x788CF0)
#define BNHOOADOOGL_MPJEPPIGDGA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BNHOOADOOGL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F22D30)
#define BNHOOADOOGL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BNHOOADOOGL_TypeDefinitionIndex = 14469;

struct alignas(4) BNHOOADOOGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNHOOADOOGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EILOAHBODGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_EILOAHBODGP_OFFSET))(this);
	}

	::System::String* MPJEPPIGDGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_MPJEPPIGDGA_OFFSET))(this);
	}

	::System::Int32 BDHLJAICCAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_BDHLJAICCAI_OFFSET))(this);
	}

	::System::String* INJFLBACOIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_INJFLBACOIH_OFFSET))(this);
	}

	::System::UInt64 JMNDJKMKENA()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_JMNDJKMKENA_OFFSET))(this);
	}

	/*
	static ::BNHOOADOOGL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BNHOOADOOGL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BNHOOADOOGL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BPJDJMLKCDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_BPJDJMLKCDC_OFFSET))(this);
	}

	/*
	::BNHOOADOOGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNHOOADOOGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNHOOADOOGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JBPHLGDBLEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_JBPHLGDBLEI_OFFSET))(this);
	}

	::System::Int32 EFDJNDNPPOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_EFDJNDNPPOB_OFFSET))(this);
	}

	::System::UInt64 KELEFBCAOKJ()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHOOADOOGL_KELEFBCAOKJ_OFFSET))(this);
	}
};
