#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DICEFIGKFCL;
namespace System { class Object; }

#define DICEFIGKFCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBC80)
#define DICEFIGKFCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBCC0)
#define DICEFIGKFCL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1BBCD0)

	class DICEFIGKFCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DICEFIGKFCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL___C_CTOR_OFFSET))(this);
		}

		::DICEFIGKFCL* __cctor_b__48_0()
		{
			return ((::DICEFIGKFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
