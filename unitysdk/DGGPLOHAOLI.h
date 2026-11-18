#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DGGPLOHAOLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DGGPLOHAOLI_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DGGPLOHAOLI_EPNAMNKAHNM_OFFSET UNITYSDK_OFFSET(0x754920)
#define DGGPLOHAOLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGGPLOHAOLI_GOJHJGMHKMF_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DGGPLOHAOLI_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define DGGPLOHAOLI_NJMFFLNKMCF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DGGPLOHAOLI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9A5680)
#define DGGPLOHAOLI_OIJLPFMGAEJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DGGPLOHAOLI_ONLKBDOBBPK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DGGPLOHAOLI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DGGPLOHAOLI_TypeDefinitionIndex = 12938;

struct alignas(4) DGGPLOHAOLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGGPLOHAOLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ONLKBDOBBPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_ONLKBDOBBPK_OFFSET))(this);
	}

	::System::Int32 OIJLPFMGAEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_OIJLPFMGAEJ_OFFSET))(this);
	}

	::System::String* ELHJOMPHFNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_ELHJOMPHFNM_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::DGGPLOHAOLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGGPLOHAOLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NJMFFLNKMCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_NJMFFLNKMCF_OFFSET))(this);
	}

	::System::String* GOJHJGMHKMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_GOJHJGMHKMF_OFFSET))(this);
	}

	/*
	static ::DGGPLOHAOLI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DGGPLOHAOLI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EPNAMNKAHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGPLOHAOLI_EPNAMNKAHNM_OFFSET))(this);
	}
};
