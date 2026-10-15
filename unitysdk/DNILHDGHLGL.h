#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DNILHDGHLGL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define DNILHDGHLGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1D2B0)
#define DNILHDGHLGL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD1D470)
#define DNILHDGHLGL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD1D440)
#define DNILHDGHLGL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD1D2C0)
#define DNILHDGHLGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD1D280)

inline static constexpr unsigned int DNILHDGHLGL_TypeDefinitionIndex = 23374;

	class DNILHDGHLGL : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNILHDGHLGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNILHDGHLGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNILHDGHLGL*))((::PBYTE)hIl2Cpp + DNILHDGHLGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DNILHDGHLGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNILHDGHLGL*))((::PBYTE)hIl2Cpp + DNILHDGHLGL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DNILHDGHLGL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DNILHDGHLGL*))((::PBYTE)hIl2Cpp + DNILHDGHLGL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DNILHDGHLGL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DNILHDGHLGL*))((::PBYTE)hIl2Cpp + DNILHDGHLGL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
