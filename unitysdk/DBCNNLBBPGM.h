#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DBCNNLBBPGM;
class FCOEMCEDLNL;

#define DBCNNLBBPGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF1B40)
#define DBCNNLBBPGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEF1B50)
#define DBCNNLBBPGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEF1B10)

inline static constexpr unsigned int DBCNNLBBPGM_TypeDefinitionIndex = 21857;

	class DBCNNLBBPGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* EEBEGPJMGPD; // 0x18
		::Il2CppArray<::System::Single>* AEDJHCMLLND; // 0x20
		::System::UInt32 CMNOEFFFNPE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCNNLBBPGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBCNNLBBPGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBCNNLBBPGM*))((::PBYTE)hIl2Cpp + DBCNNLBBPGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DBCNNLBBPGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBCNNLBBPGM*))((::PBYTE)hIl2Cpp + DBCNNLBBPGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
