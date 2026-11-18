#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

namespace System::Collections { class IList; }

#define FMJHCDKIPBN_AEPENGBLJIM_OELFJBNCFKK_OFFSET UNITYSDK_OFFSET(0x1750B380)
#define FMJHCDKIPBN_AEPENGBLJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1750B370)

inline static constexpr unsigned int FMJHCDKIPBN_AEPENGBLJIM_TypeDefinitionIndex = 59164;

class FMJHCDKIPBN_AEPENGBLJIM : public ::System::Object
{
public:
	::System::Collections::IList* DJLOKMMLFJC; // 0x10
	::OMGFCFDABLN LOACBJBANNC; // 0x18
	::System::Int32 FJHBHALGCKO; // 0x30
	::System::Int32 PFGBLHOCLLG; // 0x34
	::System::Int32 ICACOPNEBHJ; // 0x38
	::System::Int32 AIANEDGADCK; // 0x3C
	::System::Int32 CFPKOBDJLNA; // 0x40
	::System::Int32 FPLGBKMNANA; // 0x44
	::System::Int32 BNLHPGHLKDK; // 0x48
	::System::Int32 CJHKJLBCNEH; // 0x4C
	::System::Int32 IJBMFIKIHDH; // 0x50
	::System::Int32 HJLBDJBCCEO; // 0x54
	::System::Boolean KJBHNMOIGKJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJHCDKIPBN_AEPENGBLJIM__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OELFJBNCFKK()
	{
		return ((::EOAHOOCNDHM(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJHCDKIPBN_AEPENGBLJIM_OELFJBNCFKK_OFFSET))(this);
	}
};
