#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FFFPPKADLNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFFPPKADLNF_FJAIBBHMJON_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define FFFPPKADLNF_GDPGNGNIGLB_OFFSET UNITYSDK_OFFSET(0x7B21E0)
#define FFFPPKADLNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFFPPKADLNF_IMFJCMEOHHA_OFFSET UNITYSDK_OFFSET(0x754920)
#define FFFPPKADLNF_JPAIFDKBHKJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define FFFPPKADLNF_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFFPPKADLNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A1A8540)
#define FFFPPKADLNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFFPPKADLNF_TypeDefinitionIndex = 17123;

struct alignas(4) FFFPPKADLNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFPPKADLNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFFPPKADLNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFPPKADLNF_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 IMFJCMEOHHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFPPKADLNF_IMFJCMEOHHA_OFFSET))(this);
	}

	::System::Int32 JPAIFDKBHKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFPPKADLNF_JPAIFDKBHKJ_OFFSET))(this);
	}

	::System::UInt64 GDPGNGNIGLB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFPPKADLNF_GDPGNGNIGLB_OFFSET))(this);
	}

	/*
	::FFFPPKADLNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFFPPKADLNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFFPPKADLNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FFFPPKADLNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FFFPPKADLNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FFFPPKADLNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FJAIBBHMJON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FFFPPKADLNF_FJAIBBHMJON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
