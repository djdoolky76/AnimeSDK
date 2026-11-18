#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }

#define KABFOLDHLKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KABFOLDHLKK_DBHLCLNOGKI_OFFSET UNITYSDK_OFFSET(0x7EA0A0)
#define KABFOLDHLKK_FLNILGBENPA_OFFSET UNITYSDK_OFFSET(0x7B1C80)
#define KABFOLDHLKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KABFOLDHLKK_JJCNNGAKKOE_OFFSET UNITYSDK_OFFSET(0x754920)
#define KABFOLDHLKK_MGKOKIMOALJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KABFOLDHLKK_MOPAJHIDNIA_OFFSET UNITYSDK_OFFSET(0x754D50)
#define KABFOLDHLKK_NHGNDEENIIA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KABFOLDHLKK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5F5B90)
#define KABFOLDHLKK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KABFOLDHLKK_TypeDefinitionIndex = 16523;

struct alignas(4) KABFOLDHLKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABFOLDHLKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KABFOLDHLKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MOPAJHIDNIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABFOLDHLKK_MOPAJHIDNIA_OFFSET))(this);
	}

	::System::Int32 NHGNDEENIIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABFOLDHLKK_NHGNDEENIIA_OFFSET))(this);
	}

	::System::Nullable_1<::HNFADNMADCK> FLNILGBENPA()
	{
		return ((::System::Nullable_1<::HNFADNMADCK>(*)(::PVOID))((::PBYTE)hIl2Cpp + KABFOLDHLKK_FLNILGBENPA_OFFSET))(this);
	}

	::System::Boolean DBHLCLNOGKI(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + KABFOLDHLKK_DBHLCLNOGKI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KABFOLDHLKK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KABFOLDHLKK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KABFOLDHLKK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MGKOKIMOALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABFOLDHLKK_MGKOKIMOALJ_OFFSET))(this);
	}

	::System::Int32 JJCNNGAKKOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABFOLDHLKK_JJCNNGAKKOE_OFFSET))(this);
	}

	/*
	::KABFOLDHLKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KABFOLDHLKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KABFOLDHLKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
