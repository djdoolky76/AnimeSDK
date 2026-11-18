#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CJNDIGHKOCC_CMEBKEEOCBC_KOKNLIIOFOH_OFFSET UNITYSDK_OFFSET(0x13268450)
#define CJNDIGHKOCC_CMEBKEEOCBC__CTOR_OFFSET UNITYSDK_OFFSET(0x13268440)

inline static constexpr unsigned int CJNDIGHKOCC_CMEBKEEOCBC_TypeDefinitionIndex = 58982;

class CJNDIGHKOCC_CMEBKEEOCBC : public ::System::Object
{
public:
	::System::Int32 HJLIBJJBLKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_CMEBKEEOCBC__CTOR_OFFSET))(this);
	}

	::System::String* KOKNLIIOFOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_CMEBKEEOCBC_KOKNLIIOFOH_OFFSET))(this);
	}
};
