#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define COOJDFEMEFO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COOJDFEMEFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COOJDFEMEFO_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define COOJDFEMEFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COOJDFEMEFO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define COOJDFEMEFO_OAEOELMJIIE_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define COOJDFEMEFO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADC0420)
#define COOJDFEMEFO_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define COOJDFEMEFO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COOJDFEMEFO_TypeDefinitionIndex = 17078;

struct alignas(4) COOJDFEMEFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOJDFEMEFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COOJDFEMEFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOJDFEMEFO_CCDBAOOFMFA_OFFSET))(this);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOJDFEMEFO_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::String* OAEOELMJIIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOJDFEMEFO_OAEOELMJIIE_OFFSET))(this);
	}

	/*
	::COOJDFEMEFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COOJDFEMEFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COOJDFEMEFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOJDFEMEFO_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOJDFEMEFO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::COOJDFEMEFO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COOJDFEMEFO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COOJDFEMEFO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
