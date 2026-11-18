#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IJNHEDDIODD_AEKHDKAOOOP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IJNHEDDIODD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IJNHEDDIODD_CNFMMEKNEAK_OFFSET UNITYSDK_OFFSET(0x755190)
#define IJNHEDDIODD_EOEEADFECGD_OFFSET UNITYSDK_OFFSET(0x755710)
#define IJNHEDDIODD_FANJJACOLBM_OFFSET UNITYSDK_OFFSET(0x756140)
#define IJNHEDDIODD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJNHEDDIODD_GJDHHDLLNMP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IJNHEDDIODD_IPEBLFDKOLJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IJNHEDDIODD_IPFCFINDBGE_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define IJNHEDDIODD_JLPFJMMGOGP_OFFSET UNITYSDK_OFFSET(0x754920)
#define IJNHEDDIODD_KIOPALBMILM_OFFSET UNITYSDK_OFFSET(0x756440)
#define IJNHEDDIODD_NAHFMJOINGA_OFFSET UNITYSDK_OFFSET(0x757760)
#define IJNHEDDIODD_NDGJLBDKOAB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IJNHEDDIODD_NLGFHMIIICC_OFFSET UNITYSDK_OFFSET(0x761710)
#define IJNHEDDIODD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174843D0)
#define IJNHEDDIODD_OONHGBGOIJB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IJNHEDDIODD_PDBOCDHIAHI_OFFSET UNITYSDK_OFFSET(0x755320)
#define IJNHEDDIODD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IJNHEDDIODD_TypeDefinitionIndex = 14961;

struct alignas(4) IJNHEDDIODD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJNHEDDIODD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IJNHEDDIODD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IJNHEDDIODD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IJNHEDDIODD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NDGJLBDKOAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_NDGJLBDKOAB_OFFSET))(this);
	}

	::System::String* EOEEADFECGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_EOEEADFECGD_OFFSET))(this);
	}

	/*
	::IJNHEDDIODD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJNHEDDIODD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJNHEDDIODD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PDBOCDHIAHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_PDBOCDHIAHI_OFFSET))(this);
	}

	::System::String* NLGFHMIIICC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_NLGFHMIIICC_OFFSET))(this);
	}

	::System::Boolean FANJJACOLBM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IJNHEDDIODD_FANJJACOLBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GJDHHDLLNMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_GJDHHDLLNMP_OFFSET))(this);
	}

	::System::Int32 IPFCFINDBGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_IPFCFINDBGE_OFFSET))(this);
	}

	::System::String* NAHFMJOINGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_NAHFMJOINGA_OFFSET))(this);
	}

	::System::Int32 AEKHDKAOOOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_AEKHDKAOOOP_OFFSET))(this);
	}

	::System::Int32 JLPFJMMGOGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_JLPFJMMGOGP_OFFSET))(this);
	}

	::System::Int32 KIOPALBMILM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_KIOPALBMILM_OFFSET))(this);
	}

	::System::String* IPEBLFDKOLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_IPEBLFDKOLJ_OFFSET))(this);
	}

	::System::Int32 OONHGBGOIJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_OONHGBGOIJB_OFFSET))(this);
	}

	::System::Int32 CNFMMEKNEAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNHEDDIODD_CNFMMEKNEAK_OFFSET))(this);
	}
};
