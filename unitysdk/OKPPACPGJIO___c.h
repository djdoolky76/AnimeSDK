#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKPPACPGJIO;
namespace System { class Object; }

#define OKPPACPGJIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD62ED0)
#define OKPPACPGJIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD62F10)
#define OKPPACPGJIO___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1FD62F20)

inline static constexpr unsigned int OKPPACPGJIO___c_TypeDefinitionIndex = 34170;

	class OKPPACPGJIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20590);
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
