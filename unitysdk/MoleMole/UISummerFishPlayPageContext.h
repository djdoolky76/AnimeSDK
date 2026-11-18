#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164C1AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageContext_TypeDefinitionIndex = 62148;

	class UISummerFishPlayPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Threading::CancellationTokenSource* CancellationTokenSource; // 0x28
		::System::Action_1<::System::Boolean>* OnClose; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
