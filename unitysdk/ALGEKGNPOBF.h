#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ALGEKGNPOBF;
class FCOEMCEDLNL;

#define ALGEKGNPOBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA5C20)
#define ALGEKGNPOBF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA5C30)
#define ALGEKGNPOBF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA5B60)

inline static constexpr unsigned int ALGEKGNPOBF_TypeDefinitionIndex = 10221;

	class ALGEKGNPOBF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGEKGNPOBF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ALGEKGNPOBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALGEKGNPOBF*))((::PBYTE)hIl2Cpp + ALGEKGNPOBF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ALGEKGNPOBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALGEKGNPOBF*))((::PBYTE)hIl2Cpp + ALGEKGNPOBF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
