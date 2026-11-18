#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIBangkovReplenishDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BANGKOVREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x163D6380)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x163D6320)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x163D6260)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW__ONPROCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x163D6760)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x163D6790)

namespace MoleMole
{
	inline static constexpr unsigned int BangKovRewardPopShow_TypeDefinitionIndex = 43632;

	class BangKovRewardPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::MoleMole::UIBangkovReplenishDialogPopWindowController* replenishDialog; // 0x20
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW__CTOR_OFFSET))(this, items);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void _OnProcess_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW__ONPROCESS_B__4_1_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
