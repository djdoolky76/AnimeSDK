#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KOGPHILJNLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOGPHILJNLI_BOEBCMEFAFC_OFFSET UNITYSDK_OFFSET(0x756720)
#define KOGPHILJNLI_CIGOBLGPPOA_OFFSET UNITYSDK_OFFSET(0x754D50)
#define KOGPHILJNLI_CKMBEEFEOMB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KOGPHILJNLI_DLENBOKFDIP_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define KOGPHILJNLI_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KOGPHILJNLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOGPHILJNLI_HFHFFLMNOPD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KOGPHILJNLI_LACMMDJMMFC_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define KOGPHILJNLI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DF1040)
#define KOGPHILJNLI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOGPHILJNLI_TypeDefinitionIndex = 10057;

struct alignas(4) KOGPHILJNLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPHILJNLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOGPHILJNLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HFHFFLMNOPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPHILJNLI_HFHFFLMNOPD_OFFSET))(this);
	}

	::System::Int32 CKMBEEFEOMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPHILJNLI_CKMBEEFEOMB_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPHILJNLI_FJPGCNGHHCC_OFFSET))(this);
	}

	/*
	::KOGPHILJNLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOGPHILJNLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOGPHILJNLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LACMMDJMMFC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOGPHILJNLI_LACMMDJMMFC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DLENBOKFDIP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOGPHILJNLI_DLENBOKFDIP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BOEBCMEFAFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPHILJNLI_BOEBCMEFAFC_OFFSET))(this);
	}

	/*
	static ::KOGPHILJNLI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KOGPHILJNLI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KOGPHILJNLI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CIGOBLGPPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPHILJNLI_CIGOBLGPPOA_OFFSET))(this);
	}
};
