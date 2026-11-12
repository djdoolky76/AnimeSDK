#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CGHBOOLNOOJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CGHBOOLNOOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC9E20)
#define CGHBOOLNOOJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EDC9E90)
#define CGHBOOLNOOJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EDC9D90)

inline static constexpr unsigned int CGHBOOLNOOJ_TypeDefinitionIndex = 23030;

	class CGHBOOLNOOJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHBOOLNOOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CGHBOOLNOOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CGHBOOLNOOJ*))((::PBYTE)hIl2Cpp + CGHBOOLNOOJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CGHBOOLNOOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CGHBOOLNOOJ*))((::PBYTE)hIl2Cpp + CGHBOOLNOOJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
