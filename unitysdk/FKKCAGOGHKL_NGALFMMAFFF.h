#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_NGALFMMAFFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAB01C0)

inline static constexpr unsigned int FKKCAGOGHKL_NGALFMMAFFF_TypeDefinitionIndex = 60613;

	class FKKCAGOGHKL_NGALFMMAFFF : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FAHJABLLFIP()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "NGALFMMAFFF")->GetStaticField(0x66BD0);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_EPIBFAHEDJL()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "NGALFMMAFFF")->GetStaticField(0x66BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_NGALFMMAFFF_CCTOR_OFFSET))();
		}

	};
