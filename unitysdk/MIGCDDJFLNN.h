#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MIGCDDJFLNN_AGHCKEHGJJH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MIGCDDJFLNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MIGCDDJFLNN_CNMMJBIJHNE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MIGCDDJFLNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIGCDDJFLNN_GJPODGGEGAA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MIGCDDJFLNN_NBJDGHJFDNI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MIGCDDJFLNN_NPCJAIPNDJE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MIGCDDJFLNN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0B5570)
#define MIGCDDJFLNN_PHCMILKCEMH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MIGCDDJFLNN_PMFGLCEENGK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MIGCDDJFLNN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MIGCDDJFLNN_TypeDefinitionIndex = 17713;

struct alignas(4) MIGCDDJFLNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIGCDDJFLNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MIGCDDJFLNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIGCDDJFLNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PMFGLCEENGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_PMFGLCEENGK_OFFSET))(this);
	}

	::System::String* PHCMILKCEMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_PHCMILKCEMH_OFFSET))(this);
	}

	::System::String* GJPODGGEGAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_GJPODGGEGAA_OFFSET))(this);
	}

	::System::String* NBJDGHJFDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_NBJDGHJFDNI_OFFSET))(this);
	}

	::System::String* AGHCKEHGJJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_AGHCKEHGJJH_OFFSET))(this);
	}

	/*
	static ::MIGCDDJFLNN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MIGCDDJFLNN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CNMMJBIJHNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_CNMMJBIJHNE_OFFSET))(this);
	}

	::System::String* NPCJAIPNDJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGCDDJFLNN_NPCJAIPNDJE_OFFSET))(this);
	}
};
