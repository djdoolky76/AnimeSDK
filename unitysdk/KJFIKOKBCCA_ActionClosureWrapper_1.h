#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

inline static constexpr unsigned int KJFIKOKBCCA_ActionClosureWrapper_1_TypeDefinitionIndex = 6432;

	template <typename T>
	class KJFIKOKBCCA_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__default()
		{
			return (::System::Action**)UnitySDK::FromName("", "ActionClosureWrapper`1")->GetStaticField(0x0);
		}

	};
