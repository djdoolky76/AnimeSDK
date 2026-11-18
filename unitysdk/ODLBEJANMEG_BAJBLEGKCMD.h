#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AENADJBFGKF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ODLBEJANMEG_BAJBLEGKCMD_EBOKDNCFHNE_OFFSET UNITYSDK_OFFSET(0x1B77A2A0)
#define ODLBEJANMEG_BAJBLEGKCMD_OOIPHADAGAJ_OFFSET UNITYSDK_OFFSET(0x1B77A2C0)
#define ODLBEJANMEG_BAJBLEGKCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77A290)

inline static constexpr unsigned int ODLBEJANMEG_BAJBLEGKCMD_TypeDefinitionIndex = 44377;

class ODLBEJANMEG_BAJBLEGKCMD : public ::System::Object
{
public:
	::System::Action_1<::AENADJBFGKF*>* DLMJCFBENGB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18
	::System::Action_1<::AENADJBFGKF*>* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_BAJBLEGKCMD__CTOR_OFFSET))(this);
	}

	::System::Void EBOKDNCFHNE(::AENADJBFGKF* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AENADJBFGKF*))((::PBYTE)hIl2Cpp + ODLBEJANMEG_BAJBLEGKCMD_EBOKDNCFHNE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OOIPHADAGAJ(::AENADJBFGKF* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AENADJBFGKF*))((::PBYTE)hIl2Cpp + ODLBEJANMEG_BAJBLEGKCMD_OOIPHADAGAJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
