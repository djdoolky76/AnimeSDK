#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IJCGPOILPIF;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropButtonConfig; }

#define IJCGPOILPIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE9790)
#define IJCGPOILPIF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEE97A0)
#define IJCGPOILPIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE9760)

inline static constexpr unsigned int IJCGPOILPIF_TypeDefinitionIndex = 21429;

	class IJCGPOILPIF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x18
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* PHKOOLAJGGG; // 0x20
		::System::Boolean ILJFADIIFOI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGPOILPIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IJCGPOILPIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJCGPOILPIF*))((::PBYTE)hIl2Cpp + IJCGPOILPIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IJCGPOILPIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJCGPOILPIF*))((::PBYTE)hIl2Cpp + IJCGPOILPIF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
