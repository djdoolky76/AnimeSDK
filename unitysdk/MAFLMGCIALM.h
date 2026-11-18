#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MAFLMGCIALM_BDKJBCLIFFO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MAFLMGCIALM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MAFLMGCIALM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MAFLMGCIALM_CIPKJBBAGEE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MAFLMGCIALM_DEDNHGJHKDI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MAFLMGCIALM_DGMILDLAEED_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MAFLMGCIALM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAFLMGCIALM_HIPPPKMJPEN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MAFLMGCIALM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD6A0A0)
#define MAFLMGCIALM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MAFLMGCIALM_TypeDefinitionIndex = 13590;

struct alignas(4) MAFLMGCIALM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAFLMGCIALM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DGMILDLAEED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_DGMILDLAEED_OFFSET))(this);
	}

	::System::Int32 HIPPPKMJPEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_HIPPPKMJPEN_OFFSET))(this);
	}

	::System::String* BDKJBCLIFFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_BDKJBCLIFFO_OFFSET))(this);
	}

	::System::String* DEDNHGJHKDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_DEDNHGJHKDI_OFFSET))(this);
	}

	/*
	static ::MAFLMGCIALM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MAFLMGCIALM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MAFLMGCIALM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MAFLMGCIALM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAFLMGCIALM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAFLMGCIALM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CIPKJBBAGEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_CIPKJBBAGEE_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGCIALM_BKNKCFDBLGH_OFFSET))(this);
	}
};
