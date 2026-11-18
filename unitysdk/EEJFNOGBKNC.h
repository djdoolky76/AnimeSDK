#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EEJFNOGBKNC_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x758780)
#define EEJFNOGBKNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EEJFNOGBKNC_CIKAKBAGOHM_OFFSET UNITYSDK_OFFSET(0x756490)
#define EEJFNOGBKNC_EFNEBLCNBPA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EEJFNOGBKNC_GDKCBOHCOCK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EEJFNOGBKNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEJFNOGBKNC_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EEJFNOGBKNC_HKIOPOMFLDK_OFFSET UNITYSDK_OFFSET(0x756440)
#define EEJFNOGBKNC_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EEJFNOGBKNC_MDIPMLGMOEL_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define EEJFNOGBKNC_MMMKBIGBDDB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EEJFNOGBKNC_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x757190)
#define EEJFNOGBKNC_MPIKICPHPCB_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define EEJFNOGBKNC_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EEJFNOGBKNC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1951B6C0)
#define EEJFNOGBKNC_OKHJNNEJKDG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EEJFNOGBKNC_PNPDDHJBGGO_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define EEJFNOGBKNC_POKLHIKGCOC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define EEJFNOGBKNC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EEJFNOGBKNC_TypeDefinitionIndex = 10583;

struct alignas(4) EEJFNOGBKNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEJFNOGBKNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean CIKAKBAGOHM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_CIKAKBAGOHM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MDIPMLGMOEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_MDIPMLGMOEL_OFFSET))(this);
	}

	::System::Int32 EFNEBLCNBPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_EFNEBLCNBPA_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::Int32 MMMKBIGBDDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_MMMKBIGBDDB_OFFSET))(this);
	}

	::System::Int32 HKIOPOMFLDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_HKIOPOMFLDK_OFFSET))(this);
	}

	::System::Int32 PNPDDHJBGGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_PNPDDHJBGGO_OFFSET))(this);
	}

	::System::String* OKHJNNEJKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_OKHJNNEJKDG_OFFSET))(this);
	}

	::System::Int32 GDKCBOHCOCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_GDKCBOHCOCK_OFFSET))(this);
	}

	::System::Int32 POKLHIKGCOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_POKLHIKGCOC_OFFSET))(this);
	}

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_LNLNHEMFAEC_OFFSET))(this);
	}

	/*
	static ::EEJFNOGBKNC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EEJFNOGBKNC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_GPBFENDAJMF_OFFSET))(this);
	}

	/*
	::EEJFNOGBKNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEJFNOGBKNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean MPIKICPHPCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFNOGBKNC_MPIKICPHPCB_OFFSET))(this);
	}
};
