#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JCDJJEDDIMP_INFBANBKLPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8BF270)
#define JCDJJEDDIMP_INFBANBKLPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BF2B0)
#define JCDJJEDDIMP_INFBANBKLPM___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0xB8BF2C0)

inline static constexpr unsigned int JCDJJEDDIMP_INFBANBKLPM___c_TypeDefinitionIndex = 66133;

	class JCDJJEDDIMP_INFBANBKLPM___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F800);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM___C__ONENTER_B__0_0_OFFSET))(this);
		}

	};
