#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBFIPMDNMMH.h"

namespace FlatBuffers { class ByteBuffer; }

#define JEKOAKDHOEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEKOAKDHOEM_EGIINBAIAHC_OFFSET UNITYSDK_OFFSET(0x754C20)
#define JEKOAKDHOEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEKOAKDHOEM_KNAGJOOHLAN_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define JEKOAKDHOEM_LFMOKBGOAPI_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define JEKOAKDHOEM_LHEPGOAEJKE_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define JEKOAKDHOEM_LPDOFPHKDOB_OFFSET UNITYSDK_OFFSET(0x763AA0)
#define JEKOAKDHOEM_MLEOHCADEDE_OFFSET UNITYSDK_OFFSET(0x756360)
#define JEKOAKDHOEM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19359820)
#define JEKOAKDHOEM_OCFLMJBNMMJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEKOAKDHOEM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEKOAKDHOEM_TypeDefinitionIndex = 13427;

struct alignas(4) JEKOAKDHOEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKOAKDHOEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EGIINBAIAHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_EGIINBAIAHC_OFFSET))(this);
	}

	::System::Boolean MLEOHCADEDE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_MLEOHCADEDE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OCFLMJBNMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_OCFLMJBNMMJ_OFFSET))(this);
	}

	::System::Boolean LPDOFPHKDOB(::System::Int32 HPMEONKHFGG, ::EBFIPMDNMMH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBFIPMDNMMH&))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_LPDOFPHKDOB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LFMOKBGOAPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_LFMOKBGOAPI_OFFSET))(this);
	}

	::System::Int32 LHEPGOAEJKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_LHEPGOAEJKE_OFFSET))(this);
	}

	/*
	static ::JEKOAKDHOEM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JEKOAKDHOEM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean KNAGJOOHLAN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_KNAGJOOHLAN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JEKOAKDHOEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEKOAKDHOEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKOAKDHOEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
