#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"

class DPFMDEBJEMG;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19088DC0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusPlayContext_TypeDefinitionIndex = 86872;

	class ChatPlusPlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::System::Action_1<::DPFMDEBJEMG*>* OnFinishCallBack; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
