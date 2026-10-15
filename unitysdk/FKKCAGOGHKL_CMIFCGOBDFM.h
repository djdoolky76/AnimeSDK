#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_CMIFCGOBDFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15802D40)

	class FKKCAGOGHKL_CMIFCGOBDFM : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_JJJLBMKBODF()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "CMIFCGOBDFM")->GetStaticField(0x40D00);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_OOJHEOBBFOH()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "CMIFCGOBDFM")->GetStaticField(0x40D10);
		}

		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_KHIMPAMBELM()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "CMIFCGOBDFM")->GetStaticField(0x40D20);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_GFKEKANEDNH()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "CMIFCGOBDFM")->GetStaticField(0x40D30);
		}

		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_GLPNHJOJJGM()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "CMIFCGOBDFM")->GetStaticField(0x40D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_CMIFCGOBDFM_CCTOR_OFFSET))();
		}

	};
