#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define ENMOCEFKBFI_AJHFNLGLAFE_OFFSET UNITYSDK_OFFSET(0x155B33B0)
#define ENMOCEFKBFI_BEMDNIPJHAG_OFFSET UNITYSDK_OFFSET(0x155B3260)
#define ENMOCEFKBFI_CTOR_OFFSET UNITYSDK_OFFSET(0x155B34C0)
#define ENMOCEFKBFI_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x155B31D0)
#define ENMOCEFKBFI_JCKDNNGALEO_OFFSET UNITYSDK_OFFSET(0x155B3220)
#define ENMOCEFKBFI_NKFKBIGPJDB_OFFSET UNITYSDK_OFFSET(0x155B3300)
#define ENMOCEFKBFI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x155B33F0)

inline static constexpr unsigned int ENMOCEFKBFI_TypeDefinitionIndex = 63872;

	class ENMOCEFKBFI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::GameCore::BaseExpeditionBattleAction*>* FEICCPBBIHG; // 0x10
		::System::Boolean HDPLEHFEOFC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_CTOR_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean JCKDNNGALEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_JCKDNNGALEO_OFFSET))(this);
		}

		::System::Void BEMDNIPJHAG(::RPG::GameCore::BaseExpeditionBattleAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_BEMDNIPJHAG_OFFSET))(this, a1);
		}

		::System::Boolean NKFKBIGPJDB(::RPG::GameCore::BaseExpeditionBattleAction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_NKFKBIGPJDB_OFFSET))(this, a1);
		}

		::System::Void AJHFNLGLAFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_AJHFNLGLAFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMOCEFKBFI_PJPFIHFAHGO_OFFSET))(this);
		}

	};
