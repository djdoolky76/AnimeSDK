#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostDisplayTag.h"
#include "unitysdk/System/Object.h"
class ENBMOAFGKCG;
class FCOEMCEDLNL;

#define ENBMOAFGKCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C170)
#define ENBMOAFGKCG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD7BF70)

inline static constexpr unsigned int ENBMOAFGKCG_TypeDefinitionIndex = 13922;

	class ENBMOAFGKCG : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::LimaoNewsPostDisplayTag>* CNCKNJMHDIL; // 0x10
		::System::UInt32 AEDOBNFDODI; // 0x18
		::System::UInt32 DGLJLJEHNNB; // 0x1C
		::System::UInt32 KMIBDJKKGDE; // 0x20
		::System::UInt32 KIFJECNOHDG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBMOAFGKCG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ENBMOAFGKCG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ENBMOAFGKCG*))((::PBYTE)hIl2Cpp + ENBMOAFGKCG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
