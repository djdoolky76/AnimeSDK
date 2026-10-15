#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IIAMJNHDNBB;

#define IIAMJNHDNBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE4750)
#define IIAMJNHDNBB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEE4760)
#define IIAMJNHDNBB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE4690)

inline static constexpr unsigned int IIAMJNHDNBB_TypeDefinitionIndex = 20265;

	class IIAMJNHDNBB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAMJNHDNBB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IIAMJNHDNBB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIAMJNHDNBB*))((::PBYTE)hIl2Cpp + IIAMJNHDNBB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IIAMJNHDNBB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIAMJNHDNBB*))((::PBYTE)hIl2Cpp + IIAMJNHDNBB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
