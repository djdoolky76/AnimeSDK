#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BJCMHPNAICD_AGLHNCBOEKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BJCMHPNAICD_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define BJCMHPNAICD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BJCMHPNAICD_FDGFFGLNNMI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BJCMHPNAICD_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BJCMHPNAICD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJCMHPNAICD_JDMEBNCNIHL_OFFSET UNITYSDK_OFFSET(0x7EA020)
#define BJCMHPNAICD_JMKEJHJMHOA_OFFSET UNITYSDK_OFFSET(0x756720)
#define BJCMHPNAICD_NKDELEHNHMG_OFFSET UNITYSDK_OFFSET(0x7EA0A0)
#define BJCMHPNAICD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AC7910)
#define BJCMHPNAICD_PEAGEFDPFJP_OFFSET UNITYSDK_OFFSET(0x754D50)
#define BJCMHPNAICD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BJCMHPNAICD_TypeDefinitionIndex = 10758;

struct alignas(4) BJCMHPNAICD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJCMHPNAICD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PEAGEFDPFJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_PEAGEFDPFJP_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_AKJAILHOIEC_OFFSET))(this);
	}

	::System::Boolean JDMEBNCNIHL(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + BJCMHPNAICD_JDMEBNCNIHL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::Boolean NKDELEHNHMG(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + BJCMHPNAICD_NKDELEHNHMG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BJCMHPNAICD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJCMHPNAICD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJCMHPNAICD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BJCMHPNAICD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BJCMHPNAICD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BJCMHPNAICD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JMKEJHJMHOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_JMKEJHJMHOA_OFFSET))(this);
	}

	::System::Int32 FDGFFGLNNMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_FDGFFGLNNMI_OFFSET))(this);
	}

	::System::Int32 AGLHNCBOEKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCMHPNAICD_AGLHNCBOEKP_OFFSET))(this);
	}
};
