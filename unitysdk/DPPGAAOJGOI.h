#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKMJGCFCMMC.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
class DPPGAAOJGOI;
class FCOEMCEDLNL;
class JKMJGCFCMMC;

#define DPPGAAOJGOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5B250)
#define DPPGAAOJGOI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD5B260)
#define DPPGAAOJGOI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD5B220)

inline static constexpr unsigned int DPPGAAOJGOI_TypeDefinitionIndex = 18254;

	class DPPGAAOJGOI : public ::JKMJGCFCMMC
	{
	public:
		::Il2CppArray<::JKMJGCFCMMC*>* AAIAEKDKMMK; // 0x10
		::RPG::GameCore::LogicOperation ICLPIKEGNCA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGAAOJGOI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DPPGAAOJGOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPPGAAOJGOI*))((::PBYTE)hIl2Cpp + DPPGAAOJGOI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DPPGAAOJGOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPPGAAOJGOI*))((::PBYTE)hIl2Cpp + DPPGAAOJGOI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
