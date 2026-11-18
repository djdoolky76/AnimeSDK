#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182638C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyDetailPageControllerContext_TypeDefinitionIndex = 68751;

	class UIStrategyDetailPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarListId; // 0x28
		::System::Action_1<::System::UInt32>* OnStrategyBtnClick; // 0x30
		::System::Boolean ShowTeamPanel; // 0x38
		::System::Boolean IsPreviewMode; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 DefaultAvatarId; // 0x3C
		::System::UInt32 PageAvatarId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
