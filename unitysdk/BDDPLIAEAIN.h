#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BDDPLIAEAIN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define BDDPLIAEAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCE840)
#define BDDPLIAEAIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCCE850)
#define BDDPLIAEAIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCCE7E0)

inline static constexpr unsigned int BDDPLIAEAIN_TypeDefinitionIndex = 22679;

	class BDDPLIAEAIN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicFloat* KHBBNDBJAFK; // 0x20
		::System::Boolean EPDBNDGLPGH; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPLIAEAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BDDPLIAEAIN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDDPLIAEAIN*))((::PBYTE)hIl2Cpp + BDDPLIAEAIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BDDPLIAEAIN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDDPLIAEAIN*))((::PBYTE)hIl2Cpp + BDDPLIAEAIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
