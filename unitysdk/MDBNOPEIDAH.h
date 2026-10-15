#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MDBNOPEIDAH;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MDBNOPEIDAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D141CA0)
#define MDBNOPEIDAH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D141E60)
#define MDBNOPEIDAH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D141E30)
#define MDBNOPEIDAH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D141CB0)
#define MDBNOPEIDAH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D141C70)

inline static constexpr unsigned int MDBNOPEIDAH_TypeDefinitionIndex = 24148;

	class MDBNOPEIDAH : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* IEABENMOPFF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBNOPEIDAH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDBNOPEIDAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDBNOPEIDAH*))((::PBYTE)hIl2Cpp + MDBNOPEIDAH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDBNOPEIDAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDBNOPEIDAH*))((::PBYTE)hIl2Cpp + MDBNOPEIDAH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MDBNOPEIDAH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MDBNOPEIDAH*))((::PBYTE)hIl2Cpp + MDBNOPEIDAH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MDBNOPEIDAH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MDBNOPEIDAH*))((::PBYTE)hIl2Cpp + MDBNOPEIDAH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
