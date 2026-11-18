#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKOPEHLPKNG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FAHLLDKNDAL_AAOANEAKCBC_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define FAHLLDKNDAL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x762060)
#define FAHLLDKNDAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FAHLLDKNDAL_CIHOEFIACDE_OFFSET UNITYSDK_OFFSET(0x7EE4A0)
#define FAHLLDKNDAL_CLIMHIDJPAF_OFFSET UNITYSDK_OFFSET(0x7EE500)
#define FAHLLDKNDAL_COIKMLDMAFH_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define FAHLLDKNDAL_EMIHFPAGBCB_OFFSET UNITYSDK_OFFSET(0x757290)
#define FAHLLDKNDAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FAHLLDKNDAL_HAAMGFCKPII_OFFSET UNITYSDK_OFFSET(0x763D00)
#define FAHLLDKNDAL_HJEIBLDGJCG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FAHLLDKNDAL_LGIAKKLOPFM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FAHLLDKNDAL_MEBILJEFDDH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FAHLLDKNDAL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C144A0)
#define FAHLLDKNDAL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FAHLLDKNDAL_TypeDefinitionIndex = 10802;

struct alignas(4) FAHLLDKNDAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAHLLDKNDAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean COIKMLDMAFH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_COIKMLDMAFH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Nullable_1<::IKOPEHLPKNG> CIHOEFIACDE()
	{
		return ((::System::Nullable_1<::IKOPEHLPKNG>(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_CIHOEFIACDE_OFFSET))(this);
	}

	::System::String* HJEIBLDGJCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_HJEIBLDGJCG_OFFSET))(this);
	}

	/*
	::FAHLLDKNDAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAHLLDKNDAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AAOANEAKCBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_AAOANEAKCBC_OFFSET))(this);
	}

	::System::String* LGIAKKLOPFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_LGIAKKLOPFM_OFFSET))(this);
	}

	::System::String* ACOEONABOJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> HAAMGFCKPII()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_HAAMGFCKPII_OFFSET))(this);
	}

	::System::Nullable_1<::IKOPEHLPKNG> CLIMHIDJPAF()
	{
		return ((::System::Nullable_1<::IKOPEHLPKNG>(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_CLIMHIDJPAF_OFFSET))(this);
	}

	/*
	static ::FAHLLDKNDAL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FAHLLDKNDAL(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MEBILJEFDDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_MEBILJEFDDH_OFFSET))(this);
	}

	::System::String* EMIHFPAGBCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHLLDKNDAL_EMIHFPAGBCB_OFFSET))(this);
	}
};
