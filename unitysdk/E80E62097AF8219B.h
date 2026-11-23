#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B419E4104C2EB790/F4699F4E0AFFED54.h"
#include "unitysdk/E379DE61A548837D.h"

class A0D3039DB81F8714;
class AB642D1382756991;
namespace System { template <typename T> class Action_1; }

#define E80E62097AF8219B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E80E62097AF8219B_TypeDefinitionIndex = 6324;

class E80E62097AF8219B : public ::E379DE61A548837D
{
public:
	::System::Boolean B45E335C2432D127; // 0x38
	::System::Byte _padding0[0x3];
	::B419E4104C2EB790::F4699F4E0AFFED54 BF3B97890E953B1B; // 0x3C
	::AB642D1382756991* B8B98F546463D732; // 0x40
	::System::Action_1<::A0D3039DB81F8714*>* EA047353A400A791; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E80E62097AF8219B__CTOR_OFFSET))(this);
	}
};
