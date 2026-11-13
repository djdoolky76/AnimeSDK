#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ANJHFENLOIJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define ANJHFENLOIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB2CF0)
#define ANJHFENLOIJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECB2D00)
#define ANJHFENLOIJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECB2CB0)

inline static constexpr unsigned int ANJHFENLOIJ_TypeDefinitionIndex = 20227;

	class ANJHFENLOIJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BBBAMBGCGPL; // 0x18
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
		::RPG::GameCore::DynamicFloat* PHFMCACHFIJ; // 0x28
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x30
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x34
		::System::Boolean JHLNDMMBMJP; // 0x36
		::System::Boolean DKFAKDGFDGD; // 0x37
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJHFENLOIJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ANJHFENLOIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ANJHFENLOIJ*))((::PBYTE)hIl2Cpp + ANJHFENLOIJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ANJHFENLOIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ANJHFENLOIJ*))((::PBYTE)hIl2Cpp + ANJHFENLOIJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
