#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FHOJCBIBJKE;

#define FHOJCBIBJKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC62B0)
#define FHOJCBIBJKE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDC62C0)
#define FHOJCBIBJKE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDC6280)

inline static constexpr unsigned int FHOJCBIBJKE_TypeDefinitionIndex = 21555;

	class FHOJCBIBJKE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DKAFAJBFFBI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOJCBIBJKE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FHOJCBIBJKE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHOJCBIBJKE*))((::PBYTE)hIl2Cpp + FHOJCBIBJKE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FHOJCBIBJKE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHOJCBIBJKE*))((::PBYTE)hIl2Cpp + FHOJCBIBJKE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
