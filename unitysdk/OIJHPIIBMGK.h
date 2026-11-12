#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OIJHPIIBMGK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define OIJHPIIBMGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48B980)
#define OIJHPIIBMGK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E48BA90)
#define OIJHPIIBMGK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E48B940)

inline static constexpr unsigned int OIJHPIIBMGK_TypeDefinitionIndex = 24593;

	class OIJHPIIBMGK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* NCDCCHJIBFO; // 0x20
		::RPG::GameCore::DynamicFloat* BLJPBPBEKJA; // 0x28
		::RPG::GameCore::DynamicFloat* IKNEMCOPFIN; // 0x30
		::RPG::GameCore::TargetEvaluator* EKNOCCGMJOF; // 0x38
		::System::Boolean FFJMDIPNLII; // 0x40
		::System::Boolean HIEKAJADECM; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHPIIBMGK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OIJHPIIBMGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OIJHPIIBMGK*))((::PBYTE)hIl2Cpp + OIJHPIIBMGK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OIJHPIIBMGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OIJHPIIBMGK*))((::PBYTE)hIl2Cpp + OIJHPIIBMGK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
