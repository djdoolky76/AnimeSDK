#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GNJOOFCEGAG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define GNJOOFCEGAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E048EE0)
#define GNJOOFCEGAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E048F20)
#define GNJOOFCEGAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E048E80)

inline static constexpr unsigned int GNJOOFCEGAG_TypeDefinitionIndex = 22975;

	class GNJOOFCEGAG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::TargetEvaluator* DEONKIFKHLF; // 0x20
		::RPG::GameCore::TargetEvaluator* HFOFGODKAMN; // 0x28
		::System::Boolean AACPFDGGGDE; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AvatarBaseTypeKind EIEEPCFDPJD; // 0x34
		::RPG::GameCore::AvatarBaseTypeMask LKLNGCCIMEM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJOOFCEGAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GNJOOFCEGAG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GNJOOFCEGAG*))((::PBYTE)hIl2Cpp + GNJOOFCEGAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GNJOOFCEGAG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GNJOOFCEGAG*))((::PBYTE)hIl2Cpp + GNJOOFCEGAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
