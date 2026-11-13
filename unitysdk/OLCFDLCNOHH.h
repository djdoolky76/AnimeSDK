#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DELOHEOCFBF.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OLCFDLCNOHH;

#define OLCFDLCNOHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA10C30)
#define OLCFDLCNOHH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA10C40)
#define OLCFDLCNOHH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA10C00)

inline static constexpr unsigned int OLCFDLCNOHH_TypeDefinitionIndex = 23594;

	class OLCFDLCNOHH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::DELOHEOCFBF GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCFDLCNOHH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OLCFDLCNOHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLCFDLCNOHH*))((::PBYTE)hIl2Cpp + OLCFDLCNOHH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OLCFDLCNOHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLCFDLCNOHH*))((::PBYTE)hIl2Cpp + OLCFDLCNOHH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
