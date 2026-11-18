#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELOCBOPDNAL;
namespace System { class String; }

#define DIFMCHABAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1329E010)

inline static constexpr unsigned int DIFMCHABAFC_TypeDefinitionIndex = 59621;

class DIFMCHABAFC : public ::System::Object
{
public:
	::System::String* KKOEDKIPHHN; // 0x10
	::ELOCBOPDNAL* LMHOLDDIHPF; // 0x18
	::System::Int32 CNBIILAANGA; // 0x20
	::System::Boolean ADNPFJMKDNM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMCHABAFC__CTOR_OFFSET))(this);
	}
};
