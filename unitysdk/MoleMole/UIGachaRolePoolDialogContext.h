#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAROLEPOOLDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199B4950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRolePoolDialogContext_TypeDefinitionIndex = 61871;

	class UIGachaRolePoolDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewbieChooseAvatarList; // 0x28
		::System::UInt32 NewbieChooseAvatarCount; // 0x30
		::System::Boolean IsUseNewbieChooseAvatar; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int32 DefaultSelectRoleIndex; // 0x38
		::System::UInt32 TotalGachaTimes; // 0x3C
		::System::UInt32 GachaID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
