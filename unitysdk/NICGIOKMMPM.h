#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NICGIOKMMPM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NICGIOKMMPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NICGIOKMMPM_EEPKDIKJNHN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NICGIOKMMPM_FFPGHEBFCDI_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define NICGIOKMMPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NICGIOKMMPM_ICELNECDLHJ_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NICGIOKMMPM_KEIBHNCDOIF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NICGIOKMMPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1911CE50)
#define NICGIOKMMPM_OEMPJCIGEMD_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NICGIOKMMPM_PFHBMGAPLKA_OFFSET UNITYSDK_OFFSET(0x761240)
#define NICGIOKMMPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NICGIOKMMPM_TypeDefinitionIndex = 16468;

struct alignas(4) NICGIOKMMPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICGIOKMMPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NICGIOKMMPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PFHBMGAPLKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICGIOKMMPM_PFHBMGAPLKA_OFFSET))(this);
	}

	::System::Boolean ICELNECDLHJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NICGIOKMMPM_ICELNECDLHJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OEMPJCIGEMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICGIOKMMPM_OEMPJCIGEMD_OFFSET))(this);
	}

	/*
	static ::NICGIOKMMPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NICGIOKMMPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NICGIOKMMPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KEIBHNCDOIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICGIOKMMPM_KEIBHNCDOIF_OFFSET))(this);
	}

	/*
	::NICGIOKMMPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NICGIOKMMPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NICGIOKMMPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean EEPKDIKJNHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NICGIOKMMPM_EEPKDIKJNHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICGIOKMMPM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean FFPGHEBFCDI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NICGIOKMMPM_FFPGHEBFCDI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
