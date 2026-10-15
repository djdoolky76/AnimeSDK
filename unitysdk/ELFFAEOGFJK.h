#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELFFAEOGFJK;
class FCOEMCEDLNL;

#define ELFFAEOGFJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6C030)
#define ELFFAEOGFJK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD6C040)
#define ELFFAEOGFJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD6C000)

inline static constexpr unsigned int ELFFAEOGFJK_TypeDefinitionIndex = 21485;

	class ELFFAEOGFJK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FDKGNIIGDMO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFFAEOGFJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELFFAEOGFJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELFFAEOGFJK*))((::PBYTE)hIl2Cpp + ELFFAEOGFJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELFFAEOGFJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELFFAEOGFJK*))((::PBYTE)hIl2Cpp + ELFFAEOGFJK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
