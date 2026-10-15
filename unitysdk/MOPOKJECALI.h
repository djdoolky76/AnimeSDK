#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MOPOKJECALI;
namespace System { class String; }

#define MOPOKJECALI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AFC20)
#define MOPOKJECALI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1AFC30)
#define MOPOKJECALI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1AFBF0)

inline static constexpr unsigned int MOPOKJECALI_TypeDefinitionIndex = 22713;

	class MOPOKJECALI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IPOJMHGKIEH; // 0x18
		::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPOKJECALI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MOPOKJECALI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOPOKJECALI*))((::PBYTE)hIl2Cpp + MOPOKJECALI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MOPOKJECALI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOPOKJECALI*))((::PBYTE)hIl2Cpp + MOPOKJECALI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
