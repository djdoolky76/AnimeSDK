#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GNHOJOIJMHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GNHOJOIJMHO_EJJCIFHNLJE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GNHOJOIJMHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNHOJOIJMHO_MCFNHCOCMFL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GNHOJOIJMHO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x166517D0)
#define GNHOJOIJMHO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GNHOJOIJMHO_TypeDefinitionIndex = 13256;

struct alignas(4) GNHOJOIJMHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOJOIJMHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNHOJOIJMHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MCFNHCOCMFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOJOIJMHO_MCFNHCOCMFL_OFFSET))(this);
	}

	/*
	::GNHOJOIJMHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNHOJOIJMHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNHOJOIJMHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GNHOJOIJMHO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GNHOJOIJMHO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GNHOJOIJMHO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EJJCIFHNLJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOJOIJMHO_EJJCIFHNLJE_OFFSET))(this);
	}
};
