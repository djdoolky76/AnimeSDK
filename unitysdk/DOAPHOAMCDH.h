#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DOAPHOAMCDH;
class FCOEMCEDLNL;

#define DOAPHOAMCDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E999130)
#define DOAPHOAMCDH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E999140)
#define DOAPHOAMCDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E999070)

inline static constexpr unsigned int DOAPHOAMCDH_TypeDefinitionIndex = 20268;

	class DOAPHOAMCDH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPHOAMCDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DOAPHOAMCDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOAPHOAMCDH*))((::PBYTE)hIl2Cpp + DOAPHOAMCDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DOAPHOAMCDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOAPHOAMCDH*))((::PBYTE)hIl2Cpp + DOAPHOAMCDH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
