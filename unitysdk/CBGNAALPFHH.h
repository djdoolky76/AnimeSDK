#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CBGNAALPFHH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754970)
#define CBGNAALPFHH_AMIEENFFFFK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CBGNAALPFHH_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CBGNAALPFHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CBGNAALPFHH_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x757190)
#define CBGNAALPFHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBGNAALPFHH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754920)
#define CBGNAALPFHH_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x758780)
#define CBGNAALPFHH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CBGNAALPFHH_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CBGNAALPFHH_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CBGNAALPFHH_PBDHGENIPKH_OFFSET UNITYSDK_OFFSET(0x755190)
#define CBGNAALPFHH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CBGNAALPFHH_TypeDefinitionIndex = 16943;

struct alignas(4) CBGNAALPFHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBGNAALPFHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CBGNAALPFHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBGNAALPFHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBGNAALPFHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AMIEENFFFFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_AMIEENFFFFK_OFFSET))(this);
	}

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_OOAMMDCDIGF_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_FELDILHMMIK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 PBDHGENIPKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_PBDHGENIPKH_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNAALPFHH_APCKPKCNFJE_OFFSET))(this);
	}
};
