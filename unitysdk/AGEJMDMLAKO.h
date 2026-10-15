#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace R3 { template <typename T> class Observable_1; }
namespace UnityEngine::Events { class UnityEvent; }

#define AGEJMDMLAKO_PLNDEPCFOFE_OFFSET UNITYSDK_OFFSET(0xCF27CA0)

inline static constexpr unsigned int AGEJMDMLAKO_TypeDefinitionIndex = 49983;

	class AGEJMDMLAKO : public ::System::Object
	{
	public:
		static ::R3::Observable_1<::R3::Unit>* PLNDEPCFOFE(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::R3::Observable_1<::R3::Unit>*(*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AGEJMDMLAKO_PLNDEPCFOFE_OFFSET))(a1, a2);
		}

	};
