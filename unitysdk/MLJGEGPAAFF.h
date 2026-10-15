#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MLJGEGPAAFF;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MLJGEGPAAFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C58C0)
#define MLJGEGPAAFF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D1CC8D0)
#define MLJGEGPAAFF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D1CC8A0)
#define MLJGEGPAAFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1C58D0)
#define MLJGEGPAAFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CC870)

	class MLJGEGPAAFF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* LLOBIMGOPOP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJGEGPAAFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLJGEGPAAFF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLJGEGPAAFF*))((::PBYTE)hIl2Cpp + MLJGEGPAAFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MLJGEGPAAFF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLJGEGPAAFF*))((::PBYTE)hIl2Cpp + MLJGEGPAAFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MLJGEGPAAFF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MLJGEGPAAFF*))((::PBYTE)hIl2Cpp + MLJGEGPAAFF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MLJGEGPAAFF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MLJGEGPAAFF*))((::PBYTE)hIl2Cpp + MLJGEGPAAFF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
