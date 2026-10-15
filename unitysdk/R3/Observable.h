#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define R3_OBSERVABLE_FROMEVENT_OFFSET UNITYSDK_OFFSET(0x1C4239F0)
#define R3_OBSERVABLE_RETURN_1_OFFSET UNITYSDK_OFFSET(0x1C423B30)

namespace R3
{
	inline static constexpr unsigned int Observable_TypeDefinitionIndex = 35905;

	class Observable : public ::System::Object
	{
	public:
		static ::R3::Observable_1<::R3::Unit>* FromEvent(::System::Action_1<::System::Action*>* a1, ::System::Action_1<::System::Action*>* a2, ::System::Threading::CancellationToken a3)
		{
			return ((::R3::Observable_1<::R3::Unit>*(*)(::System::Action_1<::System::Action*>*, ::System::Action_1<::System::Action*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + R3_OBSERVABLE_FROMEVENT_OFFSET))(a1, a2, a3);
		}

		static ::R3::Observable_1<::System::Boolean>* Return_1(::System::Boolean a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + R3_OBSERVABLE_RETURN_1_OFFSET))(a1);
		}

	};
}
