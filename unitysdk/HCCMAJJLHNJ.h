#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HCCMAJJLHNJ;
namespace RPG::GameCore { class ChenLingFesDialogConfig; }
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define HCCMAJJLHNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8AF90)
#define HCCMAJJLHNJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE8AFA0)
#define HCCMAJJLHNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE8AF50)

inline static constexpr unsigned int HCCMAJJLHNJ_TypeDefinitionIndex = 21509;

	class HCCMAJJLHNJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesToastConfig* CCCCCCNNCJD; // 0x18
		::System::String* NMMKDFFHOLL; // 0x20
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x28
		::RPG::GameCore::ChenLingFesDialogConfig* GGICBIIJMPH; // 0x30
		::System::String* KBEPAIAFLHL; // 0x38
		::RPG::GameCore::ChenLingFesTargetType HILNFHCPEAD; // 0x40
		::RPG::GameCore::LittleGameEntityType EAMICGDAKCN; // 0x44
		::System::UInt32 CMNOEFFFNPE; // 0x48
		::System::Boolean HCBMABMLFPG; // 0x4C
		::System::Boolean GNDCCBNILML; // 0x4D
		::System::Byte _padding0[0x2];
		::System::Single IEHPFADHJFD; // 0x50
		::System::UInt32 NJNFNFCJHFJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMAJJLHNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCCMAJJLHNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCCMAJJLHNJ*))((::PBYTE)hIl2Cpp + HCCMAJJLHNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HCCMAJJLHNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCCMAJJLHNJ*))((::PBYTE)hIl2Cpp + HCCMAJJLHNJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
