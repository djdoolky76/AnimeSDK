#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define CHFJLNEHAAF_LNKGCGDKHHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F2A2D0)

inline static constexpr unsigned int CHFJLNEHAAF_LNKGCGDKHHA_TypeDefinitionIndex = 87343;

class CHFJLNEHAAF_LNKGCGDKHHA : public ::System::Object
{
public:
	::System::String* OAKGFCEGIAE; // 0x10
	::System::Exception* BENPBLMOAKD; // 0x18
	::System::String* NGHLLDAJJJE; // 0x20
	::System::String* BLLNHDIDKPA; // 0x28
	::System::Net::HttpStatusCode AFDKMJOFHPL; // 0x30
	::System::Byte _padding0[0x4];
	::System::Int64 DEDFMABLHAJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNKGCGDKHHA__CTOR_OFFSET))(this);
	}
};
