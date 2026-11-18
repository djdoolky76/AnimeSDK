#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class KJPPANPJBOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_HPGPBEBFEDH_PEBFPEFDAMK_OFFSET UNITYSDK_OFFSET(0x13870250)
#define AOKFPNKJOON_HPGPBEBFEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x13870240)

inline static constexpr unsigned int AOKFPNKJOON_HPGPBEBFEDH_TypeDefinitionIndex = 51463;

class AOKFPNKJOON_HPGPBEBFEDH : public ::System::Object
{
public:
	::System::Single CIIPCCLOHLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HPGPBEBFEDH__CTOR_OFFSET))(this);
	}

	::System::Void PEBFPEFDAMK(::KJPPANPJBOJ* DJCNCELJPOM, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::KJPPANPJBOJ*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HPGPBEBFEDH_PEBFPEFDAMK_OFFSET))(this, DJCNCELJPOM, POLEBKEFMFL);
	}
};
