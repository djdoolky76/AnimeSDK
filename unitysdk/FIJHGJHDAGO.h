#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FIJHGJHDAGO_BFIAHJPKHFD_OFFSET UNITYSDK_OFFSET(0x754C20)
#define FIJHGJHDAGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FIJHGJHDAGO_DIKANAPEPMN_OFFSET UNITYSDK_OFFSET(0x754920)
#define FIJHGJHDAGO_EGFPBBEPEPL_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define FIJHGJHDAGO_FCKFJGAJBNI_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define FIJHGJHDAGO_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FIJHGJHDAGO_FLJEKAAMDAL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define FIJHGJHDAGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIJHGJHDAGO_KGOMNLKKHGL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define FIJHGJHDAGO_KNCAJBBCCFE_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define FIJHGJHDAGO_MBDMLPJOCKO_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define FIJHGJHDAGO_MKMIGBNPHEA_OFFSET UNITYSDK_OFFSET(0x754A70)
#define FIJHGJHDAGO_NKLPDOMANMJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define FIJHGJHDAGO_OEOFJFJFMLM_OFFSET UNITYSDK_OFFSET(0x754E10)
#define FIJHGJHDAGO_PPNCIEILGAP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FIJHGJHDAGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FIJHGJHDAGO_TypeDefinitionIndex = 17026;

struct alignas(4) FIJHGJHDAGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJHGJHDAGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DIKANAPEPMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_DIKANAPEPMN_OFFSET))(this);
	}

	::System::Int32 NKLPDOMANMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_NKLPDOMANMJ_OFFSET))(this);
	}

	::System::Boolean FLJEKAAMDAL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_FLJEKAAMDAL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FIJHGJHDAGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIJHGJHDAGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MKMIGBNPHEA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_MKMIGBNPHEA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MBDMLPJOCKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_MBDMLPJOCKO_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Boolean FCKFJGAJBNI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_FCKFJGAJBNI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BFIAHJPKHFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_BFIAHJPKHFD_OFFSET))(this);
	}

	::System::Int32 PPNCIEILGAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_PPNCIEILGAP_OFFSET))(this);
	}

	::System::Boolean EGFPBBEPEPL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_EGFPBBEPEPL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KGOMNLKKHGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_KGOMNLKKHGL_OFFSET))(this);
	}

	::System::Int32 KNCAJBBCCFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_KNCAJBBCCFE_OFFSET))(this);
	}

	::System::Boolean OEOFJFJFMLM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHGJHDAGO_OEOFJFJFMLM_OFFSET))(this);
	}
};
