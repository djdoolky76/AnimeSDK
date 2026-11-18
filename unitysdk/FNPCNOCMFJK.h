#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define FNPCNOCMFJK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x282350)
#define FNPCNOCMFJK_EGIJCCIPLGB_OFFSET UNITYSDK_OFFSET(0x772610)
#define FNPCNOCMFJK_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x358B00)
#define FNPCNOCMFJK_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7725C0)
#define FNPCNOCMFJK_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7725B0)
#define FNPCNOCMFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int FNPCNOCMFJK_TypeDefinitionIndex = 44597;

struct alignas(8) FNPCNOCMFJK
{
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FNPCNOCMFJK__CTOR_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCNOCMFJK_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FNPCNOCMFJK_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNPCNOCMFJK_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI, AECAICGCBGF);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCNOCMFJK_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Void EGIJCCIPLGB(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + FNPCNOCMFJK_EGIJCCIPLGB_OFFSET))(this, HHIJHDFHPOI);
	}
};
