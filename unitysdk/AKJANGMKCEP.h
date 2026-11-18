#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AKJANGMKCEP_ACBAKIPCMLJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define AKJANGMKCEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKJANGMKCEP_CNAGJAEMPLB_OFFSET UNITYSDK_OFFSET(0x760FB0)
#define AKJANGMKCEP_DFFGDIFNJEB_OFFSET UNITYSDK_OFFSET(0x760F60)
#define AKJANGMKCEP_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKJANGMKCEP_DPBNEINGIKC_OFFSET UNITYSDK_OFFSET(0x757710)
#define AKJANGMKCEP_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x755570)
#define AKJANGMKCEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKJANGMKCEP_GGFIOHCPGEE_OFFSET UNITYSDK_OFFSET(0x757520)
#define AKJANGMKCEP_GHJBOGMCGKG_OFFSET UNITYSDK_OFFSET(0x757760)
#define AKJANGMKCEP_ILDPBMCDCAH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AKJANGMKCEP_IMJGBEDHCCF_OFFSET UNITYSDK_OFFSET(0x760910)
#define AKJANGMKCEP_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x754970)
#define AKJANGMKCEP_LINJKKKNHHB_OFFSET UNITYSDK_OFFSET(0x757D20)
#define AKJANGMKCEP_LOGCMEHMAAI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AKJANGMKCEP_NGGFEJNIALO_OFFSET UNITYSDK_OFFSET(0x755710)
#define AKJANGMKCEP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15724700)
#define AKJANGMKCEP_ODLHACCPCEH_OFFSET UNITYSDK_OFFSET(0x757E20)
#define AKJANGMKCEP_ONNMDGIEFOD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AKJANGMKCEP_OPGAOOIDPOL_OFFSET UNITYSDK_OFFSET(0x761000)
#define AKJANGMKCEP_PKDFJMDIALK_OFFSET UNITYSDK_OFFSET(0x757690)
#define AKJANGMKCEP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKJANGMKCEP_TypeDefinitionIndex = 13611;

struct alignas(4) AKJANGMKCEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKJANGMKCEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LGMMAGPFDMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_LGMMAGPFDMC_OFFSET))(this);
	}

	/*
	::AKJANGMKCEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKJANGMKCEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKJANGMKCEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::String* NGGFEJNIALO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_NGGFEJNIALO_OFFSET))(this);
	}

	::System::String* GGFIOHCPGEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_GGFIOHCPGEE_OFFSET))(this);
	}

	::System::String* PKDFJMDIALK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_PKDFJMDIALK_OFFSET))(this);
	}

	::System::Int32 ONNMDGIEFOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_ONNMDGIEFOD_OFFSET))(this);
	}

	::System::Boolean DPBNEINGIKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_DPBNEINGIKC_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Boolean DFFGDIFNJEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_DFFGDIFNJEB_OFFSET))(this);
	}

	::System::String* GHJBOGMCGKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_GHJBOGMCGKG_OFFSET))(this);
	}

	::System::Boolean CNAGJAEMPLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_CNAGJAEMPLB_OFFSET))(this);
	}

	::System::String* OPGAOOIDPOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_OPGAOOIDPOL_OFFSET))(this);
	}

	/*
	static ::AKJANGMKCEP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKJANGMKCEP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKJANGMKCEP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ILDPBMCDCAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_ILDPBMCDCAH_OFFSET))(this);
	}

	::System::String* LOGCMEHMAAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_LOGCMEHMAAI_OFFSET))(this);
	}

	::System::String* LINJKKKNHHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_LINJKKKNHHB_OFFSET))(this);
	}

	::System::Int32 IMJGBEDHCCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_IMJGBEDHCCF_OFFSET))(this);
	}

	::System::String* ACBAKIPCMLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_ACBAKIPCMLJ_OFFSET))(this);
	}

	::System::String* ODLHACCPCEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJANGMKCEP_ODLHACCPCEH_OFFSET))(this);
	}
};
