#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"
class FCOEMCEDLNL;
class GHNDGHIBKLH;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define GHNDGHIBKLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4B440)
#define GHNDGHIBKLH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE4B450)
#define GHNDGHIBKLH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE4B410)

inline static constexpr unsigned int GHNDGHIBKLH_TypeDefinitionIndex = 22443;

	class GHNDGHIBKLH : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
		::System::String* LLOBIMGOPOP; // 0x20
		::RPG::GameCore::STTaskExecutePhase PPOIJHJIMLL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDGHIBKLH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHNDGHIBKLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHNDGHIBKLH*))((::PBYTE)hIl2Cpp + GHNDGHIBKLH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GHNDGHIBKLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHNDGHIBKLH*))((::PBYTE)hIl2Cpp + GHNDGHIBKLH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
