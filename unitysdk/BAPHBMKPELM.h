#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BAPHBMKPELM_ACHIICJJOOL_OFFSET UNITYSDK_OFFSET(0x761360)
#define BAPHBMKPELM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BAPHBMKPELM_ANHMNOBCHIM_OFFSET UNITYSDK_OFFSET(0x757290)
#define BAPHBMKPELM_BDDLOCPFJDK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BAPHBMKPELM_BFPLHOCKGLO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BAPHBMKPELM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BAPHBMKPELM_CCBCJMEKFBO_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define BAPHBMKPELM_FBDELNDFCPN_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define BAPHBMKPELM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAPHBMKPELM_GIBKGBFNHMH_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define BAPHBMKPELM_IEMMOOBBDIF_OFFSET UNITYSDK_OFFSET(0x754D50)
#define BAPHBMKPELM_KOOCCEPCALH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define BAPHBMKPELM_NCMLJPLBLPP_OFFSET UNITYSDK_OFFSET(0x761240)
#define BAPHBMKPELM_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BAPHBMKPELM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15726D90)
#define BAPHBMKPELM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BAPHBMKPELM_TypeDefinitionIndex = 16494;

struct alignas(4) BAPHBMKPELM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPHBMKPELM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KOOCCEPCALH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_KOOCCEPCALH_OFFSET))(this);
	}

	/*
	static ::BAPHBMKPELM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BAPHBMKPELM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BAPHBMKPELM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NCMLJPLBLPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_NCMLJPLBLPP_OFFSET))(this);
	}

	::System::Boolean CCBCJMEKFBO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BAPHBMKPELM_CCBCJMEKFBO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BAPHBMKPELM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAPHBMKPELM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPHBMKPELM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GIBKGBFNHMH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BAPHBMKPELM_GIBKGBFNHMH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FBDELNDFCPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_FBDELNDFCPN_OFFSET))(this);
	}

	::System::Boolean ACHIICJJOOL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BAPHBMKPELM_ACHIICJJOOL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BDDLOCPFJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_BDDLOCPFJDK_OFFSET))(this);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_NLBOALNBODH_OFFSET))(this);
	}

	::System::Int32 IEMMOOBBDIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_IEMMOOBBDIF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* BFPLHOCKGLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_BFPLHOCKGLO_OFFSET))(this);
	}

	::System::String* ANHMNOBCHIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHBMKPELM_ANHMNOBCHIM_OFFSET))(this);
	}
};
