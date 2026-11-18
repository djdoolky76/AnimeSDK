#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EALGMECCPDN_ABGCNKNMEDG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EALGMECCPDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EALGMECCPDN_EDHJFNPKHOO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EALGMECCPDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EALGMECCPDN_GMNIEHMKHKL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EALGMECCPDN_KIMIFBKMAAC_OFFSET UNITYSDK_OFFSET(0x754920)
#define EALGMECCPDN_LGENEEEBJID_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EALGMECCPDN_NJOEBCJMFDE_OFFSET UNITYSDK_OFFSET(0x754970)
#define EALGMECCPDN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157A9180)
#define EALGMECCPDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EALGMECCPDN_TypeDefinitionIndex = 12219;

struct alignas(4) EALGMECCPDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EALGMECCPDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EDHJFNPKHOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_EDHJFNPKHOO_OFFSET))(this);
	}

	::System::Int32 NJOEBCJMFDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_NJOEBCJMFDE_OFFSET))(this);
	}

	/*
	static ::EALGMECCPDN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EALGMECCPDN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EALGMECCPDN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EALGMECCPDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EALGMECCPDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EALGMECCPDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GMNIEHMKHKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_GMNIEHMKHKL_OFFSET))(this);
	}

	::System::Int32 ABGCNKNMEDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_ABGCNKNMEDG_OFFSET))(this);
	}

	::System::Int32 LGENEEEBJID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_LGENEEEBJID_OFFSET))(this);
	}

	::System::Int32 KIMIFBKMAAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALGMECCPDN_KIMIFBKMAAC_OFFSET))(this);
	}
};
