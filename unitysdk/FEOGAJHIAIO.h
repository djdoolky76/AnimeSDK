#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FEOGAJHIAIO;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define FEOGAJHIAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE36E0)
#define FEOGAJHIAIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE36F0)
#define FEOGAJHIAIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE36B0)

inline static constexpr unsigned int FEOGAJHIAIO_TypeDefinitionIndex = 21056;

	class FEOGAJHIAIO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* NCMKOFAAAOI; // 0x18
		::System::String* AFHDFCPCKGF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOGAJHIAIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FEOGAJHIAIO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEOGAJHIAIO*))((::PBYTE)hIl2Cpp + FEOGAJHIAIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FEOGAJHIAIO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEOGAJHIAIO*))((::PBYTE)hIl2Cpp + FEOGAJHIAIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
