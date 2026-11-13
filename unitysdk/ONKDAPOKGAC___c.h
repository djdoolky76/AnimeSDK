#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONKDAPOKGAC;
namespace System { class Object; }

#define ONKDAPOKGAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F3C0)
#define ONKDAPOKGAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F400)
#define ONKDAPOKGAC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FC2F410)

inline static constexpr unsigned int ONKDAPOKGAC___c_TypeDefinitionIndex = 25788;

	class ONKDAPOKGAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONKDAPOKGAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKDAPOKGAC___C_CTOR_OFFSET))(this);
		}

		::ONKDAPOKGAC* __cctor_b__43_0()
		{
			return ((::ONKDAPOKGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKDAPOKGAC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
