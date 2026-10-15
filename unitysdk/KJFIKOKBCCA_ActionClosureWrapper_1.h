#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int KJFIKOKBCCA_ActionClosureWrapper_1_TypeDefinitionIndex = 6432;

	template <typename T>
	class KJFIKOKBCCA_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::System::Action_1<::ICFEIEJDMIB>** StaticGet__default()
		{
			return (::System::Action_1<::ICFEIEJDMIB>**)UnitySDK::FromName("", "ActionClosureWrapper`1")->GetStaticField(0x0);
		}

	};
