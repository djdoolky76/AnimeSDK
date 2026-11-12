#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JCDJJEDDIMP_KKOPJDDGLKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8BF940)
#define JCDJJEDDIMP_KKOPJDDGLKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BF980)
#define JCDJJEDDIMP_KKOPJDDGLKJ___C__ONENTER_B__0_0_OFFSET UNITYSDK_OFFSET(0xB8BF990)

inline static constexpr unsigned int JCDJJEDDIMP_KKOPJDDGLKJ___c_TypeDefinitionIndex = 66131;

	class JCDJJEDDIMP_KKOPJDDGLKJ___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x621F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x621F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ___C__ONENTER_B__0_0_OFFSET))(this);
		}

	};
