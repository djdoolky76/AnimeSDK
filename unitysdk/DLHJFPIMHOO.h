#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DLHJFPIMHOO;
class FCOEMCEDLNL;

#define DLHJFPIMHOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C4C0)
#define DLHJFPIMHOO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF0C4D0)
#define DLHJFPIMHOO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF0C400)

inline static constexpr unsigned int DLHJFPIMHOO_TypeDefinitionIndex = 10262;

	class DLHJFPIMHOO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHJFPIMHOO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DLHJFPIMHOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DLHJFPIMHOO*))((::PBYTE)hIl2Cpp + DLHJFPIMHOO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DLHJFPIMHOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DLHJFPIMHOO*))((::PBYTE)hIl2Cpp + DLHJFPIMHOO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
