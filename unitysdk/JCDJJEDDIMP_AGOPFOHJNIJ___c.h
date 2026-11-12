#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JCDJJEDDIMP_AGOPFOHJNIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8BCE00)
#define JCDJJEDDIMP_AGOPFOHJNIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BCE40)
#define JCDJJEDDIMP_AGOPFOHJNIJ___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0xB8BCE50)

inline static constexpr unsigned int JCDJJEDDIMP_AGOPFOHJNIJ___c_TypeDefinitionIndex = 66126;

	class JCDJJEDDIMP_AGOPFOHJNIJ___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F7B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F7B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ___C__ONENTER_B__0_0_OFFSET))(this);
		}

	};
