#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PLHJJNEGDDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PLHJJNEGDDJ_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x754970)
#define PLHJJNEGDDJ_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PLHJJNEGDDJ_GCIPHBIEFIE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PLHJJNEGDDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLHJJNEGDDJ_GKEGICINJIK_OFFSET UNITYSDK_OFFSET(0x755890)
#define PLHJJNEGDDJ_GPHPKFDJOIO_OFFSET UNITYSDK_OFFSET(0x756780)
#define PLHJJNEGDDJ_HOOPEJHNPBD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PLHJJNEGDDJ_IPFNFBCPHDF_OFFSET UNITYSDK_OFFSET(0x757190)
#define PLHJJNEGDDJ_JIMBCOANCEH_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define PLHJJNEGDDJ_NKAGGHKKGFI_OFFSET UNITYSDK_OFFSET(0x757290)
#define PLHJJNEGDDJ_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PLHJJNEGDDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD9BA30)
#define PLHJJNEGDDJ_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PLHJJNEGDDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PLHJJNEGDDJ_TypeDefinitionIndex = 13013;

struct alignas(4) PLHJJNEGDDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HOOPEJHNPBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_HOOPEJHNPBD_OFFSET))(this);
	}

	::System::String* IPFNFBCPHDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_IPFNFBCPHDF_OFFSET))(this);
	}

	::System::String* GCIPHBIEFIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_GCIPHBIEFIE_OFFSET))(this);
	}

	::System::Int32 GKEGICINJIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_GKEGICINJIK_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* NKAGGHKKGFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_NKAGGHKKGFI_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_CJBMHNCHNHO_OFFSET))(this);
	}

	/*
	static ::PLHJJNEGDDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PLHJJNEGDDJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Boolean GPHPKFDJOIO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_GPHPKFDJOIO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PLHJJNEGDDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLHJJNEGDDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JIMBCOANCEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_JIMBCOANCEH_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHJJNEGDDJ_NKCNGLADFNA_OFFSET))(this);
	}
};
