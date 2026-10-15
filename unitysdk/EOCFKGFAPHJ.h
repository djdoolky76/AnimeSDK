#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOCFKGFAPHJ;
class FCOEMCEDLNL;
namespace System { class String; }

#define EOCFKGFAPHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD838B0)
#define EOCFKGFAPHJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD838C0)
#define EOCFKGFAPHJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD83880)

inline static constexpr unsigned int EOCFKGFAPHJ_TypeDefinitionIndex = 22476;

	class EOCFKGFAPHJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MBDAKKKPKCG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCFKGFAPHJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EOCFKGFAPHJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOCFKGFAPHJ*))((::PBYTE)hIl2Cpp + EOCFKGFAPHJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EOCFKGFAPHJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOCFKGFAPHJ*))((::PBYTE)hIl2Cpp + EOCFKGFAPHJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
