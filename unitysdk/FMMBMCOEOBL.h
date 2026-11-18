#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define FMMBMCOEOBL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMMBMCOEOBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMMBMCOEOBL_BPKMDCHJEFF_OFFSET UNITYSDK_OFFSET(0x7DE0E0)
#define FMMBMCOEOBL_DHEEKBEGNAJ_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define FMMBMCOEOBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMMBMCOEOBL_HEKPBIBDDKG_OFFSET UNITYSDK_OFFSET(0x758780)
#define FMMBMCOEOBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19322D20)
#define FMMBMCOEOBL_OFDMDENBHEM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FMMBMCOEOBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMMBMCOEOBL_TypeDefinitionIndex = 16689;

struct alignas(4) FMMBMCOEOBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMBMCOEOBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BPKMDCHJEFF(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_BPKMDCHJEFF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HEKPBIBDDKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_HEKPBIBDDKG_OFFSET))(this);
	}

	::System::Int32 DHEEKBEGNAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_DHEEKBEGNAJ_OFFSET))(this);
	}

	::System::Int32 OFDMDENBHEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_OFDMDENBHEM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FMMBMCOEOBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMMBMCOEOBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FMMBMCOEOBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FMMBMCOEOBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FMMBMCOEOBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
