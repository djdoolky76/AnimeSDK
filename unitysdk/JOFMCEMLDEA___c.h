#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOFMCEMLDEA;
namespace System { class Object; }

#define JOFMCEMLDEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A0F00)
#define JOFMCEMLDEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A0F40)
#define JOFMCEMLDEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7A0F50)

	class JOFMCEMLDEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFMCEMLDEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA___C_CTOR_OFFSET))(this);
		}

		::JOFMCEMLDEA* __cctor_b__38_0()
		{
			return ((::JOFMCEMLDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFMCEMLDEA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
