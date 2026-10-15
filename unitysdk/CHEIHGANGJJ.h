#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEIHGANGJJ;
namespace RPG::Client { class TutorialGuideConfigWrapper; }

#define CHEIHGANGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8DD40)
#define CHEIHGANGJJ_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xCC8DCA0)
#define CHEIHGANGJJ_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xCC8DD50)

inline static constexpr unsigned int CHEIHGANGJJ_TypeDefinitionIndex = 68232;

	class CHEIHGANGJJ : public ::System::Object
	{
	public:
		::System::UInt32 JGGDKOCIEGH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEIHGANGJJ_CTOR_OFFSET))(this);
		}

		static ::CHEIHGANGJJ* DMKJAJLNEBK(::RPG::Client::TutorialGuideConfigWrapper* a1)
		{
			return ((::CHEIHGANGJJ*(*)(::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CHEIHGANGJJ_DMKJAJLNEBK_OFFSET))(a1);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEIHGANGJJ_FFHNOMIDEDE_OFFSET))(this);
		}

	};
