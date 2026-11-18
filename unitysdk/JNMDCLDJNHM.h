#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JNMDCLDJNHM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JNMDCLDJNHM_BENBBMFDNCD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JNMDCLDJNHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JNMDCLDJNHM_BLGJJPDOPIB_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JNMDCLDJNHM_DNGBGLPNGBN_OFFSET UNITYSDK_OFFSET(0x758590)
#define JNMDCLDJNHM_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754970)
#define JNMDCLDJNHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNMDCLDJNHM_HINFAAJOMEL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JNMDCLDJNHM_IPCODGBEGEN_OFFSET UNITYSDK_OFFSET(0x757290)
#define JNMDCLDJNHM_MLMNFNPAJFC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JNMDCLDJNHM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C2E5A0)
#define JNMDCLDJNHM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JNMDCLDJNHM_TypeDefinitionIndex = 16348;

struct alignas(4) JNMDCLDJNHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNMDCLDJNHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean DNGBGLPNGBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_DNGBGLPNGBN_OFFSET))(this);
	}

	::System::Int32 BENBBMFDNCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_BENBBMFDNCD_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_EHEDNGGDAKF_OFFSET))(this);
	}

	/*
	static ::JNMDCLDJNHM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JNMDCLDJNHM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean HINFAAJOMEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_HINFAAJOMEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BLGJJPDOPIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_BLGJJPDOPIB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IPCODGBEGEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_IPCODGBEGEN_OFFSET))(this);
	}

	/*
	::JNMDCLDJNHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNMDCLDJNHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MLMNFNPAJFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMDCLDJNHM_MLMNFNPAJFC_OFFSET))(this);
	}
};
