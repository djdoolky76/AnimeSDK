#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NJPHJGAPNPG;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define NJPHJGAPNPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D200C00)
#define NJPHJGAPNPG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D200C10)
#define NJPHJGAPNPG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D200BD0)

inline static constexpr unsigned int NJPHJGAPNPG_TypeDefinitionIndex = 21461;

	class NJPHJGAPNPG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FiveDimPortalTarget* MCLLALGABAB; // 0x18
		::System::Boolean FIIGINAGCKL; // 0x20
		::System::Boolean OOMOFODFCBH; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHJGAPNPG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJPHJGAPNPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJPHJGAPNPG*))((::PBYTE)hIl2Cpp + NJPHJGAPNPG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NJPHJGAPNPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJPHJGAPNPG*))((::PBYTE)hIl2Cpp + NJPHJGAPNPG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
