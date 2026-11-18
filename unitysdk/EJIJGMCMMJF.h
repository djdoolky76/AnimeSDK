#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EJIJGMCMMJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJIJGMCMMJF_DCECHEBFIIF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EJIJGMCMMJF_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EJIJGMCMMJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJIJGMCMMJF_ICHLCJHJKHJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EJIJGMCMMJF_IHDPOHGAIBH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJIJGMCMMJF_JHHHAOJCCJC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EJIJGMCMMJF_MPHHDIOOAKI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EJIJGMCMMJF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B8568F0)
#define EJIJGMCMMJF_PECACBJCHCM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EJIJGMCMMJF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJIJGMCMMJF_TypeDefinitionIndex = 9245;

struct alignas(4) EJIJGMCMMJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIJGMCMMJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EJIJGMCMMJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJIJGMCMMJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PECACBJCHCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_PECACBJCHCM_OFFSET))(this);
	}

	::System::Int32 ELHJOMPHFNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_ELHJOMPHFNM_OFFSET))(this);
	}

	::System::Int32 MPHHDIOOAKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_MPHHDIOOAKI_OFFSET))(this);
	}

	/*
	static ::EJIJGMCMMJF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EJIJGMCMMJF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JHHHAOJCCJC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_JHHHAOJCCJC_OFFSET))(this);
	}

	::System::String* ICHLCJHJKHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_ICHLCJHJKHJ_OFFSET))(this);
	}

	::System::String* DCECHEBFIIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_DCECHEBFIIF_OFFSET))(this);
	}

	::System::Int32 IHDPOHGAIBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIJGMCMMJF_IHDPOHGAIBH_OFFSET))(this);
	}
};
