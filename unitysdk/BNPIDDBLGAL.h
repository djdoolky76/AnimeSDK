#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNOEOHJEJGN.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNPIDDBLGAL_EGIJCCIPLGB_OFFSET UNITYSDK_OFFSET(0x16A03110)
#define BNPIDDBLGAL_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x16A022D0)
#define BNPIDDBLGAL_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x16A023C0)
#define BNPIDDBLGAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A02280)

inline static constexpr unsigned int BNPIDDBLGAL_TypeDefinitionIndex = 87943;

class BNPIDDBLGAL : public ::System::Object
{
public:
	::System::String* HPPBBADPCPD; // 0x10
	::System::String* GBAFGJLNMPK; // 0x18
	::System::String* CCLINDELKAL; // 0x20
	::System::String* GJBAPJOJNOC; // 0x28
	::PNOEOHJEJGN HPIPOHALMKD; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* LJDAIIIDGED; // 0x68
	::System::String* MMBEPFEDOEC; // 0x70
	::System::String* HICDOCNALAF; // 0x78
	::System::String* PNLPMBFOEIL; // 0x80
	::System::Boolean BJAPOFFBOFI; // 0x88
	::System::Boolean BKIKIIGJLJD; // 0x89
	::System::Boolean CKFCGJBCBIN; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIDDBLGAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIDDBLGAL_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + BNPIDDBLGAL_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void EGIJCCIPLGB(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + BNPIDDBLGAL_EGIJCCIPLGB_OFFSET))(this, HHIJHDFHPOI);
	}
};
