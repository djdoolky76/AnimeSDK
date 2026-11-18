#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NPIOOJLOKGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NPIOOJLOKGD_CKLBJBKPNDG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NPIOOJLOKGD_EFFKFNHCAOL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define NPIOOJLOKGD_EFLFDBMLFHA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NPIOOJLOKGD_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NPIOOJLOKGD_FNFFEOAJBJD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NPIOOJLOKGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPIOOJLOKGD_IAHIABIDGMH_OFFSET UNITYSDK_OFFSET(0x754920)
#define NPIOOJLOKGD_IMIGJPJFCHD_OFFSET UNITYSDK_OFFSET(0x757190)
#define NPIOOJLOKGD_KIMFFAPHIHO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NPIOOJLOKGD_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NPIOOJLOKGD_NEHBKFIFDOC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define NPIOOJLOKGD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DCAD10)
#define NPIOOJLOKGD_OHHCKDALGFE_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define NPIOOJLOKGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NPIOOJLOKGD_TypeDefinitionIndex = 10695;

struct alignas(4) NPIOOJLOKGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPIOOJLOKGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CKLBJBKPNDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_CKLBJBKPNDG_OFFSET))(this);
	}

	::System::Int32 IAHIABIDGMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_IAHIABIDGMH_OFFSET))(this);
	}

	::System::Int32 FNFFEOAJBJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_FNFFEOAJBJD_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_FJPGCNGHHCC_OFFSET))(this);
	}

	/*
	::NPIOOJLOKGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPIOOJLOKGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EFLFDBMLFHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_EFLFDBMLFHA_OFFSET))(this);
	}

	::System::Int32 OHHCKDALGFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_OHHCKDALGFE_OFFSET))(this);
	}

	/*
	static ::NPIOOJLOKGD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NPIOOJLOKGD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KIMFFAPHIHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_KIMFFAPHIHO_OFFSET))(this);
	}

	::System::String* EFFKFNHCAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_EFFKFNHCAOL_OFFSET))(this);
	}

	::System::String* IMIGJPJFCHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_IMIGJPJFCHD_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Int32 NEHBKFIFDOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIOOJLOKGD_NEHBKFIFDOC_OFFSET))(this);
	}
};
