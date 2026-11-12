#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCointFormulaTerm.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OLDALHKKOJK;
namespace System { class String; }

#define OLDALHKKOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49FD00)
#define OLDALHKKOJK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E49FD10)
#define OLDALHKKOJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E49FCD0)

inline static constexpr unsigned int OLDALHKKOJK_TypeDefinitionIndex = 21854;

	class OLDALHKKOJK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BJALGDJKGFP; // 0x18
		::System::String* LGCAAFFFBHJ; // 0x20
		::System::String* BPLDECIIJBE; // 0x28
		::System::String* MLMILNIODBB; // 0x30
		::System::UInt32 CMNOEFFFNPE; // 0x38
		::System::UInt32 BADKEABAEMP; // 0x3C
		::RPG::GameCore::ChenLingFesCointFormulaTerm MLAKOIDJHJF; // 0x40
		::System::Boolean CEAPGCBPBCK; // 0x44
		::System::Boolean OIAKOCEKFAH; // 0x45
		::System::Boolean MHGBOBLCBIB; // 0x46
		::System::Byte _padding0[0x1];
		::RPG::GameCore::ChenLingFesCointFormulaTerm GEPGCCLFKCF; // 0x48
		::RPG::GameCore::ChenLingFesItemFilterType CADEJOOMKOI; // 0x4C
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
