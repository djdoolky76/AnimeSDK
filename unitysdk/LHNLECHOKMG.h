#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LHNLECHOKMG;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define LHNLECHOKMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4600)
#define LHNLECHOKMG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0F4610)
#define LHNLECHOKMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F45D0)

	class LHNLECHOKMG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MMMJJJOGBBI; // 0x18
		::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20
		::System::Boolean GEOPPFCKACN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNLECHOKMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHNLECHOKMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHNLECHOKMG*))((::PBYTE)hIl2Cpp + LHNLECHOKMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LHNLECHOKMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHNLECHOKMG*))((::PBYTE)hIl2Cpp + LHNLECHOKMG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
