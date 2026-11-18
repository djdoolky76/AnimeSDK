#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_MIAHGMNOEKL_KLHPJEHMCCE_OFFSET UNITYSDK_OFFSET(0xEBCC5E0)
#define IFOKBBHAHIE_MIAHGMNOEKL_MPKHDGBIMJJ_OFFSET UNITYSDK_OFFSET(0xEBCC5F0)
#define IFOKBBHAHIE_MIAHGMNOEKL__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC5D0)

inline static constexpr unsigned int IFOKBBHAHIE_MIAHGMNOEKL_TypeDefinitionIndex = 67417;

class IFOKBBHAHIE_MIAHGMNOEKL : public ::System::Object
{
public:
	::System::Action* MBNOJBFDGHD; // 0x10
	::System::Action* GOOPOJIJKKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIAHGMNOEKL__CTOR_OFFSET))(this);
	}

	::System::Void KLHPJEHMCCE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIAHGMNOEKL_KLHPJEHMCCE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MPKHDGBIMJJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIAHGMNOEKL_MPKHDGBIMJJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
