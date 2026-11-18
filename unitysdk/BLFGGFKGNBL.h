#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BLFGGFKGNBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BLFGGFKGNBL_CINPJLIBCMI_OFFSET UNITYSDK_OFFSET(0x761D30)
#define BLFGGFKGNBL_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755890)
#define BLFGGFKGNBL_FMPOLLGLHND_OFFSET UNITYSDK_OFFSET(0x7DE7A0)
#define BLFGGFKGNBL_GEADINPIDDE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define BLFGGFKGNBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BLFGGFKGNBL_GJBBEDDPFJN_OFFSET UNITYSDK_OFFSET(0x7631F0)
#define BLFGGFKGNBL_GKHLIHKEGJJ_OFFSET UNITYSDK_OFFSET(0x764500)
#define BLFGGFKGNBL_GMPMNMEJKCG_OFFSET UNITYSDK_OFFSET(0x78A8A0)
#define BLFGGFKGNBL_IBFCCAOEBPP_OFFSET UNITYSDK_OFFSET(0x761B50)
#define BLFGGFKGNBL_IJJGGOINIPB_OFFSET UNITYSDK_OFFSET(0x7649A0)
#define BLFGGFKGNBL_JKBEMEADCNG_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define BLFGGFKGNBL_KNBJCODGFCJ_OFFSET UNITYSDK_OFFSET(0x78AB70)
#define BLFGGFKGNBL_LCOILJEGAGP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define BLFGGFKGNBL_LJIJDEPEHFN_OFFSET UNITYSDK_OFFSET(0x755370)
#define BLFGGFKGNBL_MBACFODNAIO_OFFSET UNITYSDK_OFFSET(0x7DE820)
#define BLFGGFKGNBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A57A840)
#define BLFGGFKGNBL_ODNDNFMBGJK_OFFSET UNITYSDK_OFFSET(0x7555F0)
#define BLFGGFKGNBL_PDELMNNDMPC_OFFSET UNITYSDK_OFFSET(0x7ADDB0)
#define BLFGGFKGNBL_PKBBIPGIFDL_OFFSET UNITYSDK_OFFSET(0x755520)
#define BLFGGFKGNBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BLFGGFKGNBL_TypeDefinitionIndex = 11876;

struct alignas(4) BLFGGFKGNBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLFGGFKGNBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean CINPJLIBCMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_CINPJLIBCMI_OFFSET))(this);
	}

	::System::Int32 GEADINPIDDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_GEADINPIDDE_OFFSET))(this);
	}

	::System::Int32 GMPMNMEJKCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_GMPMNMEJKCG_OFFSET))(this);
	}

	::System::Int32 GJBBEDDPFJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_GJBBEDDPFJN_OFFSET))(this);
	}

	::System::Int32 IJJGGOINIPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_IJJGGOINIPB_OFFSET))(this);
	}

	::System::Int32 JKBEMEADCNG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_JKBEMEADCNG_OFFSET))(this);
	}

	::System::String* IBFCCAOEBPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_IBFCCAOEBPP_OFFSET))(this);
	}

	::System::String* PDELMNNDMPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_PDELMNNDMPC_OFFSET))(this);
	}

	::System::Int32 GKHLIHKEGJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_GKHLIHKEGJJ_OFFSET))(this);
	}

	::System::Boolean KNBJCODGFCJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_KNBJCODGFCJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PKBBIPGIFDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_PKBBIPGIFDL_OFFSET))(this);
	}

	/*
	static ::BLFGGFKGNBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BLFGGFKGNBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ODNDNFMBGJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_ODNDNFMBGJK_OFFSET))(this);
	}

	::System::String* FMPOLLGLHND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_FMPOLLGLHND_OFFSET))(this);
	}

	::System::Int32 LJIJDEPEHFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_LJIJDEPEHFN_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::String* LCOILJEGAGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_LCOILJEGAGP_OFFSET))(this);
	}

	/*
	::BLFGGFKGNBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLFGGFKGNBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MBACFODNAIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFGGFKGNBL_MBACFODNAIO_OFFSET))(this);
	}
};
