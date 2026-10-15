#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingDescConditionType.h"
#include "unitysdk/System/Object.h"
class CKAPDOPHKJB;
class FCOEMCEDLNL;

#define CKAPDOPHKJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1D200)
#define CKAPDOPHKJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC1D100)

	class CKAPDOPHKJB : public ::System::Object
	{
	public:
		::RPG::GameCore::LoadingDescConditionType GMPGDEINODK; // 0x10
		::System::UInt32 NNACKOBKFGE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAPDOPHKJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKAPDOPHKJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKAPDOPHKJB*))((::PBYTE)hIl2Cpp + CKAPDOPHKJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
