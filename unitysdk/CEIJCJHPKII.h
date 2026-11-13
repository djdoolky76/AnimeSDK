#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CEIJCJHPKII;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define CEIJCJHPKII_CTOR_OFFSET UNITYSDK_OFFSET(0x1156F250)
#define CEIJCJHPKII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1156F2B0)
#define CEIJCJHPKII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1156F1C0)

inline static constexpr unsigned int CEIJCJHPKII_TypeDefinitionIndex = 22564;

	class CEIJCJHPKII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GEBAIALMBFB; // 0x18
		::RPG::GameCore::DynamicFloat* JODPHBJFOPL; // 0x20
		::RPG::GameCore::DynamicString* BFLIFKBEOPJ; // 0x28
		::System::Boolean OPBKCOJPOPI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIJCJHPKII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CEIJCJHPKII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CEIJCJHPKII*))((::PBYTE)hIl2Cpp + CEIJCJHPKII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CEIJCJHPKII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CEIJCJHPKII*))((::PBYTE)hIl2Cpp + CEIJCJHPKII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
