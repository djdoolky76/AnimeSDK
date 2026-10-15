#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class NPHIKPFNJJO;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define NPHIKPFNJJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D246220)
#define NPHIKPFNJJO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2463C0)
#define NPHIKPFNJJO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D246390)
#define NPHIKPFNJJO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D246230)
#define NPHIKPFNJJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2461F0)

inline static constexpr unsigned int NPHIKPFNJJO_TypeDefinitionIndex = 21295;

	class NPHIKPFNJJO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* GGIJPKIIDBN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHIKPFNJJO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NPHIKPFNJJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPHIKPFNJJO*))((::PBYTE)hIl2Cpp + NPHIKPFNJJO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NPHIKPFNJJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPHIKPFNJJO*))((::PBYTE)hIl2Cpp + NPHIKPFNJJO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::NPHIKPFNJJO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NPHIKPFNJJO*))((::PBYTE)hIl2Cpp + NPHIKPFNJJO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::NPHIKPFNJJO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NPHIKPFNJJO*))((::PBYTE)hIl2Cpp + NPHIKPFNJJO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
