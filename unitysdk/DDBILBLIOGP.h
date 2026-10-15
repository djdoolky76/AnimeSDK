#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"
class DDBILBLIOGP;
class FCOEMCEDLNL;

#define DDBILBLIOGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAEA80)
#define DDBILBLIOGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCAE950)

inline static constexpr unsigned int DDBILBLIOGP_TypeDefinitionIndex = 11630;

	class DDBILBLIOGP : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenStatType GMPGDEINODK; // 0x10
		::System::UInt32 NNACKOBKFGE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBILBLIOGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DDBILBLIOGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DDBILBLIOGP*))((::PBYTE)hIl2Cpp + DDBILBLIOGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
