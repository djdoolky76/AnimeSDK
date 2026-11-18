#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NILLEKBEKKN.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CFPPMKDALDE_BGLPDLKEOMC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CFPPMKDALDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CFPPMKDALDE_DIFMMCLCLBB_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define CFPPMKDALDE_FCGPEBICFBB_OFFSET UNITYSDK_OFFSET(0x758320)
#define CFPPMKDALDE_FDODNDNANDJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CFPPMKDALDE_FLIPDCJJAOL_OFFSET UNITYSDK_OFFSET(0x762F60)
#define CFPPMKDALDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFPPMKDALDE_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CFPPMKDALDE_IDMANCIMFAO_OFFSET UNITYSDK_OFFSET(0x758780)
#define CFPPMKDALDE_IHDIGBLHPGK_OFFSET UNITYSDK_OFFSET(0x760910)
#define CFPPMKDALDE_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define CFPPMKDALDE_KFDCMMEHNJH_OFFSET UNITYSDK_OFFSET(0x761710)
#define CFPPMKDALDE_KNLMKBIDKFH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CFPPMKDALDE_MAKFEEODOPE_OFFSET UNITYSDK_OFFSET(0x757760)
#define CFPPMKDALDE_MKBGGKDBJGH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CFPPMKDALDE_MMIDGGDDNHN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CFPPMKDALDE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A17C440)
#define CFPPMKDALDE_OBJPGJPGPEA_OFFSET UNITYSDK_OFFSET(0x7F5280)
#define CFPPMKDALDE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CFPPMKDALDE_TypeDefinitionIndex = 17453;

struct alignas(4) CFPPMKDALDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFPPMKDALDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MMIDGGDDNHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_MMIDGGDDNHN_OFFSET))(this);
	}

	::System::Int32 MKBGGKDBJGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_MKBGGKDBJGH_OFFSET))(this);
	}

	/*
	::CFPPMKDALDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFPPMKDALDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFPPMKDALDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FDODNDNANDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_FDODNDNANDJ_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* FLIPDCJJAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_FLIPDCJJAOL_OFFSET))(this);
	}

	::System::Int32 BGLPDLKEOMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_BGLPDLKEOMC_OFFSET))(this);
	}

	::System::Int32 IHDIGBLHPGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_IHDIGBLHPGK_OFFSET))(this);
	}

	::System::Int32 IDMANCIMFAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_IDMANCIMFAO_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 DIFMMCLCLBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_DIFMMCLCLBB_OFFSET))(this);
	}

	::System::Nullable_1<::NILLEKBEKKN> OBJPGJPGPEA()
	{
		return ((::System::Nullable_1<::NILLEKBEKKN>(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_OBJPGJPGPEA_OFFSET))(this);
	}

	/*
	static ::CFPPMKDALDE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CFPPMKDALDE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CFPPMKDALDE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KFDCMMEHNJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_KFDCMMEHNJH_OFFSET))(this);
	}

	::System::String* MAKFEEODOPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_MAKFEEODOPE_OFFSET))(this);
	}

	::System::String* FCGPEBICFBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_FCGPEBICFBB_OFFSET))(this);
	}

	::System::String* KNLMKBIDKFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPPMKDALDE_KNLMKBIDKFH_OFFSET))(this);
	}
};
