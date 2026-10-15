#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DOAOEPNIBHB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define DOAOEPNIBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD518C0)
#define DOAOEPNIBHB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD518D0)
#define DOAOEPNIBHB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD51890)

inline static constexpr unsigned int DOAOEPNIBHB_TypeDefinitionIndex = 10195;

	class DOAOEPNIBHB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
		::System::Boolean OKHPAEJAPKG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAOEPNIBHB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DOAOEPNIBHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOAOEPNIBHB*))((::PBYTE)hIl2Cpp + DOAOEPNIBHB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DOAOEPNIBHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOAOEPNIBHB*))((::PBYTE)hIl2Cpp + DOAOEPNIBHB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
