#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

class EGOJNNIFDJJ;
namespace Foundation::ViewObject { class ViewObject; }

#define GKNGGHDFOIE_BILADCMGOGJ_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x795DB0)
#define GKNGGHDFOIE_BILADCMGOGJ_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x795DD0)

inline static constexpr unsigned int GKNGGHDFOIE_BILADCMGOGJ_TypeDefinitionIndex = 87778;

struct alignas(8) GKNGGHDFOIE_BILADCMGOGJ
{
	::EGOJNNIFDJJ* MHJEPFNGLNB; // 0x10
	::Foundation::ViewObject::ViewObject* CJHKKDKFGJE; // 0x18
	::System::UInt16 AHAFPPGNKGC; // 0x20

	::System::Boolean FFCPIEDHBDP(::Foundation::ViewObject::ViewObjectHandle FIPCNCNEKDB)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_BILADCMGOGJ_FFCPIEDHBDP_OFFSET))(this, FIPCNCNEKDB);
	}

	::System::Void IBBLCAOMCKF(::EGOJNNIFDJJ* KHILBNJIAKA, ::Foundation::ViewObject::ViewObject* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::EGOJNNIFDJJ*, ::Foundation::ViewObject::ViewObject*))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_BILADCMGOGJ_IBBLCAOMCKF_OFFSET))(this, KHILBNJIAKA, AMNIHACKELI);
	}
};
