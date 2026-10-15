#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DANFCLODJNK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define DANFCLODJNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCBB70)
#define DANFCLODJNK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCCBBB0)
#define DANFCLODJNK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCCBB10)

	class DANFCLODJNK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x18
		::System::String* CIDCEJCGOGB; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
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
