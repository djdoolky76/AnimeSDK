#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPCNOCMFJK.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define BLLKKBMFHCC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x379C90)
#define BLLKKBMFHCC_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x67F7C0)
#define BLLKKBMFHCC_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x67F820)
#define BLLKKBMFHCC_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x67F810)

inline static constexpr unsigned int BLLKKBMFHCC_TypeDefinitionIndex = 76039;

struct alignas(4) BLLKKBMFHCC
{
	::OMGFCFDABLN KGJGBAJEAPJ; // 0x10
	::FNPCNOCMFJK AHLJFHPPANN; // 0x28

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLKKBMFHCC_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLLKKBMFHCC_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLLKKBMFHCC_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI, AECAICGCBGF);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLKKBMFHCC_MKEFBLKCNKE_OFFSET))(this);
	}
};
