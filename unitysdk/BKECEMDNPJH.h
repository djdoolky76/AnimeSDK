#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BKECEMDNPJH;
class FCOEMCEDLNL;

#define BKECEMDNPJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81AA20)
#define BKECEMDNPJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81AA30)
#define BKECEMDNPJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81A960)

inline static constexpr unsigned int BKECEMDNPJH_TypeDefinitionIndex = 20308;

	class BKECEMDNPJH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKECEMDNPJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKECEMDNPJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKECEMDNPJH*))((::PBYTE)hIl2Cpp + BKECEMDNPJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BKECEMDNPJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKECEMDNPJH*))((::PBYTE)hIl2Cpp + BKECEMDNPJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
