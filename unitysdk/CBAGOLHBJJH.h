#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CBAGOLHBJJH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CBAGOLHBJJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB11CF0)
#define CBAGOLHBJJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB11D00)
#define CBAGOLHBJJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB11CC0)

inline static constexpr unsigned int CBAGOLHBJJH_TypeDefinitionIndex = 21395;

	class CBAGOLHBJJH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FIJLEDEKBJP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGOLHBJJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CBAGOLHBJJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBAGOLHBJJH*))((::PBYTE)hIl2Cpp + CBAGOLHBJJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CBAGOLHBJJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBAGOLHBJJH*))((::PBYTE)hIl2Cpp + CBAGOLHBJJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
