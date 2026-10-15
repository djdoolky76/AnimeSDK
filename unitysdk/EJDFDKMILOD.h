#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EJDFDKMILOD;
class FCOEMCEDLNL;
namespace System { class String; }

#define EJDFDKMILOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8EC30)
#define EJDFDKMILOD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD8EC40)
#define EJDFDKMILOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD8EC00)

	class EJDFDKMILOD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IEABENMOPFF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDFDKMILOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJDFDKMILOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJDFDKMILOD*))((::PBYTE)hIl2Cpp + EJDFDKMILOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJDFDKMILOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJDFDKMILOD*))((::PBYTE)hIl2Cpp + EJDFDKMILOD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
