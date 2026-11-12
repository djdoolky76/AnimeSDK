#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MILDJHKDICG;
namespace System { class Object; }

#define MILDJHKDICG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD90150)
#define MILDJHKDICG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD90190)
#define MILDJHKDICG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD901A0)

inline static constexpr unsigned int MILDJHKDICG___c_TypeDefinitionIndex = 31971;

	class MILDJHKDICG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MILDJHKDICG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG___C_CTOR_OFFSET))(this);
		}

		::MILDJHKDICG* __cctor_b__28_0()
		{
			return ((::MILDJHKDICG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
