#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EPMGMDOHJKF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPMGMDOHJKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPMGMDOHJKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPMGMDOHJKF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define EPMGMDOHJKF_KAPMHJAFNKG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EPMGMDOHJKF_KDLCMCHAAIP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EPMGMDOHJKF_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EPMGMDOHJKF_ONNMCMINPCA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define EPMGMDOHJKF_PFLNFLAFCAL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define EPMGMDOHJKF_PIINPFDEACF_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define EPMGMDOHJKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPMGMDOHJKF_TypeDefinitionIndex = 16980;

struct alignas(4) EPMGMDOHJKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPMGMDOHJKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean PIINPFDEACF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_PIINPFDEACF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KAPMHJAFNKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_KAPMHJAFNKG_OFFSET))(this);
	}

	/*
	::EPMGMDOHJKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPMGMDOHJKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KDLCMCHAAIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_KDLCMCHAAIP_OFFSET))(this);
	}

	::System::Int32 PFLNFLAFCAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_PFLNFLAFCAL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Int32 ONNMCMINPCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGMDOHJKF_ONNMCMINPCA_OFFSET))(this);
	}
};
