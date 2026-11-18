#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOMJDICEKPN;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOCMAKHEHMO_IJKKCLPINGO_KMELKABAFFP_OFFSET UNITYSDK_OFFSET(0x14AB0280)
#define EOCMAKHEHMO_IJKKCLPINGO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB0270)

inline static constexpr unsigned int EOCMAKHEHMO_IJKKCLPINGO_TypeDefinitionIndex = 53271;

class EOCMAKHEHMO_IJKKCLPINGO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FOMJDICEKPN*>* ABEMCOKBNNI; // 0x10
	::System::Collections::Generic::List_1<::FOMJDICEKPN*>* KCKCJBOKJIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCMAKHEHMO_IJKKCLPINGO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::FOMJDICEKPN*>* KMELKABAFFP()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::FOMJDICEKPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCMAKHEHMO_IJKKCLPINGO_KMELKABAFFP_OFFSET))(this);
	}
};
