#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIGKGOMIOFF;
namespace System { class Object; }

#define OIGKGOMIOFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6C860)
#define OIGKGOMIOFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6C8A0)
#define OIGKGOMIOFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE6C8B0)

	class OIGKGOMIOFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIGKGOMIOFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF___C_CTOR_OFFSET))(this);
		}

		::OIGKGOMIOFF* __cctor_b__28_0()
		{
			return ((::OIGKGOMIOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKGOMIOFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
