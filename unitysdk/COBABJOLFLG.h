#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/ValueType.h"

class LCFAKNCOMEF;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define COBABJOLFLG_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x78D9A0)
#define COBABJOLFLG_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x78D990)
#define COBABJOLFLG_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x78D8F0)

inline static constexpr unsigned int COBABJOLFLG_TypeDefinitionIndex = 61028;

struct alignas(8) COBABJOLFLG
{
	::System::Int32 DFOGMAHNMLK; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* GKOEFPJEPHM; // 0x18
	::OMGFCFDABLN EOIOBFDDDHN; // 0x20
	::System::Int32 NBCMHLMCDBI; // 0x38
	::System::Boolean CNFAAKBNDBA; // 0x3C
	::System::Byte _padding1[0x3];
	::LCFAKNCOMEF* KLBGAHPJAJO; // 0x40

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + COBABJOLFLG_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + COBABJOLFLG_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + COBABJOLFLG_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
