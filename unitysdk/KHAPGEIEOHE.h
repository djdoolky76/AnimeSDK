#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KHAPGEIEOHE;

#define KHAPGEIEOHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41D170)
#define KHAPGEIEOHE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F41D180)
#define KHAPGEIEOHE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F41D140)

inline static constexpr unsigned int KHAPGEIEOHE_TypeDefinitionIndex = 21890;

	class KHAPGEIEOHE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 NPHAJEKCBKF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAPGEIEOHE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KHAPGEIEOHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHAPGEIEOHE*))((::PBYTE)hIl2Cpp + KHAPGEIEOHE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KHAPGEIEOHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHAPGEIEOHE*))((::PBYTE)hIl2Cpp + KHAPGEIEOHE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
