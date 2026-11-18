#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CELPPGBOAOM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CELPPGBOAOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CELPPGBOAOM_BNMHDEEIIOD_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define CELPPGBOAOM_CHABGODOLCP_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define CELPPGBOAOM_DGBJLMKMOCL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define CELPPGBOAOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CELPPGBOAOM_GLBGFGBAEOP_OFFSET UNITYSDK_OFFSET(0x761240)
#define CELPPGBOAOM_HFIMADMIMJI_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define CELPPGBOAOM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B998690)
#define CELPPGBOAOM_PFEOOKAEOKK_OFFSET UNITYSDK_OFFSET(0x755790)
#define CELPPGBOAOM_PNBHJLJFLPB_OFFSET UNITYSDK_OFFSET(0x754970)
#define CELPPGBOAOM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CELPPGBOAOM_TypeDefinitionIndex = 11081;

struct alignas(4) CELPPGBOAOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPPGBOAOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CELPPGBOAOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CELPPGBOAOM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CELPPGBOAOM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CELPPGBOAOM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PNBHJLJFLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPPGBOAOM_PNBHJLJFLPB_OFFSET))(this);
	}

	::System::Boolean HFIMADMIMJI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CELPPGBOAOM_HFIMADMIMJI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean CHABGODOLCP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CELPPGBOAOM_CHABGODOLCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPPGBOAOM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GLBGFGBAEOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPPGBOAOM_GLBGFGBAEOP_OFFSET))(this);
	}

	::System::Int32 PFEOOKAEOKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPPGBOAOM_PFEOOKAEOKK_OFFSET))(this);
	}

	::System::Boolean BNMHDEEIIOD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CELPPGBOAOM_BNMHDEEIIOD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CELPPGBOAOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CELPPGBOAOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CELPPGBOAOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DGBJLMKMOCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPPGBOAOM_DGBJLMKMOCL_OFFSET))(this);
	}
};
