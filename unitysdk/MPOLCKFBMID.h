#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define MPOLCKFBMID_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA3F190)

inline static constexpr unsigned int MPOLCKFBMID_TypeDefinitionIndex = 69924;

	class MPOLCKFBMID : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_GFMGCKBFNOJ()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "MPOLCKFBMID")->GetStaticField(0x18950);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_MOKKDBFNLGM()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "MPOLCKFBMID")->GetStaticField(0x18960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPOLCKFBMID_CCTOR_OFFSET))();
		}

	};
