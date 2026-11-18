#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FIJHGJHDAGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GONKPMNKANP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GONKPMNKANP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B440)
#define GONKPMNKANP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GONKPMNKANP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GONKPMNKANP_NHPOLJIBFFC_1_OFFSET UNITYSDK_OFFSET(0x16652D30)
#define GONKPMNKANP_NHPOLJIBFFC_OFFSET UNITYSDK_OFFSET(0x16652CD0)
#define GONKPMNKANP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B430)
#define GONKPMNKANP___INIT_OFFSET UNITYSDK_OFFSET(0x78B410)

inline static constexpr unsigned int GONKPMNKANP_TypeDefinitionIndex = 17555;

struct alignas(8) GONKPMNKANP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKPMNKANP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONKPMNKANP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKPMNKANP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FIJHGJHDAGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIJHGJHDAGO&))((::PBYTE)hIl2Cpp + GONKPMNKANP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKPMNKANP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GONKPMNKANP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GONKPMNKANP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONKPMNKANP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GONKPMNKANP NHPOLJIBFFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GONKPMNKANP EIFONLCJOPG)
	{
		return ((::GONKPMNKANP(*)(::FlatBuffers::ByteBuffer*, ::GONKPMNKANP))((::PBYTE)hIl2Cpp + GONKPMNKANP_NHPOLJIBFFC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GONKPMNKANP NHPOLJIBFFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GONKPMNKANP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONKPMNKANP_NHPOLJIBFFC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
