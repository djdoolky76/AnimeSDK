#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DANFCLODJNK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define DANFCLODJNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9E300)
#define DANFCLODJNK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9E340)
#define DANFCLODJNK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9E2A0)

inline static constexpr unsigned int DANFCLODJNK_TypeDefinitionIndex = 23122;

	class DANFCLODJNK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::String* CIDCEJCGOGB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DANFCLODJNK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DANFCLODJNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DANFCLODJNK*))((::PBYTE)hIl2Cpp + DANFCLODJNK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DANFCLODJNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DANFCLODJNK*))((::PBYTE)hIl2Cpp + DANFCLODJNK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
