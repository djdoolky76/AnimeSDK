#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IPIMHIGNICC;

#define IPIMHIGNICC_CTOR_OFFSET UNITYSDK_OFFSET(0xC9A71B0)
#define IPIMHIGNICC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC9A71C0)
#define IPIMHIGNICC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC9A70F0)

inline static constexpr unsigned int IPIMHIGNICC_TypeDefinitionIndex = 20638;

	class IPIMHIGNICC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIMHIGNICC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IPIMHIGNICC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPIMHIGNICC*))((::PBYTE)hIl2Cpp + IPIMHIGNICC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IPIMHIGNICC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPIMHIGNICC*))((::PBYTE)hIl2Cpp + IPIMHIGNICC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
