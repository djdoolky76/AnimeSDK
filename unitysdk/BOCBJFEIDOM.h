#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }

#define BOCBJFEIDOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOCBJFEIDOM_FONAEMLMFHP_OFFSET UNITYSDK_OFFSET(0x7B1C20)
#define BOCBJFEIDOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOCBJFEIDOM_GFKFPPGNPKG_OFFSET UNITYSDK_OFFSET(0x7B1C80)
#define BOCBJFEIDOM_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOCBJFEIDOM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A7F040)
#define BOCBJFEIDOM_PHAOBOLIBCA_OFFSET UNITYSDK_OFFSET(0x7B1970)
#define BOCBJFEIDOM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOCBJFEIDOM_TypeDefinitionIndex = 10270;

struct alignas(4) BOCBJFEIDOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOCBJFEIDOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::HNFADNMADCK> FONAEMLMFHP()
	{
		return ((::System::Nullable_1<::HNFADNMADCK>(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_FONAEMLMFHP_OFFSET))(this);
	}

	::System::Int32 JLEGHNGEBOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_JLEGHNGEBOG_OFFSET))(this);
	}

	/*
	::BOCBJFEIDOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOCBJFEIDOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOCBJFEIDOM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOCBJFEIDOM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Nullable_1<::HNFADNMADCK> PHAOBOLIBCA()
	{
		return ((::System::Nullable_1<::HNFADNMADCK>(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_PHAOBOLIBCA_OFFSET))(this);
	}

	::System::Nullable_1<::HNFADNMADCK> GFKFPPGNPKG()
	{
		return ((::System::Nullable_1<::HNFADNMADCK>(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCBJFEIDOM_GFKFPPGNPKG_OFFSET))(this);
	}
};
