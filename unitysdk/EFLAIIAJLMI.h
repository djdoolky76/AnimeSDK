#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EFLAIIAJLMI_ABMFNIBJOFC_OFFSET UNITYSDK_OFFSET(0x756280)
#define EFLAIIAJLMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EFLAIIAJLMI_DAHJLFFKILB_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define EFLAIIAJLMI_DHCOIGBIGMJ_OFFSET UNITYSDK_OFFSET(0x756060)
#define EFLAIIAJLMI_GCAPEGBALHL_OFFSET UNITYSDK_OFFSET(0x756800)
#define EFLAIIAJLMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFLAIIAJLMI_GFANOFJNALF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EFLAIIAJLMI_GJMKMKMNIBF_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define EFLAIIAJLMI_HADMBAPDCCJ_OFFSET UNITYSDK_OFFSET(0x757E20)
#define EFLAIIAJLMI_HNNEGLGNNMP_OFFSET UNITYSDK_OFFSET(0x755190)
#define EFLAIIAJLMI_JGKLJFOANDA_OFFSET UNITYSDK_OFFSET(0x756640)
#define EFLAIIAJLMI_NBMJDDOOGJF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EFLAIIAJLMI_NDOJKNIDOAM_OFFSET UNITYSDK_OFFSET(0x757190)
#define EFLAIIAJLMI_NELBEPFABHO_OFFSET UNITYSDK_OFFSET(0x755710)
#define EFLAIIAJLMI_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EFLAIIAJLMI_NNGGNNKFJED_OFFSET UNITYSDK_OFFSET(0x756510)
#define EFLAIIAJLMI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AE4480)
#define EFLAIIAJLMI_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EFLAIIAJLMI_PDDHPBMCOFK_OFFSET UNITYSDK_OFFSET(0x761710)
#define EFLAIIAJLMI_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x757690)
#define EFLAIIAJLMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EFLAIIAJLMI_TypeDefinitionIndex = 9468;

struct alignas(4) EFLAIIAJLMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFLAIIAJLMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EFLAIIAJLMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFLAIIAJLMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NNGGNNKFJED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_NNGGNNKFJED_OFFSET))(this);
	}

	::System::String* PDDHPBMCOFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_PDDHPBMCOFK_OFFSET))(this);
	}

	::System::Boolean GJMKMKMNIBF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_GJMKMKMNIBF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JGKLJFOANDA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_JGKLJFOANDA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HNNEGLGNNMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_HNNEGLGNNMP_OFFSET))(this);
	}

	::System::String* DAHJLFFKILB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_DAHJLFFKILB_OFFSET))(this);
	}

	::System::Int32 GCAPEGBALHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_GCAPEGBALHL_OFFSET))(this);
	}

	::System::String* HADMBAPDCCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_HADMBAPDCCJ_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	static ::EFLAIIAJLMI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EFLAIIAJLMI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GFANOFJNALF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_GFANOFJNALF_OFFSET))(this);
	}

	::System::String* NELBEPFABHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_NELBEPFABHO_OFFSET))(this);
	}

	::System::Int32 ABMFNIBJOFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_ABMFNIBJOFC_OFFSET))(this);
	}

	::System::Boolean DHCOIGBIGMJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_DHCOIGBIGMJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NDOJKNIDOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_NDOJKNIDOAM_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* NBMJDDOOGJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_NBMJDDOOGJF_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAIIAJLMI_PLNBBDEBIII_OFFSET))(this);
	}
};
