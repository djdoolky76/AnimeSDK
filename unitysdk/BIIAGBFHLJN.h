#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class BIIAGBFHLJN;
class FCOEMCEDLNL;

#define BIIAGBFHLJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D808000)
#define BIIAGBFHLJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D808010)
#define BIIAGBFHLJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D807F40)

inline static constexpr unsigned int BIIAGBFHLJN_TypeDefinitionIndex = 24072;

	class BIIAGBFHLJN : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIAGBFHLJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIIAGBFHLJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIIAGBFHLJN*))((::PBYTE)hIl2Cpp + BIIAGBFHLJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BIIAGBFHLJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIIAGBFHLJN*))((::PBYTE)hIl2Cpp + BIIAGBFHLJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
