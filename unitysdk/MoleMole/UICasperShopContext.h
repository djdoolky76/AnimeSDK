#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3629F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICasperShopContext_TypeDefinitionIndex = 44930;

	class UICasperShopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* BackToMainCityButtonAction; // 0x28
		::System::String* DetailTitle1; // 0x30
		::System::String* DetailContent; // 0x38
		::System::String* DetailTitle2; // 0x40
		::System::Int32 Index; // 0x48
		::System::Boolean BackIsGOMainCity; // 0x4C
		::System::Boolean ShowMainBtn; // 0x4D
		::System::Boolean IsCanShowLocked; // 0x4E
		::System::Boolean ShowDetailBtn; // 0x4F
		::System::Int32 DefaultShopTabID; // 0x50
		::System::Int32 ShopID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
