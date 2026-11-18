#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAD860)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageContext_TypeDefinitionIndex = 62977;

	class UIStrategyGuidePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* team2; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* team1; // 0x30
		::System::UInt32 AvatarID; // 0x38
		::System::Boolean IsSingleTeamMode; // 0x3C
		::System::Boolean IsPreviewMode; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
