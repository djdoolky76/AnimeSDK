#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAOFBPGAMLM.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEKPLCPCIKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1300)
#define AEKPLCPCIKA_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7F12E0)
#define AEKPLCPCIKA_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define AEKPLCPCIKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEKPLCPCIKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEKPLCPCIKA_LADNKNLKAID_1_OFFSET UNITYSDK_OFFSET(0x19F0A360)
#define AEKPLCPCIKA_LADNKNLKAID_OFFSET UNITYSDK_OFFSET(0x19F0A2F0)
#define AEKPLCPCIKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1340)
#define AEKPLCPCIKA___INIT_OFFSET UNITYSDK_OFFSET(0x7F12C0)

inline static constexpr unsigned int AEKPLCPCIKA_TypeDefinitionIndex = 9157;

struct alignas(8) AEKPLCPCIKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEKPLCPCIKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::OAOFBPGAMLM> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::OAOFBPGAMLM>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	::AEKPLCPCIKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEKPLCPCIKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AEKPLCPCIKA LADNKNLKAID(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEKPLCPCIKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_LADNKNLKAID_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::OAOFBPGAMLM> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::OAOFBPGAMLM>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AEKPLCPCIKA LADNKNLKAID_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEKPLCPCIKA EIFONLCJOPG)
	{
		return ((::AEKPLCPCIKA(*)(::FlatBuffers::ByteBuffer*, ::AEKPLCPCIKA))((::PBYTE)hIl2Cpp + AEKPLCPCIKA_LADNKNLKAID_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
