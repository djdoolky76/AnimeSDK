#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PFMOODAPJDF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PFMOODAPJDF_AKHEMJGBCPM_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define PFMOODAPJDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PFMOODAPJDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFMOODAPJDF_GHLANGMFKPK_OFFSET UNITYSDK_OFFSET(0x757190)
#define PFMOODAPJDF_GNLBPCGFALA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PFMOODAPJDF_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PFMOODAPJDF_IJPDGCAOFNM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define PFMOODAPJDF_JGMPNBPLLGK_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define PFMOODAPJDF_JMNEBNKOOIK_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define PFMOODAPJDF_JOJNCDLNJNM_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define PFMOODAPJDF_KNDENODDIEM_OFFSET UNITYSDK_OFFSET(0x755440)
#define PFMOODAPJDF_LMLJEAFNNKL_OFFSET UNITYSDK_OFFSET(0x758320)
#define PFMOODAPJDF_MLLEOGGONEO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PFMOODAPJDF_NBNCGKMNKBG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PFMOODAPJDF_NCLBODLIEIB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PFMOODAPJDF_NEDCIMEICLL_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define PFMOODAPJDF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1737A0E0)
#define PFMOODAPJDF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PFMOODAPJDF_TypeDefinitionIndex = 14797;

struct alignas(4) PFMOODAPJDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFMOODAPJDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AKHEMJGBCPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_AKHEMJGBCPM_OFFSET))(this);
	}

	::System::String* IJPDGCAOFNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_IJPDGCAOFNM_OFFSET))(this);
	}

	::System::String* MLLEOGGONEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_MLLEOGGONEO_OFFSET))(this);
	}

	::System::String* GNLBPCGFALA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_GNLBPCGFALA_OFFSET))(this);
	}

	::System::String* LMLJEAFNNKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_LMLJEAFNNKL_OFFSET))(this);
	}

	::System::String* NCLBODLIEIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_NCLBODLIEIB_OFFSET))(this);
	}

	::System::Int32 NEDCIMEICLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_NEDCIMEICLL_OFFSET))(this);
	}

	::System::Boolean JGMPNBPLLGK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMOODAPJDF_JGMPNBPLLGK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JMNEBNKOOIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_JMNEBNKOOIK_OFFSET))(this);
	}

	::System::String* NBNCGKMNKBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_NBNCGKMNKBG_OFFSET))(this);
	}

	::System::Int32 KNDENODDIEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_KNDENODDIEM_OFFSET))(this);
	}

	/*
	static ::PFMOODAPJDF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PFMOODAPJDF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMOODAPJDF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_HJFCIELMJPA_OFFSET))(this);
	}

	/*
	::PFMOODAPJDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFMOODAPJDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFMOODAPJDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GHLANGMFKPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_GHLANGMFKPK_OFFSET))(this);
	}

	::System::String* JOJNCDLNJNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMOODAPJDF_JOJNCDLNJNM_OFFSET))(this);
	}
};
