#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JGJNBHNCNFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGJNBHNCNFD_EIGPMHAJPBB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JGJNBHNCNFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGJNBHNCNFD_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x755190)
#define JGJNBHNCNFD_HKIDKOCDCFL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JGJNBHNCNFD_IMHGGCAJLOL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JGJNBHNCNFD_JHGCKDJFNJA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JGJNBHNCNFD_JIFKEAAKCIL_OFFSET UNITYSDK_OFFSET(0x757190)
#define JGJNBHNCNFD_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x757290)
#define JGJNBHNCNFD_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JGJNBHNCNFD_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGJNBHNCNFD_NOFAMABBBGA_OFFSET UNITYSDK_OFFSET(0x758320)
#define JGJNBHNCNFD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1935AD80)
#define JGJNBHNCNFD_OLFNJPAJHGG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JGJNBHNCNFD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGJNBHNCNFD_TypeDefinitionIndex = 14601;

struct alignas(4) JGJNBHNCNFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGJNBHNCNFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_HJFCIELMJPA_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 OLFNJPAJHGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_OLFNJPAJHGG_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	static ::JGJNBHNCNFD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JGJNBHNCNFD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* EIGPMHAJPBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_EIGPMHAJPBB_OFFSET))(this);
	}

	/*
	::JGJNBHNCNFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGJNBHNCNFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKIDKOCDCFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_HKIDKOCDCFL_OFFSET))(this);
	}

	::System::String* JIFKEAAKCIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_JIFKEAAKCIL_OFFSET))(this);
	}

	::System::Int32 IMHGGCAJLOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_IMHGGCAJLOL_OFFSET))(this);
	}

	::System::String* NOFAMABBBGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_NOFAMABBBGA_OFFSET))(this);
	}

	::System::String* JHGCKDJFNJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJNBHNCNFD_JHGCKDJFNJA_OFFSET))(this);
	}
};
