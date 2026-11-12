#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJMBEOPMFHD;
namespace System { class String; }

#define GJMBEOPMFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E032F10)
#define GJMBEOPMFHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E032F20)
#define GJMBEOPMFHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E032EE0)

inline static constexpr unsigned int GJMBEOPMFHD_TypeDefinitionIndex = 21902;

	class GJMBEOPMFHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CELBFEDOGKO; // 0x18
		::System::Boolean IOBJFEJFLJP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMBEOPMFHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJMBEOPMFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJMBEOPMFHD*))((::PBYTE)hIl2Cpp + GJMBEOPMFHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJMBEOPMFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJMBEOPMFHD*))((::PBYTE)hIl2Cpp + GJMBEOPMFHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
