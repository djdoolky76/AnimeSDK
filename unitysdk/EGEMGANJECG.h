#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EGEMGANJECG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGEMGANJECG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGEMGANJECG_BMLPAEEFIEH_OFFSET UNITYSDK_OFFSET(0x763D90)
#define EGEMGANJECG_COCBPLOBGDB_OFFSET UNITYSDK_OFFSET(0x756800)
#define EGEMGANJECG_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EGEMGANJECG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGEMGANJECG_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x755C70)
#define EGEMGANJECG_IAOCJBDINDC_OFFSET UNITYSDK_OFFSET(0x7D4550)
#define EGEMGANJECG_MLMNFNPAJFC_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define EGEMGANJECG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADD1C90)
#define EGEMGANJECG_OCHMOAIHKAD_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define EGEMGANJECG_OPLOAFHGFHH_OFFSET UNITYSDK_OFFSET(0x757A30)
#define EGEMGANJECG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGEMGANJECG_TypeDefinitionIndex = 16655;

struct alignas(4) EGEMGANJECG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGEMGANJECG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OPLOAFHGFHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_OPLOAFHGFHH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean BMLPAEEFIEH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EGEMGANJECG_BMLPAEEFIEH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EGEMGANJECG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGEMGANJECG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGEMGANJECG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 COCBPLOBGDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_COCBPLOBGDB_OFFSET))(this);
	}

	::System::Boolean IAOCJBDINDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_IAOCJBDINDC_OFFSET))(this);
	}

	::System::Boolean OCHMOAIHKAD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EGEMGANJECG_OCHMOAIHKAD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_EHEDNGGDAKF_OFFSET))(this);
	}

	/*
	static ::EGEMGANJECG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EGEMGANJECG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EGEMGANJECG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MLMNFNPAJFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_MLMNFNPAJFC_OFFSET))(this);
	}

	::System::Int32 HMPFPCCBKMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEMGANJECG_HMPFPCCBKMJ_OFFSET))(this);
	}
};
