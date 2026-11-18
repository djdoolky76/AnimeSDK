#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMDKGCCDGMN.h"

namespace FlatBuffers { class ByteBuffer; }

#define AOOEBCMOIAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AOOEBCMOIAI_BNHNFDAAMFC_OFFSET UNITYSDK_OFFSET(0x761240)
#define AOOEBCMOIAI_DOENFPFKOCC_OFFSET UNITYSDK_OFFSET(0x7A87D0)
#define AOOEBCMOIAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOOEBCMOIAI_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AOOEBCMOIAI_LKOCNCGFIAC_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define AOOEBCMOIAI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BDD980)
#define AOOEBCMOIAI_ONJFIGPFLIJ_OFFSET UNITYSDK_OFFSET(0x754C20)
#define AOOEBCMOIAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AOOEBCMOIAI_TypeDefinitionIndex = 15052;

struct alignas(4) AOOEBCMOIAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOOEBCMOIAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean DOENFPFKOCC(::System::Int32 HPMEONKHFGG, ::PMDKGCCDGMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMDKGCCDGMN&))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_DOENFPFKOCC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ONJFIGPFLIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_ONJFIGPFLIJ_OFFSET))(this);
	}

	/*
	::AOOEBCMOIAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOOEBCMOIAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AOOEBCMOIAI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AOOEBCMOIAI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 BNHNFDAAMFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_BNHNFDAAMFC_OFFSET))(this);
	}

	::System::Boolean LKOCNCGFIAC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AOOEBCMOIAI_LKOCNCGFIAC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
