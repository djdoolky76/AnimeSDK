#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ADADGGGFBKP;
class FCOEMCEDLNL;

#define ADADGGGFBKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAC0C0)
#define ADADGGGFBKP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCAC0D0)
#define ADADGGGFBKP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCAC090)

inline static constexpr unsigned int ADADGGGFBKP_TypeDefinitionIndex = 10228;

	class ADADGGGFBKP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LCLPEGNKIBF; // 0x18
		::System::Boolean ENJBCDBBPFN; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADADGGGFBKP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ADADGGGFBKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADADGGGFBKP*))((::PBYTE)hIl2Cpp + ADADGGGFBKP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ADADGGGFBKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADADGGGFBKP*))((::PBYTE)hIl2Cpp + ADADGGGFBKP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
