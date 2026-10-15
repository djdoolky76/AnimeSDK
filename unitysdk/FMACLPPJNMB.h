#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FMACLPPJNMB;
namespace System { class String; }

#define FMACLPPJNMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDA7A0)
#define FMACLPPJNMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDDA7B0)
#define FMACLPPJNMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDDA770)

inline static constexpr unsigned int FMACLPPJNMB_TypeDefinitionIndex = 21502;

	class FMACLPPJNMB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LONAPEPCKGI; // 0x18
		::System::String* LJGJAPMGLNB; // 0x20
		::System::UInt32 CMNOEFFFNPE; // 0x28
		::RPG::GameCore::ChenLingFesItemFilterType LPDKEDCAODC; // 0x2C
		::System::UInt32 NJNFNFCJHFJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMACLPPJNMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FMACLPPJNMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FMACLPPJNMB*))((::PBYTE)hIl2Cpp + FMACLPPJNMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FMACLPPJNMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FMACLPPJNMB*))((::PBYTE)hIl2Cpp + FMACLPPJNMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
