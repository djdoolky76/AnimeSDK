#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define FHHBBLACMEI_AMDNKGIAOGM_OFFSET UNITYSDK_OFFSET(0x754920)
#define FHHBBLACMEI_BEOFKDKJGGB_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define FHHBBLACMEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHHBBLACMEI_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FHHBBLACMEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHHBBLACMEI_LBILOAHHEOH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FHHBBLACMEI_LMIBDAJCJIN_OFFSET UNITYSDK_OFFSET(0x763AA0)
#define FHHBBLACMEI_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FHHBBLACMEI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9C4850)
#define FHHBBLACMEI_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHHBBLACMEI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHHBBLACMEI_TypeDefinitionIndex = 11785;

struct alignas(4) FHHBBLACMEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHBBLACMEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 LBILOAHHEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_LBILOAHHEOH_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Boolean LMIBDAJCJIN(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + FHHBBLACMEI_LMIBDAJCJIN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FHHBBLACMEI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 PBHJGJGHHLB, ::System::Int32 DADIDBMHLOI, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FHHBBLACMEI(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FHHBBLACMEI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, PBHJGJGHHLB, DADIDBMHLOI, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 AMDNKGIAOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_AMDNKGIAOGM_OFFSET))(this);
	}

	::System::Int32 BEOFKDKJGGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBBLACMEI_BEOFKDKJGGB_OFFSET))(this);
	}

	/*
	::FHHBBLACMEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHHBBLACMEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHBBLACMEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
