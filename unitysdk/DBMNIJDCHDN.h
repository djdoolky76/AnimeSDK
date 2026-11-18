#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DBMNIJDCHDN_AEFFMFCFMFF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DBMNIJDCHDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DBMNIJDCHDN_EIHMMIENKCF_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DBMNIJDCHDN_EPPINCOGDBB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DBMNIJDCHDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBMNIJDCHDN_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DBMNIJDCHDN_JJBIGEEEEAA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DBMNIJDCHDN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A58C740)
#define DBMNIJDCHDN_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DBMNIJDCHDN_PJDAPDJCGGH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DBMNIJDCHDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DBMNIJDCHDN_TypeDefinitionIndex = 16836;

struct alignas(4) DBMNIJDCHDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBMNIJDCHDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AEFFMFCFMFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_AEFFMFCFMFF_OFFSET))(this);
	}

	/*
	static ::DBMNIJDCHDN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DBMNIJDCHDN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JJBIGEEEEAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_JJBIGEEEEAA_OFFSET))(this);
	}

	::System::String* PJDAPDJCGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_PJDAPDJCGGH_OFFSET))(this);
	}

	::System::String* EIHMMIENKCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_EIHMMIENKCF_OFFSET))(this);
	}

	/*
	::DBMNIJDCHDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBMNIJDCHDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_HIHKBMCPIJH_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_OKGKODNEICJ_OFFSET))(this);
	}

	::System::String* EPPINCOGDBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMNIJDCHDN_EPPINCOGDBB_OFFSET))(this);
	}
};
