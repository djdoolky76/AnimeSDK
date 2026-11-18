#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOHLNFHFPFD;
class MonoUITableScrollV2;
namespace System::Collections { class IEnumerable; }

#define LOHLNFHFPFD_GLNDBFJOCHL_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x14037550)
#define LOHLNFHFPFD_GLNDBFJOCHL_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x14037860)
#define LOHLNFHFPFD_GLNDBFJOCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14037540)

inline static constexpr unsigned int LOHLNFHFPFD_GLNDBFJOCHL_TypeDefinitionIndex = 84945;

class LOHLNFHFPFD_GLNDBFJOCHL : public ::System::Object
{
public:
	::LOHLNFHFPFD* KLHPEBKNIFB; // 0x10
	::MonoUITableScrollV2* LAOANOKHCAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLNFHFPFD_GLNDBFJOCHL__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerable* HGMCGMDMANJ()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLNFHFPFD_GLNDBFJOCHL_HGMCGMDMANJ_OFFSET))(this);
	}

	::System::Void MJHMHMABFCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLNFHFPFD_GLNDBFJOCHL_MJHMHMABFCG_OFFSET))(this);
	}
};
