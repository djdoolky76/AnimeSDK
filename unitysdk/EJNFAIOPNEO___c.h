#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJNFAIOPNEO;
namespace System { class Object; }

#define EJNFAIOPNEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE54DF0)
#define EJNFAIOPNEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE54E30)
#define EJNFAIOPNEO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FE54E40)

inline static constexpr unsigned int EJNFAIOPNEO___c_TypeDefinitionIndex = 32413;

	class EJNFAIOPNEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNFAIOPNEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNFAIOPNEO___C_CTOR_OFFSET))(this);
		}

		::EJNFAIOPNEO* __cctor_b__53_0()
		{
			return ((::EJNFAIOPNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNFAIOPNEO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
