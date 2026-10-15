#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKPPACPGJIO;
namespace System { class Object; }

#define OKPPACPGJIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE76BB0)
#define OKPPACPGJIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE76BF0)
#define OKPPACPGJIO___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1DE76C00)

inline static constexpr unsigned int OKPPACPGJIO___c_TypeDefinitionIndex = 33255;

	class OKPPACPGJIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKPPACPGJIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPPACPGJIO___C_CTOR_OFFSET))(this);
		}

		::OKPPACPGJIO* __cctor_b__36_0()
		{
			return ((::OKPPACPGJIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPPACPGJIO___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
