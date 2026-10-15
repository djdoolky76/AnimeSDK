#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EJOCPHPCKDL;
class FCOEMCEDLNL;

#define EJOCPHPCKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD64C00)
#define EJOCPHPCKDL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD64C10)
#define EJOCPHPCKDL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD64B40)

inline static constexpr unsigned int EJOCPHPCKDL_TypeDefinitionIndex = 21073;

	class EJOCPHPCKDL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOCPHPCKDL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJOCPHPCKDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJOCPHPCKDL*))((::PBYTE)hIl2Cpp + EJOCPHPCKDL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJOCPHPCKDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJOCPHPCKDL*))((::PBYTE)hIl2Cpp + EJOCPHPCKDL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
