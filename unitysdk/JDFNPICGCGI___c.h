#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDFNPICGCGI;
namespace System { class Object; }

#define JDFNPICGCGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA19360)
#define JDFNPICGCGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA19390)
#define JDFNPICGCGI___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1FA193A0)

inline static constexpr unsigned int JDFNPICGCGI___c_TypeDefinitionIndex = 34039;

	class JDFNPICGCGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDFNPICGCGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFNPICGCGI___C_CTOR_OFFSET))(this);
		}

		::JDFNPICGCGI* __cctor_b__68_0()
		{
			return ((::JDFNPICGCGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFNPICGCGI___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
