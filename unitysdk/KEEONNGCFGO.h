#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KEEONNGCFGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KEEONNGCFGO_BKANMIAMEFN_OFFSET UNITYSDK_OFFSET(0x757A30)
#define KEEONNGCFGO_DNKJGHAOPII_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define KEEONNGCFGO_EANNJNMFJPN_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define KEEONNGCFGO_EKKNOIHLOJC_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define KEEONNGCFGO_EPKEBANFDBM_OFFSET UNITYSDK_OFFSET(0x755D70)
#define KEEONNGCFGO_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KEEONNGCFGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEEONNGCFGO_GLPCILOIKNC_OFFSET UNITYSDK_OFFSET(0x763920)
#define KEEONNGCFGO_GPPGGFAAPEN_OFFSET UNITYSDK_OFFSET(0x757450)
#define KEEONNGCFGO_HCKGHIICIBE_OFFSET UNITYSDK_OFFSET(0x757330)
#define KEEONNGCFGO_IKEOOONDPIA_OFFSET UNITYSDK_OFFSET(0x763D90)
#define KEEONNGCFGO_IONKHEMNHDF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KEEONNGCFGO_JLHEJFHMBMP_OFFSET UNITYSDK_OFFSET(0x754A70)
#define KEEONNGCFGO_MBNNHGOAKBP_OFFSET UNITYSDK_OFFSET(0x760910)
#define KEEONNGCFGO_NFPIOCJPCAI_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KEEONNGCFGO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19557CE0)
#define KEEONNGCFGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KEEONNGCFGO_TypeDefinitionIndex = 9555;

struct alignas(4) KEEONNGCFGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEEONNGCFGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HCKGHIICIBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_HCKGHIICIBE_OFFSET))(this);
	}

	::System::Int32 IONKHEMNHDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_IONKHEMNHDF_OFFSET))(this);
	}

	::System::Int32 GPPGGFAAPEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_GPPGGFAAPEN_OFFSET))(this);
	}

	::System::Int32 EKKNOIHLOJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_EKKNOIHLOJC_OFFSET))(this);
	}

	::System::Int32 BKANMIAMEFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_BKANMIAMEFN_OFFSET))(this);
	}

	::System::Int32 EANNJNMFJPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_EANNJNMFJPN_OFFSET))(this);
	}

	::System::Int32 NFPIOCJPCAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_NFPIOCJPCAI_OFFSET))(this);
	}

	/*
	::KEEONNGCFGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEEONNGCFGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEEONNGCFGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GLPCILOIKNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KEEONNGCFGO_GLPCILOIKNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JLHEJFHMBMP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KEEONNGCFGO_JLHEJFHMBMP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KEEONNGCFGO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KEEONNGCFGO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KEEONNGCFGO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MBNNHGOAKBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_MBNNHGOAKBP_OFFSET))(this);
	}

	::System::Int32 DNKJGHAOPII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_DNKJGHAOPII_OFFSET))(this);
	}

	::System::Boolean IKEOOONDPIA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KEEONNGCFGO_IKEOOONDPIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EPKEBANFDBM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KEEONNGCFGO_EPKEBANFDBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEONNGCFGO_FJPGCNGHHCC_OFFSET))(this);
	}
};
