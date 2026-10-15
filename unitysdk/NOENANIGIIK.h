#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NOENANIGIIK;

#define NOENANIGIIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D212BC0)
#define NOENANIGIIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D212BD0)
#define NOENANIGIIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D212B90)

inline static constexpr unsigned int NOENANIGIIK_TypeDefinitionIndex = 21043;

	class NOENANIGIIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOENANIGIIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOENANIGIIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOENANIGIIK*))((::PBYTE)hIl2Cpp + NOENANIGIIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NOENANIGIIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOENANIGIIK*))((::PBYTE)hIl2Cpp + NOENANIGIIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
