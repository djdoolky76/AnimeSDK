#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PNEJKKMEAOJ_LNAJGACBCGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D5EA0)

inline static constexpr unsigned int PNEJKKMEAOJ_LNAJGACBCGH_TypeDefinitionIndex = 56665;

class PNEJKKMEAOJ_LNAJGACBCGH : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIBaseController*>* PKCFHFEIIMF; // 0x10
	::MoleMole::UIControllerContextBase* PJCLCLCNDCG; // 0x18
	::System::String* AOPKIEIEPJC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_LNAJGACBCGH__CTOR_OFFSET))(this);
	}
};
