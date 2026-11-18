#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPCNOCMFJK.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define FMLMKEKGHOF_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMLMKEKGHOF_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x775BC0)
#define FMLMKEKGHOF_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x775C30)
#define FMLMKEKGHOF_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x775C20)
#define FMLMKEKGHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x775C10)

inline static constexpr unsigned int FMLMKEKGHOF_TypeDefinitionIndex = 59815;

struct alignas(4) FMLMKEKGHOF
{
	::System::Boolean PHNGHMIHAIA; // 0x10
	::System::Byte _padding0[0x7];
	::FNPCNOCMFJK AHLJFHPPANN; // 0x18

	::System::Void _ctor(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMLMKEKGHOF__CTOR_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLMKEKGHOF_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMLMKEKGHOF_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMLMKEKGHOF_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI, AECAICGCBGF);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLMKEKGHOF_MKEFBLKCNKE_OFFSET))(this);
	}
};
