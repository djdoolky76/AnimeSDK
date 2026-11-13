#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define MPOLCKFBMID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B22DB10)

inline static constexpr unsigned int MPOLCKFBMID_TypeDefinitionIndex = 71883;

	class MPOLCKFBMID : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_MOKKDBFNLGM()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "MPOLCKFBMID")->GetStaticField(0x123F0);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_GFMGCKBFNOJ()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "MPOLCKFBMID")->GetStaticField(0x12400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPOLCKFBMID_CCTOR_OFFSET))();
		}

	};
