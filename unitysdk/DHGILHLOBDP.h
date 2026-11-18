#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GICGDHGLBEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHGILHLOBDP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHGILHLOBDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765E80)
#define DHGILHLOBDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHGILHLOBDP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHGILHLOBDP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x765E60)
#define DHGILHLOBDP_PJDPJHNFMLJ_1_OFFSET UNITYSDK_OFFSET(0x157A2F20)
#define DHGILHLOBDP_PJDPJHNFMLJ_OFFSET UNITYSDK_OFFSET(0x157A2C80)
#define DHGILHLOBDP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765E70)
#define DHGILHLOBDP___INIT_OFFSET UNITYSDK_OFFSET(0x765E40)

inline static constexpr unsigned int DHGILHLOBDP_TypeDefinitionIndex = 10940;

struct alignas(8) DHGILHLOBDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGILHLOBDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHGILHLOBDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DHGILHLOBDP PJDPJHNFMLJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHGILHLOBDP EIFONLCJOPG)
	{
		return ((::DHGILHLOBDP(*)(::FlatBuffers::ByteBuffer*, ::DHGILHLOBDP))((::PBYTE)hIl2Cpp + DHGILHLOBDP_PJDPJHNFMLJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GICGDHGLBEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GICGDHGLBEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHGILHLOBDP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DHGILHLOBDP PJDPJHNFMLJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHGILHLOBDP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHGILHLOBDP_PJDPJHNFMLJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGILHLOBDP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GICGDHGLBEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GICGDHGLBEI&))((::PBYTE)hIl2Cpp + DHGILHLOBDP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGILHLOBDP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DHGILHLOBDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHGILHLOBDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHGILHLOBDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
