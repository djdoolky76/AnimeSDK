#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B419E4104C2EB790/F9C0997DADCF60A3.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class AC829CE9AA8E9C67;
namespace System { template <typename T> class Action_1; }

#define E990E88B10A95BE1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E990E88B10A95BE1_TypeDefinitionIndex = 6321;

class E990E88B10A95BE1 : public ::E379DE61A548837D
{
public:
	::System::Boolean B45E335C2432D127; // 0x38
	::System::Byte _padding0[0x3];
	::B419E4104C2EB790::F9C0997DADCF60A3 FE2F8A746EB6576B; // 0x3C
	::AB642D1382756991* B8B98F546463D732; // 0x40
	::System::Action_1<::AC829CE9AA8E9C67*>* EA047353A400A791; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E990E88B10A95BE1__CTOR_OFFSET))(this);
	}
};
