#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDMOAIJBDBP;
namespace RPG::GameCore { class DynamicFloat; }

#define LDMOAIJBDBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94DBB0)
#define LDMOAIJBDBP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E94DBC0)
#define LDMOAIJBDBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E94DB80)

inline static constexpr unsigned int LDMOAIJBDBP_TypeDefinitionIndex = 21814;

	class LDMOAIJBDBP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BJBIBMDPCNP; // 0x18
		::RPG::GameCore::DynamicFloat* KGKLPAMNDBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMOAIJBDBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDMOAIJBDBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDMOAIJBDBP*))((::PBYTE)hIl2Cpp + LDMOAIJBDBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDMOAIJBDBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDMOAIJBDBP*))((::PBYTE)hIl2Cpp + LDMOAIJBDBP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
