#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIAGBJKMEB;
namespace System { class Object; }

#define LOIAGBJKMEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E992EA0)
#define LOIAGBJKMEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E992ED0)
#define LOIAGBJKMEB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E992EE0)

inline static constexpr unsigned int LOIAGBJKMEB___c_TypeDefinitionIndex = 30852;

	class LOIAGBJKMEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOIAGBJKMEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB___C_CTOR_OFFSET))(this);
		}

		::LOIAGBJKMEB* __cctor_b__18_0()
		{
			return ((::LOIAGBJKMEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
