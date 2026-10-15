#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OABDHILOOOC;

#define OABDHILOOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D21B6C0)
#define OABDHILOOOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D21B6D0)
#define OABDHILOOOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D21B690)

inline static constexpr unsigned int OABDHILOOOC_TypeDefinitionIndex = 10202;

	class OABDHILOOOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABDHILOOOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OABDHILOOOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OABDHILOOOC*))((::PBYTE)hIl2Cpp + OABDHILOOOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OABDHILOOOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OABDHILOOOC*))((::PBYTE)hIl2Cpp + OABDHILOOOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
