#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"
class FCOEMCEDLNL;
class MNOMFMNFDDH;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define MNOMFMNFDDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DBAF0)
#define MNOMFMNFDDH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1DBB00)
#define MNOMFMNFDDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DBAC0)

inline static constexpr unsigned int MNOMFMNFDDH_TypeDefinitionIndex = 22444;

	class MNOMFMNFDDH : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NKAACMGNNPK; // 0x18
		::System::String* LLOBIMGOPOP; // 0x20
		::RPG::GameCore::DynamicFloat* EFNAJMADAHM; // 0x28
		::System::Boolean NPPFJMIBBMF; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::STTaskExecutePhase PPOIJHJIMLL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOMFMNFDDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MNOMFMNFDDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNOMFMNFDDH*))((::PBYTE)hIl2Cpp + MNOMFMNFDDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MNOMFMNFDDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNOMFMNFDDH*))((::PBYTE)hIl2Cpp + MNOMFMNFDDH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
