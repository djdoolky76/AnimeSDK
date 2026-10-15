#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GCFBDNCBFIE;
namespace RPG::GameCore { class DynamicString; }

#define GCFBDNCBFIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFDBF0)
#define GCFBDNCBFIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFDC00)
#define GCFBDNCBFIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFDBC0)

inline static constexpr unsigned int GCFBDNCBFIE_TypeDefinitionIndex = 21435;

	class GCFBDNCBFIE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DENMPAAMHOD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFBDNCBFIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GCFBDNCBFIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCFBDNCBFIE*))((::PBYTE)hIl2Cpp + GCFBDNCBFIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GCFBDNCBFIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCFBDNCBFIE*))((::PBYTE)hIl2Cpp + GCFBDNCBFIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
