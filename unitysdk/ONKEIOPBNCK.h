#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class ONKEIOPBNCK;

#define ONKEIOPBNCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AB860)
#define ONKEIOPBNCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4AB870)
#define ONKEIOPBNCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4AB830)

inline static constexpr unsigned int ONKEIOPBNCK_TypeDefinitionIndex = 21899;

	class ONKEIOPBNCK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MLDLOJJBIJD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKEIOPBNCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ONKEIOPBNCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONKEIOPBNCK*))((::PBYTE)hIl2Cpp + ONKEIOPBNCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ONKEIOPBNCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONKEIOPBNCK*))((::PBYTE)hIl2Cpp + ONKEIOPBNCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
