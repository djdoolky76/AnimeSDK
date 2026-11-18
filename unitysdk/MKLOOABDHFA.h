#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKLOOABDHFA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKLOOABDHFA_AINJPNNOHHC_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define MKLOOABDHFA_AJJCOBKHJNB_OFFSET UNITYSDK_OFFSET(0x758780)
#define MKLOOABDHFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKLOOABDHFA_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MKLOOABDHFA_EBBINFPAMCG_OFFSET UNITYSDK_OFFSET(0x754C20)
#define MKLOOABDHFA_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MKLOOABDHFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKLOOABDHFA_LLNNAHCIAOM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MKLOOABDHFA_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MKLOOABDHFA_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MKLOOABDHFA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKLOOABDHFA_TypeDefinitionIndex = 12020;

struct alignas(4) MKLOOABDHFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKLOOABDHFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_FECFCHMJHML_OFFSET))(this);
	}

	::System::Int32 AJJCOBKHJNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_AJJCOBKHJNB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::String* LLNNAHCIAOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_LLNNAHCIAOM_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::MKLOOABDHFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKLOOABDHFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKLOOABDHFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EBBINFPAMCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOOABDHFA_EBBINFPAMCG_OFFSET))(this);
	}

	::System::Boolean AINJPNNOHHC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MKLOOABDHFA_AINJPNNOHHC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
