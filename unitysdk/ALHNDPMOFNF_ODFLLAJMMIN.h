#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define ALHNDPMOFNF_ODFLLAJMMIN_BFFEKALHLLC_OFFSET UNITYSDK_OFFSET(0x1550A820)
#define ALHNDPMOFNF_ODFLLAJMMIN_LCAOEKFEMCB_OFFSET UNITYSDK_OFFSET(0x1550A570)
#define ALHNDPMOFNF_ODFLLAJMMIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1550A560)

inline static constexpr unsigned int ALHNDPMOFNF_ODFLLAJMMIN_TypeDefinitionIndex = 86731;

class ALHNDPMOFNF_ODFLLAJMMIN : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::GameObject*>* KAKAEMACNPB; // 0x10
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x18
	::System::String* HIAIKHDFCLN; // 0x20
	::System::Int32 BGJOPBCCMOC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_ODFLLAJMMIN__CTOR_OFFSET))(this);
	}

	::System::Void LCAOEKFEMCB(::UnityEngine::GameObject* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_ODFLLAJMMIN_LCAOEKFEMCB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BFFEKALHLLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_ODFLLAJMMIN_BFFEKALHLLC_OFFSET))(this);
	}
};
