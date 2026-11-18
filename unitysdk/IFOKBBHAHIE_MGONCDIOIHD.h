#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLMGBCKGCF;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IFOKBBHAHIE_MGONCDIOIHD_BDBFPJDHCKA_OFFSET UNITYSDK_OFFSET(0x165730D0)
#define IFOKBBHAHIE_MGONCDIOIHD_HHDPJJMOEAJ_OFFSET UNITYSDK_OFFSET(0x165731C0)
#define IFOKBBHAHIE_MGONCDIOIHD__CTOR_OFFSET UNITYSDK_OFFSET(0x165730C0)

inline static constexpr unsigned int IFOKBBHAHIE_MGONCDIOIHD_TypeDefinitionIndex = 67438;

class IFOKBBHAHIE_MGONCDIOIHD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::FOLMGBCKGCF*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MGONCDIOIHD__CTOR_OFFSET))(this);
	}

	::System::Void BDBFPJDHCKA(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MGONCDIOIHD_BDBFPJDHCKA_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void HHDPJJMOEAJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MGONCDIOIHD_HHDPJJMOEAJ_OFFSET))(this, NAPFALLANDL);
	}
};
