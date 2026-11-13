#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCointFormulaTerm.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OLDALHKKOJK;
namespace System { class String; }

#define OLDALHKKOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA11A70)
#define OLDALHKKOJK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA11A80)
#define OLDALHKKOJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA11A40)

inline static constexpr unsigned int OLDALHKKOJK_TypeDefinitionIndex = 21854;

	class OLDALHKKOJK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BJALGDJKGFP; // 0x18
		::System::String* LGCAAFFFBHJ; // 0x20
		::System::String* MLMILNIODBB; // 0x28
		::System::String* BPLDECIIJBE; // 0x30
		::System::UInt32 CMNOEFFFNPE; // 0x38
		::RPG::GameCore::ChenLingFesItemFilterType CADEJOOMKOI; // 0x3C
		::System::Boolean CEAPGCBPBCK; // 0x40
		::System::Boolean OIAKOCEKFAH; // 0x41
		::System::Boolean MHGBOBLCBIB; // 0x42
		::System::Byte _padding0[0x1];
		::System::UInt32 BADKEABAEMP; // 0x44
		::RPG::GameCore::ChenLingFesCointFormulaTerm GEPGCCLFKCF; // 0x48
		::RPG::GameCore::ChenLingFesCointFormulaTerm MLAKOIDJHJF; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDALHKKOJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OLDALHKKOJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLDALHKKOJK*))((::PBYTE)hIl2Cpp + OLDALHKKOJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OLDALHKKOJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLDALHKKOJK*))((::PBYTE)hIl2Cpp + OLDALHKKOJK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
