#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FEHBFDPLJDI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEHBFDPLJDI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEHBFDPLJDI_BNMHHALCDDH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FEHBFDPLJDI_DANBPFGJKOK_OFFSET UNITYSDK_OFFSET(0x758200)
#define FEHBFDPLJDI_DMMKMKCPHMF_OFFSET UNITYSDK_OFFSET(0x754920)
#define FEHBFDPLJDI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEHBFDPLJDI_HFONGJNFMPF_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define FEHBFDPLJDI_IMDADCKJGCM_OFFSET UNITYSDK_OFFSET(0x754970)
#define FEHBFDPLJDI_INGFEHBHLPI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FEHBFDPLJDI_IOFOAFPMDFK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FEHBFDPLJDI_OPOCDCOEDHO_OFFSET UNITYSDK_OFFSET(0x758780)
#define FEHBFDPLJDI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEHBFDPLJDI_TypeDefinitionIndex = 9431;

struct alignas(4) FEHBFDPLJDI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHBFDPLJDI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IMDADCKJGCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_IMDADCKJGCM_OFFSET))(this);
	}

	::System::Int32 IOFOAFPMDFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_IOFOAFPMDFK_OFFSET))(this);
	}

	::System::Int32 DMMKMKCPHMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_DMMKMKCPHMF_OFFSET))(this);
	}

	::System::Int32 HFONGJNFMPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_HFONGJNFMPF_OFFSET))(this);
	}

	::System::Int32 OPOCDCOEDHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_OPOCDCOEDHO_OFFSET))(this);
	}

	/*
	::FEHBFDPLJDI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEHBFDPLJDI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 INGFEHBHLPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_INGFEHBHLPI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DANBPFGJKOK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_DANBPFGJKOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BNMHHALCDDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBFDPLJDI_BNMHHALCDDH_OFFSET))(this);
	}
};
