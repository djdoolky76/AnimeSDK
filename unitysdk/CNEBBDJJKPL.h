#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CNEBBDJJKPL_AEHDBMGDKGB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CNEBBDJJKPL_BFPNEMIFNLN_OFFSET UNITYSDK_OFFSET(0x756570)
#define CNEBBDJJKPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CNEBBDJJKPL_BHINBGBJJDG_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define CNEBBDJJKPL_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CNEBBDJJKPL_DFJDPIPGCDA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CNEBBDJJKPL_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define CNEBBDJJKPL_EOKLDCLPGNE_OFFSET UNITYSDK_OFFSET(0x756780)
#define CNEBBDJJKPL_GBNAKNHEOAE_OFFSET UNITYSDK_OFFSET(0x756220)
#define CNEBBDJJKPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNEBBDJJKPL_JHKGLJCDBJE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CNEBBDJJKPL_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CNEBBDJJKPL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15794AB0)
#define CNEBBDJJKPL_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CNEBBDJJKPL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CNEBBDJJKPL_TypeDefinitionIndex = 17025;

struct alignas(4) CNEBBDJJKPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNEBBDJJKPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JHKGLJCDBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_JHKGLJCDBJE_OFFSET))(this);
	}

	::System::Boolean BFPNEMIFNLN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_BFPNEMIFNLN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 GBNAKNHEOAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_GBNAKNHEOAE_OFFSET))(this);
	}

	/*
	static ::CNEBBDJJKPL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CNEBBDJJKPL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean EOKLDCLPGNE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_EOKLDCLPGNE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_BLFKNELJFFB_OFFSET))(this);
	}

	::System::String* AEHDBMGDKGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_AEHDBMGDKGB_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* DHPNLFNDKJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_DHPNLFNDKJE_OFFSET))(this);
	}

	::System::Int32 BHINBGBJJDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_BHINBGBJJDG_OFFSET))(this);
	}

	::System::String* DFJDPIPGCDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_DFJDPIPGCDA_OFFSET))(this);
	}

	/*
	::CNEBBDJJKPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNEBBDJJKPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNEBBDJJKPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
