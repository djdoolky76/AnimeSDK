#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OICFHEBNAEE.h"

namespace FlatBuffers { class ByteBuffer; }

#define FFDMCKFFPCI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFDMCKFFPCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFDMCKFFPCI_CKJHFNIEHFM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FFDMCKFFPCI_EJMJMJCIKMF_OFFSET UNITYSDK_OFFSET(0x76FA90)
#define FFDMCKFFPCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFDMCKFFPCI_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755190)
#define FFDMCKFFPCI_JEPAOCGGMCA_OFFSET UNITYSDK_OFFSET(0x754C20)
#define FFDMCKFFPCI_KAAKBIFNADL_OFFSET UNITYSDK_OFFSET(0x7EAEF0)
#define FFDMCKFFPCI_PAIPIOOCDAJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define FFDMCKFFPCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFDMCKFFPCI_TypeDefinitionIndex = 16981;

struct alignas(4) FFDMCKFFPCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDMCKFFPCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean KAAKBIFNADL(::System::Int32 HPMEONKHFGG, ::OICFHEBNAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICFHEBNAEE&))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_KAAKBIFNADL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CKJHFNIEHFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_CKJHFNIEHFM_OFFSET))(this);
	}

	::System::Int32 JEPAOCGGMCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_JEPAOCGGMCA_OFFSET))(this);
	}

	::System::Int32 PAIPIOOCDAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_PAIPIOOCDAJ_OFFSET))(this);
	}

	::System::Boolean EJMJMJCIKMF(::System::Int32 HPMEONKHFGG, ::OICFHEBNAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICFHEBNAEE&))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_EJMJMJCIKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FFDMCKFFPCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFDMCKFFPCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDMCKFFPCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
