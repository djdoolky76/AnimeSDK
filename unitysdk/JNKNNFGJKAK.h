#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JNKNNFGJKAK;

#define JNKNNFGJKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D054810)
#define JNKNNFGJKAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D054820)
#define JNKNNFGJKAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D054750)

	class JNKNNFGJKAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKNNFGJKAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNKNNFGJKAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNKNNFGJKAK*))((::PBYTE)hIl2Cpp + JNKNNFGJKAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNKNNFGJKAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNKNNFGJKAK*))((::PBYTE)hIl2Cpp + JNKNNFGJKAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
