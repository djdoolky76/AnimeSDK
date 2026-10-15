#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AIGHNCCAJPL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIGHNCCAJPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC9830)
#define AIGHNCCAJPL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCC9840)
#define AIGHNCCAJPL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCC9800)

	class AIGHNCCAJPL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OELMOCMDEJI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* CHLBKIKJFLC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGHNCCAJPL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AIGHNCCAJPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AIGHNCCAJPL*))((::PBYTE)hIl2Cpp + AIGHNCCAJPL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AIGHNCCAJPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AIGHNCCAJPL*))((::PBYTE)hIl2Cpp + AIGHNCCAJPL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
