#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOKIMDGBFKI;
namespace MoleMole { class UIInLevelMainPageController; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define NOKIMDGBFKI_AKJAJHKOPMB_CLLHDGIBIPL_OFFSET UNITYSDK_OFFSET(0x11F8E560)
#define NOKIMDGBFKI_AKJAJHKOPMB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8E550)

inline static constexpr unsigned int NOKIMDGBFKI_AKJAJHKOPMB_TypeDefinitionIndex = 60992;

class NOKIMDGBFKI_AKJAJHKOPMB : public ::System::Object
{
public:
	::System::Threading::Tasks::TaskCompletionSource_1<::System::Boolean>* BILIICMJOEE; // 0x10
	::NOKIMDGBFKI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_AKJAJHKOPMB__CTOR_OFFSET))(this);
	}

	::System::Void CLLHDGIBIPL(::MoleMole::UIInLevelMainPageController* LGBHOFGBGHC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMainPageController*))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_AKJAJHKOPMB_CLLHDGIBIPL_OFFSET))(this, LGBHOFGBGHC);
	}
};
