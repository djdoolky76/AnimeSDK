#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IBMOIBOMCGH;
namespace System { class String; }

#define IBMOIBOMCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDFC80)
#define IBMOIBOMCGH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEDFC90)
#define IBMOIBOMCGH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEDFC40)

	class IBMOIBOMCGH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NAJMIHJAHIM; // 0x18
		::System::UInt32 GFJFGJBNECC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMOIBOMCGH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IBMOIBOMCGH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IBMOIBOMCGH*))((::PBYTE)hIl2Cpp + IBMOIBOMCGH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IBMOIBOMCGH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IBMOIBOMCGH*))((::PBYTE)hIl2Cpp + IBMOIBOMCGH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
