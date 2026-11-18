#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECHCGGPMMEM.h"
#include "unitysdk/FNPCNOCMFJK.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define PABKFONJHNH_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PABKFONJHNH_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x7AF7F0)
#define PABKFONJHNH_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7AF8C0)
#define PABKFONJHNH_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7AF8B0)
#define PABKFONJHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x7AF840)

inline static constexpr unsigned int PABKFONJHNH_TypeDefinitionIndex = 69501;

struct alignas(4) PABKFONJHNH
{
	::ECHCGGPMMEM GAOABCEHEOC; // 0x10
	::System::Byte _padding0[0x6];
	::FNPCNOCMFJK AHLJFHPPANN; // 0x18

	::System::Void _ctor(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PABKFONJHNH__CTOR_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PABKFONJHNH_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PABKFONJHNH_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + PABKFONJHNH_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI, AECAICGCBGF);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + PABKFONJHNH_MKEFBLKCNKE_OFFSET))(this);
	}
};
