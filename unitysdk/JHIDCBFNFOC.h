#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHIDCBFNFOC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHIDCBFNFOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHIDCBFNFOC_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JHIDCBFNFOC_CAMCDINJMKH_OFFSET UNITYSDK_OFFSET(0x761710)
#define JHIDCBFNFOC_DCHKLJBLEGD_OFFSET UNITYSDK_OFFSET(0x77AD70)
#define JHIDCBFNFOC_DHCLCHCCGAB_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define JHIDCBFNFOC_EGEPBLNAJAE_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define JHIDCBFNFOC_EOKALPJGFPL_OFFSET UNITYSDK_OFFSET(0x755670)
#define JHIDCBFNFOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHIDCBFNFOC_GNKAKJBLAIK_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define JHIDCBFNFOC_GPHOFGFBBJM_OFFSET UNITYSDK_OFFSET(0x77ACF0)
#define JHIDCBFNFOC_HIMLKMFOFDK_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define JHIDCBFNFOC_HJPGPHGCJEE_OFFSET UNITYSDK_OFFSET(0x755790)
#define JHIDCBFNFOC_HNEFCBADEPN_OFFSET UNITYSDK_OFFSET(0x77AC70)
#define JHIDCBFNFOC_HOMGAGHAINL_OFFSET UNITYSDK_OFFSET(0x77ABF0)
#define JHIDCBFNFOC_IJFAKCGFJCK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JHIDCBFNFOC_JODACGIAEPP_OFFSET UNITYSDK_OFFSET(0x757760)
#define JHIDCBFNFOC_LPPNCBBMGFD_OFFSET UNITYSDK_OFFSET(0x757E20)
#define JHIDCBFNFOC_MLMIOKNMOAL_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JHIDCBFNFOC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x161162D0)
#define JHIDCBFNFOC_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x757290)
#define JHIDCBFNFOC_POICNNNLFFD_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define JHIDCBFNFOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHIDCBFNFOC_TypeDefinitionIndex = 12207;

struct alignas(4) JHIDCBFNFOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIDCBFNFOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DHCLCHCCGAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_DHCLCHCCGAB_OFFSET))(this);
	}

	::System::String* MLMIOKNMOAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_MLMIOKNMOAL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 POICNNNLFFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_POICNNNLFFD_OFFSET))(this);
	}

	::System::Boolean HOMGAGHAINL(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_HOMGAGHAINL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HIMLKMFOFDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_HIMLKMFOFDK_OFFSET))(this);
	}

	::System::Boolean HNEFCBADEPN(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_HNEFCBADEPN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LPPNCBBMGFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_LPPNCBBMGFD_OFFSET))(this);
	}

	::System::Int32 GNKAKJBLAIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_GNKAKJBLAIK_OFFSET))(this);
	}

	/*
	::JHIDCBFNFOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHIDCBFNFOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JHIDCBFNFOC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHIDCBFNFOC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EOKALPJGFPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_EOKALPJGFPL_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 IJFAKCGFJCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_IJFAKCGFJCK_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 HJPGPHGCJEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_HJPGPHGCJEE_OFFSET))(this);
	}

	::System::Int32 EGEPBLNAJAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_EGEPBLNAJAE_OFFSET))(this);
	}

	::System::String* JODACGIAEPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_JODACGIAEPP_OFFSET))(this);
	}

	::System::Boolean GPHOFGFBBJM(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_GPHOFGFBBJM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DCHKLJBLEGD(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_DCHKLJBLEGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CAMCDINJMKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDCBFNFOC_CAMCDINJMKH_OFFSET))(this);
	}
};
