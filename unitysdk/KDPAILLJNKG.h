#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KDPAILLJNKG;

#define KDPAILLJNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0588D0)
#define KDPAILLJNKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0588E0)
#define KDPAILLJNKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0588A0)

inline static constexpr unsigned int KDPAILLJNKG_TypeDefinitionIndex = 10225;

	class KDPAILLJNKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* KDJGGOELKDD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPAILLJNKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDPAILLJNKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDPAILLJNKG*))((::PBYTE)hIl2Cpp + KDPAILLJNKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KDPAILLJNKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDPAILLJNKG*))((::PBYTE)hIl2Cpp + KDPAILLJNKG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
