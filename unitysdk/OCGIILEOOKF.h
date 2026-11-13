#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NILMOLIGDGM.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
class FCOEMCEDLNL;
class OCGIILEOOKF;

#define OCGIILEOOKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD260)
#define OCGIILEOOKF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5FD270)
#define OCGIILEOOKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5FD210)

inline static constexpr unsigned int OCGIILEOOKF_TypeDefinitionIndex = 24105;

	class OCGIILEOOKF : public ::NILMOLIGDGM
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackType>* EOPGAFGNCML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIILEOOKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OCGIILEOOKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCGIILEOOKF*))((::PBYTE)hIl2Cpp + OCGIILEOOKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OCGIILEOOKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCGIILEOOKF*))((::PBYTE)hIl2Cpp + OCGIILEOOKF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
