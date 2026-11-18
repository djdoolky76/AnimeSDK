#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FMMPAKIJIOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMMPAKIJIOH_GCJBEDOBOKP_OFFSET UNITYSDK_OFFSET(0x756720)
#define FMMPAKIJIOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMMPAKIJIOH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMMPAKIJIOH_GPJKKJFOBOG_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define FMMPAKIJIOH_JOGFPFMHNHO_OFFSET UNITYSDK_OFFSET(0x755320)
#define FMMPAKIJIOH_KKNMDJCPHJK_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define FMMPAKIJIOH_LPHFNDPMOAJ_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define FMMPAKIJIOH_MCIOJPOILAH_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define FMMPAKIJIOH_MELIIMNAFNF_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define FMMPAKIJIOH_NDGBAGOHMKA_OFFSET UNITYSDK_OFFSET(0x757760)
#define FMMPAKIJIOH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4C9360)
#define FMMPAKIJIOH_ODKAHHILEAJ_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define FMMPAKIJIOH_OGLHPPLIAIE_OFFSET UNITYSDK_OFFSET(0x758200)
#define FMMPAKIJIOH_OLNJPNMDKMK_OFFSET UNITYSDK_OFFSET(0x755890)
#define FMMPAKIJIOH_PKLFGPOGJGM_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define FMMPAKIJIOH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMMPAKIJIOH_TypeDefinitionIndex = 17689;

struct alignas(4) FMMPAKIJIOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMPAKIJIOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LPHFNDPMOAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_LPHFNDPMOAJ_OFFSET))(this);
	}

	::System::String* PKLFGPOGJGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_PKLFGPOGJGM_OFFSET))(this);
	}

	::System::String* ODKAHHILEAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_ODKAHHILEAJ_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 JOGFPFMHNHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_JOGFPFMHNHO_OFFSET))(this);
	}

	::System::Boolean OGLHPPLIAIE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_OGLHPPLIAIE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GPJKKJFOBOG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_GPJKKJFOBOG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KKNMDJCPHJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_KKNMDJCPHJK_OFFSET))(this);
	}

	::System::Int32 MELIIMNAFNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_MELIIMNAFNF_OFFSET))(this);
	}

	::System::Int32 GCJBEDOBOKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_GCJBEDOBOKP_OFFSET))(this);
	}

	/*
	::FMMPAKIJIOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMMPAKIJIOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OLNJPNMDKMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_OLNJPNMDKMK_OFFSET))(this);
	}

	/*
	static ::FMMPAKIJIOH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FMMPAKIJIOH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NDGBAGOHMKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_NDGBAGOHMKA_OFFSET))(this);
	}

	::System::Int32 MCIOJPOILAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMPAKIJIOH_MCIOJPOILAH_OFFSET))(this);
	}
};
