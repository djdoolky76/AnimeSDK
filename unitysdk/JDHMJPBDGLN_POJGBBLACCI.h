#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IADDHANFKPG;
class JDHMJPBDGLN_CJHKPDDCDDC;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDHMJPBDGLN_POJGBBLACCI_PLIFNMMEBMC_OFFSET UNITYSDK_OFFSET(0x160D9DD0)
#define JDHMJPBDGLN_POJGBBLACCI__CTOR_OFFSET UNITYSDK_OFFSET(0x160D9DC0)

inline static constexpr unsigned int JDHMJPBDGLN_POJGBBLACCI_TypeDefinitionIndex = 83956;

class JDHMJPBDGLN_POJGBBLACCI : public ::System::Object
{
public:
	::JDHMJPBDGLN_CJHKPDDCDDC* FGBNBFHOKAA; // 0x10
	::System::Action_2<::System::Boolean, ::IADDHANFKPG*>* AMHGBGMOMLL; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* DINBPDAKNIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_POJGBBLACCI__CTOR_OFFSET))(this);
	}

	::System::Void PLIFNMMEBMC(::System::Boolean IGAAKDOIPNN, ::IADDHANFKPG* LKEEOKHHGBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_POJGBBLACCI_PLIFNMMEBMC_OFFSET))(this, IGAAKDOIPNN, LKEEOKHHGBN);
	}
};
