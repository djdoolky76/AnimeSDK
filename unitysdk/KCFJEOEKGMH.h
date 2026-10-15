#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KCFJEOEKGMH;
namespace RPG::GameCore { class DynamicFloat; }

#define KCFJEOEKGMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0391C0)
#define KCFJEOEKGMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0391D0)
#define KCFJEOEKGMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D039190)

inline static constexpr unsigned int KCFJEOEKGMH_TypeDefinitionIndex = 20537;

	class KCFJEOEKGMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* KMELNDFGMDH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFJEOEKGMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCFJEOEKGMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCFJEOEKGMH*))((::PBYTE)hIl2Cpp + KCFJEOEKGMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KCFJEOEKGMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCFJEOEKGMH*))((::PBYTE)hIl2Cpp + KCFJEOEKGMH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
