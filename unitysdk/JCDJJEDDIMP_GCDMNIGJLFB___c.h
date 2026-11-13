#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JCDJJEDDIMP_GCDMNIGJLFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19A87F00)
#define JCDJJEDDIMP_GCDMNIGJLFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19A87F40)
#define JCDJJEDDIMP_GCDMNIGJLFB___C__ONEVENT_B__2_0_OFFSET UNITYSDK_OFFSET(0x19A87F50)

inline static constexpr unsigned int JCDJJEDDIMP_GCDMNIGJLFB___c_TypeDefinitionIndex = 66129;

	class JCDJJEDDIMP_GCDMNIGJLFB___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60B40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEvent_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB___C__ONEVENT_B__2_0_OFFSET))(this);
		}

	};
