#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FCAAGCLGLGM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FCAAGCLGLGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FCAAGCLGLGM_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define FCAAGCLGLGM_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FCAAGCLGLGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCAAGCLGLGM_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FCAAGCLGLGM_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FCAAGCLGLGM_MKGNGCOCDBN_OFFSET UNITYSDK_OFFSET(0x754920)
#define FCAAGCLGLGM_MLEMPHFLGMD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FCAAGCLGLGM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174571F0)
#define FCAAGCLGLGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FCAAGCLGLGM_TypeDefinitionIndex = 15612;

struct alignas(4) FCAAGCLGLGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCAAGCLGLGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MKGNGCOCDBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_MKGNGCOCDBN_OFFSET))(this);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_CNIMPNICLOH_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MLEMPHFLGMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_MLEMPHFLGMD_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::FCAAGCLGLGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCAAGCLGLGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_CPBNNNFPKEM_OFFSET))(this);
	}

	/*
	static ::FCAAGCLGLGM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FCAAGCLGLGM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FCAAGCLGLGM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
