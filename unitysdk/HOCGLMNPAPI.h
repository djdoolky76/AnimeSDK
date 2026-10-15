#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGCNCMGEBBC.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HOCGLMNPAPI;
namespace System { class String; }

#define HOCGLMNPAPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9FE90)
#define HOCGLMNPAPI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE9FEA0)
#define HOCGLMNPAPI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9FE60)

inline static constexpr unsigned int HOCGLMNPAPI_TypeDefinitionIndex = 19906;

	class HOCGLMNPAPI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::BGCNCMGEBBC KIODCPPMEIE; // 0x20
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCGLMNPAPI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HOCGLMNPAPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HOCGLMNPAPI*))((::PBYTE)hIl2Cpp + HOCGLMNPAPI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HOCGLMNPAPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HOCGLMNPAPI*))((::PBYTE)hIl2Cpp + HOCGLMNPAPI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
