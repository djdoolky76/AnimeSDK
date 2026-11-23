#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BB785F41B9DC4704.h"
#include "unitysdk/EEAC6217FF06E6B7.h"

class AB642D1382756991;
class EEA5DC163AF8CAFD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E7FEEAB70BDBBC11_A49FF3EFBAE289F9_OFFSET UNITYSDK_OFFSET(0x1E851F0)
#define E7FEEAB70BDBBC11__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E7FEEAB70BDBBC11_TypeDefinitionIndex = 9601;

class E7FEEAB70BDBBC11 : public ::BB785F41B9DC4704
{
public:
	::System::Void A49FF3EFBAE289F9(::AB642D1382756991* B31D2A0991A78809, ::System::Collections::Generic::List_1<::EEAC6217FF06E6B7>* ACCD8D60884AACDA, ::EEA5DC163AF8CAFD* E8AFF2035EE56EEA)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*, ::System::Collections::Generic::List_1<::EEAC6217FF06E6B7>*, ::EEA5DC163AF8CAFD*))((::PBYTE)hIl2Cpp + E7FEEAB70BDBBC11_A49FF3EFBAE289F9_OFFSET))(this, B31D2A0991A78809, ACCD8D60884AACDA, E8AFF2035EE56EEA);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7FEEAB70BDBBC11__CTOR_OFFSET))(this);
	}
};
