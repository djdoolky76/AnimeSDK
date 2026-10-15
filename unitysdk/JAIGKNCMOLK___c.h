#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIGKNCMOLK;
namespace System { class Object; }

#define JAIGKNCMOLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EE260)
#define JAIGKNCMOLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EE2A0)
#define JAIGKNCMOLK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6EE2B0)

	class JAIGKNCMOLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAIGKNCMOLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK___C_CTOR_OFFSET))(this);
		}

		::JAIGKNCMOLK* __cctor_b__23_0()
		{
			return ((::JAIGKNCMOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGKNCMOLK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
