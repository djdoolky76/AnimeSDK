#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NDCAGIAJLEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDCAGIAJLEH_DHHOEJNKFDF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NDCAGIAJLEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDCAGIAJLEH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDCAGIAJLEH_MPJCEMDONLH_OFFSET UNITYSDK_OFFSET(0x754920)
#define NDCAGIAJLEH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DBE5C0)
#define NDCAGIAJLEH_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NDCAGIAJLEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDCAGIAJLEH_TypeDefinitionIndex = 15937;

struct alignas(4) NDCAGIAJLEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDCAGIAJLEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NDCAGIAJLEH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDCAGIAJLEH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_ODGGIAADMLO_OFFSET))(this);
	}

	::System::Int32 MPJCEMDONLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_MPJCEMDONLH_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 DHHOEJNKFDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_DHHOEJNKFDF_OFFSET))(this);
	}

	/*
	::NDCAGIAJLEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDCAGIAJLEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDCAGIAJLEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
