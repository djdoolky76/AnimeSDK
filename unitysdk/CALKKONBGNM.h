#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"
class CALKKONBGNM;
class FCOEMCEDLNL;
namespace System { class String; }

#define CALKKONBGNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA00070)
#define CALKKONBGNM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA00080)
#define CALKKONBGNM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA00040)

inline static constexpr unsigned int CALKKONBGNM_TypeDefinitionIndex = 22448;

	class CALKKONBGNM : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* LLOBIMGOPOP; // 0x18
		::System::String* LNFFCDHBNGG; // 0x20
		::RPG::GameCore::STTaskExecutePhase PPOIJHJIMLL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALKKONBGNM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CALKKONBGNM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CALKKONBGNM*))((::PBYTE)hIl2Cpp + CALKKONBGNM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CALKKONBGNM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CALKKONBGNM*))((::PBYTE)hIl2Cpp + CALKKONBGNM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
