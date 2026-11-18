#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JHFNHLBHNIF_AECCINADDJE_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JHFNHLBHNIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHFNHLBHNIF_DINKPBCOFID_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JHFNHLBHNIF_FKLIHKFJMKE_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JHFNHLBHNIF_GDICFOAPEDG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHFNHLBHNIF_GECEFDOGHNF_OFFSET UNITYSDK_OFFSET(0x758780)
#define JHFNHLBHNIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHFNHLBHNIF_JKPHOIIGHKE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JHFNHLBHNIF_MJFACAIGFNP_OFFSET UNITYSDK_OFFSET(0x754920)
#define JHFNHLBHNIF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B631A10)
#define JHFNHLBHNIF_PKIIOLELHCJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JHFNHLBHNIF_PLHJAINNDIK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JHFNHLBHNIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHFNHLBHNIF_TypeDefinitionIndex = 10651;

struct alignas(4) JHFNHLBHNIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHFNHLBHNIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKIIOLELHCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_PKIIOLELHCJ_OFFSET))(this);
	}

	::System::Int32 GECEFDOGHNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_GECEFDOGHNF_OFFSET))(this);
	}

	::System::Int32 FKLIHKFJMKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_FKLIHKFJMKE_OFFSET))(this);
	}

	::System::Int32 DINKPBCOFID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_DINKPBCOFID_OFFSET))(this);
	}

	::System::Int32 GDICFOAPEDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_GDICFOAPEDG_OFFSET))(this);
	}

	/*
	static ::JHFNHLBHNIF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHFNHLBHNIF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MJFACAIGFNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_MJFACAIGFNP_OFFSET))(this);
	}

	::System::Boolean AECCINADDJE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_AECCINADDJE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PLHJAINNDIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_PLHJAINNDIK_OFFSET))(this);
	}

	::System::Int32 JKPHOIIGHKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_JKPHOIIGHKE_OFFSET))(this);
	}

	/*
	::JHFNHLBHNIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHFNHLBHNIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHFNHLBHNIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
