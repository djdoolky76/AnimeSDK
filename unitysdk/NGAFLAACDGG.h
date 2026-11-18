#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPCNOCMFJK.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/ValueType.h"

class GAMICCELBAG;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define NGAFLAACDGG_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x3CF550)
#define NGAFLAACDGG_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x70CAC0)
#define NGAFLAACDGG_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x70CB20)
#define NGAFLAACDGG_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x70CB10)

inline static constexpr unsigned int NGAFLAACDGG_TypeDefinitionIndex = 63533;

struct alignas(8) NGAFLAACDGG
{
	::OMGFCFDABLN KGJGBAJEAPJ; // 0x10
	::GAMICCELBAG* NFFHMICOLHL; // 0x28
	::FNPCNOCMFJK AHLJFHPPANN; // 0x30

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAFLAACDGG_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGAFLAACDGG_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + NGAFLAACDGG_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI, AECAICGCBGF);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAFLAACDGG_MKEFBLKCNKE_OFFSET))(this);
	}
};
