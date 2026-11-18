#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E702F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRewardBagDialogContext_TypeDefinitionIndex = 63648;

	class UIHollowRewardBagDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* customTitleEn; // 0x28
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* customItemList; // 0x30
		::System::String* customTitle; // 0x38
		::System::Boolean skipAnim; // 0x40
		::System::Boolean useCustomInfo; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single scrollPos; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
