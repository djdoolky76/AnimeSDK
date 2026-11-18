#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OCHBNFHMAAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OCHBNFHMAAP_ANHIEMJMMJE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OCHBNFHMAAP_BBNMKAEDHOC_OFFSET UNITYSDK_OFFSET(0x755890)
#define OCHBNFHMAAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OCHBNFHMAAP_CFKEPBBJCDK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OCHBNFHMAAP_COOIHMJONCN_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define OCHBNFHMAAP_DGNCFIJEFLJ_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define OCHBNFHMAAP_EBNDELHPPEI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OCHBNFHMAAP_EJAPBADEGPM_OFFSET UNITYSDK_OFFSET(0x758780)
#define OCHBNFHMAAP_EJKKPADAADJ_OFFSET UNITYSDK_OFFSET(0x756440)
#define OCHBNFHMAAP_FFMGJEDKKCF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OCHBNFHMAAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCHBNFHMAAP_GMHNPGMKGKG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OCHBNFHMAAP_MKOMPBDJNEM_OFFSET UNITYSDK_OFFSET(0x758840)
#define OCHBNFHMAAP_NBEPPBGHEJF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OCHBNFHMAAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCF7820)
#define OCHBNFHMAAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OCHBNFHMAAP_TypeDefinitionIndex = 16107;

struct alignas(4) OCHBNFHMAAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCHBNFHMAAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BBNMKAEDHOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_BBNMKAEDHOC_OFFSET))(this);
	}

	::System::Int32 COOIHMJONCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_COOIHMJONCN_OFFSET))(this);
	}

	::System::Int32 EJKKPADAADJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_EJKKPADAADJ_OFFSET))(this);
	}

	::System::Int32 CFKEPBBJCDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_CFKEPBBJCDK_OFFSET))(this);
	}

	::System::Int32 ANHIEMJMMJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_ANHIEMJMMJE_OFFSET))(this);
	}

	::System::Int32 FFMGJEDKKCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_FFMGJEDKKCF_OFFSET))(this);
	}

	::System::Int32 GMHNPGMKGKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_GMHNPGMKGKG_OFFSET))(this);
	}

	/*
	static ::OCHBNFHMAAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OCHBNFHMAAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NBEPPBGHEJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_NBEPPBGHEJF_OFFSET))(this);
	}

	::System::Int32 EJAPBADEGPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_EJAPBADEGPM_OFFSET))(this);
	}

	::System::Boolean DGNCFIJEFLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_DGNCFIJEFLJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::OCHBNFHMAAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCHBNFHMAAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MKOMPBDJNEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_MKOMPBDJNEM_OFFSET))(this);
	}

	::System::Int32 EBNDELHPPEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBNFHMAAP_EBNDELHPPEI_OFFSET))(this);
	}
};
