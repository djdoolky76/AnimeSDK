#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ConditionParam; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int LEABOMCMOPJ___O_TypeDefinitionIndex = 64046;

	class LEABOMCMOPJ___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>** StaticGet__0___DoCheckCondition()
		{
			return (::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x58780);
		}

	};
