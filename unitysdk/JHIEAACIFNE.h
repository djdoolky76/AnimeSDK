#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JHIEAACIFNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHIEAACIFNE_EGGLHJJGCHM_OFFSET UNITYSDK_OFFSET(0x754920)
#define JHIEAACIFNE_GCNHJNMJFBG_OFFSET UNITYSDK_OFFSET(0x754970)
#define JHIEAACIFNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHIEAACIFNE_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHIEAACIFNE_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JHIEAACIFNE_KJJOFKKNKMG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JHIEAACIFNE_MCBKKOBAJPN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JHIEAACIFNE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195498F0)
#define JHIEAACIFNE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHIEAACIFNE_TypeDefinitionIndex = 17437;

struct alignas(4) JHIEAACIFNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIEAACIFNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::Int32 KJJOFKKNKMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_KJJOFKKNKMG_OFFSET))(this);
	}

	::System::Int32 EGGLHJJGCHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_EGGLHJJGCHM_OFFSET))(this);
	}

	::System::Int32 GCNHJNMJFBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_GCNHJNMJFBG_OFFSET))(this);
	}

	::System::Int32 MCBKKOBAJPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEAACIFNE_MCBKKOBAJPN_OFFSET))(this);
	}

	/*
	static ::JHIEAACIFNE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHIEAACIFNE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHIEAACIFNE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JHIEAACIFNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHIEAACIFNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIEAACIFNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
