#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BNCHFPFHIJL;
class CLMMOEFOCNP;
class FCOEMCEDLNL;
class GBCGKOIEMKF;
namespace System { class String; }

#define CLMMOEFOCNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF7730)
#define CLMMOEFOCNP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBF7740)
#define CLMMOEFOCNP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBF76F0)

inline static constexpr unsigned int CLMMOEFOCNP_TypeDefinitionIndex = 23339;

	class CLMMOEFOCNP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::GBCGKOIEMKF* JGMFFAEKMBP; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::BNCHFPFHIJL* OLOKHEMMGOH; // 0x28
		::System::Boolean GNDCCBNILML; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMMOEFOCNP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CLMMOEFOCNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CLMMOEFOCNP*))((::PBYTE)hIl2Cpp + CLMMOEFOCNP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CLMMOEFOCNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CLMMOEFOCNP*))((::PBYTE)hIl2Cpp + CLMMOEFOCNP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
