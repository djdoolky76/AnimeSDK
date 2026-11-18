#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHDEAHLOBKM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHDEAHLOBKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHDEAHLOBKM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JHDEAHLOBKM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JHDEAHLOBKM_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JHDEAHLOBKM_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JHDEAHLOBKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHDEAHLOBKM_KEAMAOBLJEJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JHDEAHLOBKM_KODAKADMMDI_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JHDEAHLOBKM_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x758780)
#define JHDEAHLOBKM_MACHMPBMBPK_OFFSET UNITYSDK_OFFSET(0x754920)
#define JHDEAHLOBKM_PCOLPNHDKNC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JHDEAHLOBKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHDEAHLOBKM_TypeDefinitionIndex = 17425;

struct alignas(4) JHDEAHLOBKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHDEAHLOBKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_DECMGICKDLH_OFFSET))(this);
	}

	/*
	::JHDEAHLOBKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHDEAHLOBKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KEAMAOBLJEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_KEAMAOBLJEJ_OFFSET))(this);
	}

	::System::Int32 KODAKADMMDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_KODAKADMMDI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LDIENHMALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_LDIENHMALPL_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_FELDILHMMIK_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 FCICGEALCFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_FCICGEALCFA_OFFSET))(this);
	}

	::System::Int32 PCOLPNHDKNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_PCOLPNHDKNC_OFFSET))(this);
	}

	::System::Int32 MACHMPBMBPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEAHLOBKM_MACHMPBMBPK_OFFSET))(this);
	}
};
