#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JIMENFFIOAK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JIMENFFIOAK_AFOGPFOEDIJ_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define JIMENFFIOAK_AHIMBMJDDJJ_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define JIMENFFIOAK_BCOGCADNCHN_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define JIMENFFIOAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JIMENFFIOAK_BNFDBJOOHND_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define JIMENFFIOAK_CDOAAHKEOJA_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define JIMENFFIOAK_CHNCEBEGEFL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JIMENFFIOAK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JIMENFFIOAK_DOPNGEDOBHH_OFFSET UNITYSDK_OFFSET(0x755890)
#define JIMENFFIOAK_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JIMENFFIOAK_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JIMENFFIOAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIMENFFIOAK_GNFFOMCKAJI_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JIMENFFIOAK_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JIMENFFIOAK_LDHNCAHIDNL_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JIMENFFIOAK_NECBGDLDDDM_OFFSET UNITYSDK_OFFSET(0x757760)
#define JIMENFFIOAK_NMOLNPGNCBN_OFFSET UNITYSDK_OFFSET(0x755320)
#define JIMENFFIOAK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B8978B0)
#define JIMENFFIOAK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JIMENFFIOAK_TypeDefinitionIndex = 15332;

struct alignas(4) JIMENFFIOAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMENFFIOAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NECBGDLDDDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_NECBGDLDDDM_OFFSET))(this);
	}

	/*
	::JIMENFFIOAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIMENFFIOAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMENFFIOAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIMENFFIOAK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JIMENFFIOAK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JIMENFFIOAK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean AFOGPFOEDIJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_AFOGPFOEDIJ_OFFSET))(this);
	}

	::System::Int32 DOPNGEDOBHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_DOPNGEDOBHH_OFFSET))(this);
	}

	::System::String* GNFFOMCKAJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_GNFFOMCKAJI_OFFSET))(this);
	}

	::System::Int32 LDHNCAHIDNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_LDHNCAHIDNL_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 NMOLNPGNCBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_NMOLNPGNCBN_OFFSET))(this);
	}

	::System::String* BCOGCADNCHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_BCOGCADNCHN_OFFSET))(this);
	}

	::System::Int32 CHNCEBEGEFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_CHNCEBEGEFL_OFFSET))(this);
	}

	::System::Boolean CDOAAHKEOJA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_CDOAAHKEOJA_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_FELDILHMMIK_OFFSET))(this);
	}

	::System::Int32 BNFDBJOOHND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_BNFDBJOOHND_OFFSET))(this);
	}

	::System::Int32 AHIMBMJDDJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_AHIMBMJDDJJ_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMENFFIOAK_HDDENLNIPMA_OFFSET))(this);
	}
};
