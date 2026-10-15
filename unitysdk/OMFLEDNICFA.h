#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class OMFLEDNICFA;
namespace System { class String; }

#define OMFLEDNICFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D29D600)
#define OMFLEDNICFA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D29D620)
#define OMFLEDNICFA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D29D5C0)

inline static constexpr unsigned int OMFLEDNICFA_TypeDefinitionIndex = 24070;

	class OMFLEDNICFA : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* GNOKEEBHONE; // 0x18
		::RPG::GameCore::FixPoint GAFENHHEBPG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLEDNICFA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OMFLEDNICFA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OMFLEDNICFA*))((::PBYTE)hIl2Cpp + OMFLEDNICFA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OMFLEDNICFA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OMFLEDNICFA*))((::PBYTE)hIl2Cpp + OMFLEDNICFA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
