#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHAMACLPFFI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHAMACLPFFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHAMACLPFFI_BJLCEPLKNFD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EHAMACLPFFI_BPFOIHMFMIM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define EHAMACLPFFI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EHAMACLPFFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHAMACLPFFI_MECFDGCAHIN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EHAMACLPFFI_MHKNAONEAPC_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define EHAMACLPFFI_MLKBOAKFOHP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHAMACLPFFI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1951EEF0)
#define EHAMACLPFFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHAMACLPFFI_TypeDefinitionIndex = 15400;

struct alignas(4) EHAMACLPFFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHAMACLPFFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BJLCEPLKNFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_BJLCEPLKNFD_OFFSET))(this);
	}

	::System::String* MECFDGCAHIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_MECFDGCAHIN_OFFSET))(this);
	}

	/*
	static ::EHAMACLPFFI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EHAMACLPFFI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EHAMACLPFFI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BPFOIHMFMIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_BPFOIHMFMIM_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MLKBOAKFOHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_MLKBOAKFOHP_OFFSET))(this);
	}

	::System::String* MHKNAONEAPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAMACLPFFI_MHKNAONEAPC_OFFSET))(this);
	}

	/*
	::EHAMACLPFFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHAMACLPFFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHAMACLPFFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
