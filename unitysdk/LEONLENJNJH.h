#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LEONLENJNJH;

#define LEONLENJNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9529F0)
#define LEONLENJNJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E952A00)
#define LEONLENJNJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E952930)

inline static constexpr unsigned int LEONLENJNJH_TypeDefinitionIndex = 20306;

	class LEONLENJNJH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEONLENJNJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LEONLENJNJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LEONLENJNJH*))((::PBYTE)hIl2Cpp + LEONLENJNJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LEONLENJNJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LEONLENJNJH*))((::PBYTE)hIl2Cpp + LEONLENJNJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
