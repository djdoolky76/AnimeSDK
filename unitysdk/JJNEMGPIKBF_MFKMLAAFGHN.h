#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJNEMGPIKBF_LGFPLGEEBHG;

#define JJNEMGPIKBF_MFKMLAAFGHN_DECNGMNNIPK_OFFSET UNITYSDK_OFFSET(0x1762C560)
#define JJNEMGPIKBF_MFKMLAAFGHN_EFMCEPCBHPN_OFFSET UNITYSDK_OFFSET(0x1762C640)
#define JJNEMGPIKBF_MFKMLAAFGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1762C550)

inline static constexpr unsigned int JJNEMGPIKBF_MFKMLAAFGHN_TypeDefinitionIndex = 65492;

class JJNEMGPIKBF_MFKMLAAFGHN : public ::System::Object
{
public:
	::JJNEMGPIKBF_LGFPLGEEBHG* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNEMGPIKBF_MFKMLAAFGHN__CTOR_OFFSET))(this);
	}

	::System::Boolean DECNGMNNIPK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNEMGPIKBF_MFKMLAAFGHN_DECNGMNNIPK_OFFSET))(this);
	}

	::System::Boolean EFMCEPCBHPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNEMGPIKBF_MFKMLAAFGHN_EFMCEPCBHPN_OFFSET))(this);
	}
};
