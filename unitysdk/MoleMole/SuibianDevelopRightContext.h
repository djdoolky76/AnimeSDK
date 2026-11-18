#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDFMOBLBPGH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SUIBIANDEVELOPRIGHTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5E770)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianDevelopRightContext_TypeDefinitionIndex = 70979;

	class SuibianDevelopRightContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::EDFMOBLBPGH>* onClickTab; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANDEVELOPRIGHTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
