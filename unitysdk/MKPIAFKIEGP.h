#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKPIAFKIEGP_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MKPIAFKIEGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKPIAFKIEGP_CIBKIDCGNNE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MKPIAFKIEGP_CKDKCCOBDKP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MKPIAFKIEGP_FDNJBKMODCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKPIAFKIEGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKPIAFKIEGP_JLMABMIMPIB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MKPIAFKIEGP_LJMEEJPDFJP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MKPIAFKIEGP_ODCPOCMNHHJ_OFFSET UNITYSDK_OFFSET(0x757190)
#define MKPIAFKIEGP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKPIAFKIEGP_TypeDefinitionIndex = 10645;

struct alignas(4) MKPIAFKIEGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKPIAFKIEGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MKPIAFKIEGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKPIAFKIEGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CKDKCCOBDKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_CKDKCCOBDKP_OFFSET))(this);
	}

	::System::String* JLMABMIMPIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_JLMABMIMPIB_OFFSET))(this);
	}

	::System::String* LJMEEJPDFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_LJMEEJPDFJP_OFFSET))(this);
	}

	::System::Int32 FDNJBKMODCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_FDNJBKMODCC_OFFSET))(this);
	}

	::System::String* ODCPOCMNHHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_ODCPOCMNHHJ_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* CIBKIDCGNNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPIAFKIEGP_CIBKIDCGNNE_OFFSET))(this);
	}
};
