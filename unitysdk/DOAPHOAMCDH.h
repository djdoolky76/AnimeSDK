#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DOAPHOAMCDH;
class FCOEMCEDLNL;

#define DOAPHOAMCDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD239F0)
#define DOAPHOAMCDH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD23A00)
#define DOAPHOAMCDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD23930)

inline static constexpr unsigned int DOAPHOAMCDH_TypeDefinitionIndex = 19939;

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
