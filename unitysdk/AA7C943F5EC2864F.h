#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

namespace System { template <typename T> class Func_1; }

#define AA7C943F5EC2864F_E0AA501E7AB5CB06_OFFSET UNITYSDK_OFFSET(0x22993D0)
#define AA7C943F5EC2864F_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x2299350)
#define AA7C943F5EC2864F__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int AA7C943F5EC2864F_TypeDefinitionIndex = 7117;

class AA7C943F5EC2864F : public ::E9F68A58DDE88B4D
{
public:
	::System::Func_1<::System::Boolean>* F8CFD613C434E032; // 0x18

	::System::Void E0AA501E7AB5CB06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA7C943F5EC2864F_E0AA501E7AB5CB06_OFFSET))(this);
	}

	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AA7C943F5EC2864F_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA7C943F5EC2864F__CTOR_OFFSET))(this);
	}
};
