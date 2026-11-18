#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EAEJMGGEAKN_AMDNKGIAOGM_OFFSET UNITYSDK_OFFSET(0x754920)
#define EAEJMGGEAKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EAEJMGGEAKN_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EAEJMGGEAKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EAEJMGGEAKN_LBILOAHHEOH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EAEJMGGEAKN_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EAEJMGGEAKN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A55B070)
#define EAEJMGGEAKN_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EAEJMGGEAKN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EAEJMGGEAKN_TypeDefinitionIndex = 17226;

struct alignas(4) EAEJMGGEAKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAEJMGGEAKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::EAEJMGGEAKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAEJMGGEAKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 AMDNKGIAOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_AMDNKGIAOGM_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 LBILOAHHEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_LBILOAHHEOH_OFFSET))(this);
	}

	/*
	static ::EAEJMGGEAKN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 PBHJGJGHHLB, ::System::Int32 DADIDBMHLOI, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EAEJMGGEAKN(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EAEJMGGEAKN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, PBHJGJGHHLB, DADIDBMHLOI, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
