#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DNJGFLEJJFA_ADDHFEFPGNC_OFFSET UNITYSDK_OFFSET(0x760EC0)
#define DNJGFLEJJFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNJGFLEJJFA_BMPAFCONIFC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DNJGFLEJJFA_ENKJCHCNFIL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define DNJGFLEJJFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNJGFLEJJFA_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x754970)
#define DNJGFLEJJFA_HJIBCKOPENI_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DNJGFLEJJFA_ICGDJGBBLFP_OFFSET UNITYSDK_OFFSET(0x788CF0)
#define DNJGFLEJJFA_LGIKCPGJLBI_OFFSET UNITYSDK_OFFSET(0x788D40)
#define DNJGFLEJJFA_NIEJAKEFHMC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DNJGFLEJJFA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1661E410)
#define DNJGFLEJJFA_OGJJCFENGEF_OFFSET UNITYSDK_OFFSET(0x755890)
#define DNJGFLEJJFA_OKGOMLEFBHM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNJGFLEJJFA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNJGFLEJJFA_TypeDefinitionIndex = 16219;

struct alignas(4) DNJGFLEJJFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNJGFLEJJFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BMPAFCONIFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_BMPAFCONIFC_OFFSET))(this);
	}

	::System::UInt64 ICGDJGBBLFP()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_ICGDJGBBLFP_OFFSET))(this);
	}

	::System::Int32 OGJJCFENGEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_OGJJCFENGEF_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_HDDENLNIPMA_OFFSET))(this);
	}

	::System::Boolean ADDHFEFPGNC(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_ADDHFEFPGNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DNJGFLEJJFA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNJGFLEJJFA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OKGOMLEFBHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_OKGOMLEFBHM_OFFSET))(this);
	}

	::System::Int32 HJIBCKOPENI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_HJIBCKOPENI_OFFSET))(this);
	}

	::System::Int32 ENKJCHCNFIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_ENKJCHCNFIL_OFFSET))(this);
	}

	/*
	::DNJGFLEJJFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNJGFLEJJFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::UInt64 LGIKCPGJLBI()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_LGIKCPGJLBI_OFFSET))(this);
	}

	::System::String* NIEJAKEFHMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGFLEJJFA_NIEJAKEFHMC_OFFSET))(this);
	}
};
