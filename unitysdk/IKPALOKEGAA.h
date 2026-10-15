#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IKPALOKEGAA;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define IKPALOKEGAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1D7A0)
#define IKPALOKEGAA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF1D7B0)
#define IKPALOKEGAA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF1D770)

inline static constexpr unsigned int IKPALOKEGAA_TypeDefinitionIndex = 21518;

	class IKPALOKEGAA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::String* MNDFOPKBHKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPALOKEGAA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IKPALOKEGAA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKPALOKEGAA*))((::PBYTE)hIl2Cpp + IKPALOKEGAA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IKPALOKEGAA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKPALOKEGAA*))((::PBYTE)hIl2Cpp + IKPALOKEGAA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
