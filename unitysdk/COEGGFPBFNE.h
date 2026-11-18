#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define COEGGFPBFNE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COEGGFPBFNE_BEOCICMIJBH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define COEGGFPBFNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COEGGFPBFNE_CFMEJJHMEIP_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define COEGGFPBFNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COEGGFPBFNE_IMHGGCAJLOL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define COEGGFPBFNE_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x758780)
#define COEGGFPBFNE_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define COEGGFPBFNE_NIJCGEDCDPA_OFFSET UNITYSDK_OFFSET(0x758200)
#define COEGGFPBFNE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F346E0)
#define COEGGFPBFNE_PBCLJJKFFKJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define COEGGFPBFNE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COEGGFPBFNE_TypeDefinitionIndex = 14966;

struct alignas(4) COEGGFPBFNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEGGFPBFNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean NIJCGEDCDPA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + COEGGFPBFNE_NIJCGEDCDPA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CFMEJJHMEIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_CFMEJJHMEIP_OFFSET))(this);
	}

	::System::Int32 BEOCICMIJBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_BEOCICMIJBH_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_LNOBBAIGKJL_OFFSET))(this);
	}

	/*
	::COEGGFPBFNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COEGGFPBFNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEGGFPBFNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::COEGGFPBFNE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COEGGFPBFNE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COEGGFPBFNE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PBCLJJKFFKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_PBCLJJKFFKJ_OFFSET))(this);
	}

	::System::Int32 IMHGGCAJLOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_IMHGGCAJLOL_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGGFPBFNE_NENDAECBCEM_OFFSET))(this);
	}
};
