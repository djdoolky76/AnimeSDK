#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JEKJJMLJKNJ_AAKKADAJPMN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JEKJJMLJKNJ_ALBJKKOICOD_OFFSET UNITYSDK_OFFSET(0x758320)
#define JEKJJMLJKNJ_BFPPACAOGID_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JEKJJMLJKNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEKJJMLJKNJ_BMOHIOFNNAN_OFFSET UNITYSDK_OFFSET(0x754970)
#define JEKJJMLJKNJ_CLHFOJAKENJ_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define JEKJJMLJKNJ_DKJKDAFMOKK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JEKJJMLJKNJ_FFFHGJKNENK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JEKJJMLJKNJ_FMJOKOEBNDG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEKJJMLJKNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEKJJMLJKNJ_GOHONFNBHAP_OFFSET UNITYSDK_OFFSET(0x757190)
#define JEKJJMLJKNJ_LJGBLEBIGMB_OFFSET UNITYSDK_OFFSET(0x756490)
#define JEKJJMLJKNJ_LKHCLDBBJOG_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JEKJJMLJKNJ_NBOBDBMHELN_OFFSET UNITYSDK_OFFSET(0x758780)
#define JEKJJMLJKNJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15AA5BB0)
#define JEKJJMLJKNJ_OHNMFDEHMAI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JEKJJMLJKNJ_PEEDFNKLHIB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JEKJJMLJKNJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEKJJMLJKNJ_TypeDefinitionIndex = 15369;

struct alignas(4) JEKJJMLJKNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CLHFOJAKENJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_CLHFOJAKENJ_OFFSET))(this);
	}

	::System::Int32 FMJOKOEBNDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_FMJOKOEBNDG_OFFSET))(this);
	}

	::System::String* DKJKDAFMOKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_DKJKDAFMOKK_OFFSET))(this);
	}

	::System::Int32 NBOBDBMHELN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_NBOBDBMHELN_OFFSET))(this);
	}

	::System::String* ALBJKKOICOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_ALBJKKOICOD_OFFSET))(this);
	}

	::System::Int32 FFFHGJKNENK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_FFFHGJKNENK_OFFSET))(this);
	}

	::System::String* OHNMFDEHMAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_OHNMFDEHMAI_OFFSET))(this);
	}

	::System::String* GOHONFNBHAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_GOHONFNBHAP_OFFSET))(this);
	}

	::System::String* AAKKADAJPMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_AAKKADAJPMN_OFFSET))(this);
	}

	::System::String* PEEDFNKLHIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_PEEDFNKLHIB_OFFSET))(this);
	}

	::System::String* LKHCLDBBJOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_LKHCLDBBJOG_OFFSET))(this);
	}

	::System::Int32 BMOHIOFNNAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_BMOHIOFNNAN_OFFSET))(this);
	}

	/*
	::JEKJJMLJKNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEKJJMLJKNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JEKJJMLJKNJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JEKJJMLJKNJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean LJGBLEBIGMB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_LJGBLEBIGMB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BFPPACAOGID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKJJMLJKNJ_BFPPACAOGID_OFFSET))(this);
	}
};
