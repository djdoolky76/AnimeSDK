#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BPGAMKIIHNE_AECDJIKJPFA_OFFSET UNITYSDK_OFFSET(0x754A70)
#define BPGAMKIIHNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BPGAMKIIHNE_CDGAECIOENI_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define BPGAMKIIHNE_CGPPLCFHDGK_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define BPGAMKIIHNE_DCHCOGANKHE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BPGAMKIIHNE_ECBIMENCEEG_OFFSET UNITYSDK_OFFSET(0x761240)
#define BPGAMKIIHNE_EDLMGKPBAAA_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define BPGAMKIIHNE_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BPGAMKIIHNE_FJEEFEOAPLP_OFFSET UNITYSDK_OFFSET(0x756490)
#define BPGAMKIIHNE_FLBEHHNLHPE_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define BPGAMKIIHNE_FPAPDLIEEHP_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define BPGAMKIIHNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BPGAMKIIHNE_GHMBAAOEJME_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BPGAMKIIHNE_GLBDMKNFPLE_OFFSET UNITYSDK_OFFSET(0x756720)
#define BPGAMKIIHNE_KCKCIDGPCOJ_OFFSET UNITYSDK_OFFSET(0x757760)
#define BPGAMKIIHNE_KOCAMJJHNEH_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define BPGAMKIIHNE_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x757190)
#define BPGAMKIIHNE_MPJCEMDONLH_OFFSET UNITYSDK_OFFSET(0x754970)
#define BPGAMKIIHNE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194FDB90)
#define BPGAMKIIHNE_PJKNHEBPNBE_OFFSET UNITYSDK_OFFSET(0x762D20)
#define BPGAMKIIHNE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BPGAMKIIHNE_TypeDefinitionIndex = 11565;

struct alignas(4) BPGAMKIIHNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPGAMKIIHNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BPGAMKIIHNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPGAMKIIHNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CDGAECIOENI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_CDGAECIOENI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PJKNHEBPNBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_PJKNHEBPNBE_OFFSET))(this);
	}

	/*
	static ::BPGAMKIIHNE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BPGAMKIIHNE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FJEEFEOAPLP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_FJEEFEOAPLP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHMBAAOEJME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_GHMBAAOEJME_OFFSET))(this);
	}

	::System::Int32 MPJCEMDONLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_MPJCEMDONLH_OFFSET))(this);
	}

	::System::Boolean KOCAMJJHNEH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_KOCAMJJHNEH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DCHCOGANKHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_DCHCOGANKHE_OFFSET))(this);
	}

	::System::Int32 ECBIMENCEEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_ECBIMENCEEG_OFFSET))(this);
	}

	::System::Int32 GLBDMKNFPLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_GLBDMKNFPLE_OFFSET))(this);
	}

	::System::Boolean EDLMGKPBAAA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_EDLMGKPBAAA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FPAPDLIEEHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_FPAPDLIEEHP_OFFSET))(this);
	}

	::System::String* KCKCIDGPCOJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_KCKCIDGPCOJ_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_MNBGAIEPADE_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_FELDILHMMIK_OFFSET))(this);
	}

	::System::Int32 CGPPLCFHDGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_CGPPLCFHDGK_OFFSET))(this);
	}

	::System::Boolean AECDJIKJPFA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_AECDJIKJPFA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FLBEHHNLHPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGAMKIIHNE_FLBEHHNLHPE_OFFSET))(this);
	}
};
