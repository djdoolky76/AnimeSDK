#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPNMJNBOGDL_AEFFMFCFMFF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MPNMJNBOGDL_AKFMNDILMIE_OFFSET UNITYSDK_OFFSET(0x757190)
#define MPNMJNBOGDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPNMJNBOGDL_FIJGJGOHMOH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MPNMJNBOGDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPNMJNBOGDL_GFHFOEPFNJL_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define MPNMJNBOGDL_LLDAMBKLDNI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MPNMJNBOGDL_NDFFLKJMCNG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MPNMJNBOGDL_NEFAGDPHEAK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MPNMJNBOGDL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0BC3A0)
#define MPNMJNBOGDL_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define MPNMJNBOGDL_PKJCIGJCCMB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPNMJNBOGDL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPNMJNBOGDL_TypeDefinitionIndex = 9882;

struct alignas(4) MPNMJNBOGDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPNMJNBOGDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKJCIGJCCMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_PKJCIGJCCMB_OFFSET))(this);
	}

	::System::Int32 AEFFMFCFMFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_AEFFMFCFMFF_OFFSET))(this);
	}

	::System::Int32 NEFAGDPHEAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_NEFAGDPHEAK_OFFSET))(this);
	}

	/*
	static ::MPNMJNBOGDL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MPNMJNBOGDL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FIJGJGOHMOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_FIJGJGOHMOH_OFFSET))(this);
	}

	::System::String* NDFFLKJMCNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_NDFFLKJMCNG_OFFSET))(this);
	}

	/*
	::MPNMJNBOGDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPNMJNBOGDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GFHFOEPFNJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_GFHFOEPFNJL_OFFSET))(this);
	}

	::System::String* AKFMNDILMIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_AKFMNDILMIE_OFFSET))(this);
	}

	::System::String* LLDAMBKLDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_LLDAMBKLDNI_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNMJNBOGDL_OKGKODNEICJ_OFFSET))(this);
	}
};
