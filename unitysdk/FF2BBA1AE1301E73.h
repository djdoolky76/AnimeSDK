#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B97E14F281D47A1B.h"

namespace System { class Object; }

#define FF2BBA1AE1301E73_A36FC2EE6E760B99_OFFSET UNITYSDK_OFFSET(0x1F55910)
#define FF2BBA1AE1301E73_B1EBEA102799E26F_OFFSET UNITYSDK_OFFSET(0x1F55760)
#define FF2BBA1AE1301E73_FE5069AFECBAD54E_OFFSET UNITYSDK_OFFSET(0x1F55830)
#define FF2BBA1AE1301E73__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF53A0)

inline static constexpr unsigned int FF2BBA1AE1301E73_TypeDefinitionIndex = 7696;

class FF2BBA1AE1301E73 : public ::B97E14F281D47A1B
{
public:
	::System::Void FE5069AFECBAD54E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF2BBA1AE1301E73_FE5069AFECBAD54E_OFFSET))(this);
	}

	::System::Void A36FC2EE6E760B99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF2BBA1AE1301E73_A36FC2EE6E760B99_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF2BBA1AE1301E73__CTOR_OFFSET))(this);
	}

	::System::Void B1EBEA102799E26F(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FF2BBA1AE1301E73_B1EBEA102799E26F_OFFSET))(this, A86A90C31A146E9C);
	}
};
