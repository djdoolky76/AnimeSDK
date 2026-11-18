#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FMMKHOIALPN.h"

namespace System { class Exception; }
namespace System { class String; }

#define NBOMDDJJJGK_HDIJLGKADGH_OFFSET UNITYSDK_OFFSET(0x1CEAC100)
#define NBOMDDJJJGK_IENBHBKLBKJ_OFFSET UNITYSDK_OFFSET(0x1CEAC0B0)
#define NBOMDDJJJGK_JKBCBKADFLA_OFFSET UNITYSDK_OFFSET(0x1CEAC190)

inline static constexpr unsigned int NBOMDDJJJGK_TypeDefinitionIndex = 34739;

class NBOMDDJJJGK : public ::System::Object
{
public:
	static ::System::Void IENBHBKLBKJ(::FMMKHOIALPN& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::FMMKHOIALPN&))((::PBYTE)hIl2Cpp + NBOMDDJJJGK_IENBHBKLBKJ_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Void HDIJLGKADGH(::FMMKHOIALPN& LJBPECKCCEA, ::System::Exception* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::FMMKHOIALPN&, ::System::Exception*))((::PBYTE)hIl2Cpp + NBOMDDJJJGK_HDIJLGKADGH_OFFSET))(LJBPECKCCEA, BLLNHDIDKPA);
	}

	static ::System::String* JKBCBKADFLA(::FMMKHOIALPN& LJBPECKCCEA)
	{
		return ((::System::String*(*)(::FMMKHOIALPN&))((::PBYTE)hIl2Cpp + NBOMDDJJJGK_JKBCBKADFLA_OFFSET))(LJBPECKCCEA);
	}
};
