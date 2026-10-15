#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAOLLLOFMKB;
namespace System { class Object; }

#define FAOLLLOFMKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32C7A0)
#define FAOLLLOFMKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32C7E0)
#define FAOLLLOFMKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E32C7F0)

	class FAOLLLOFMKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOLLLOFMKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB___C_CTOR_OFFSET))(this);
		}

		::FAOLLLOFMKB* __cctor_b__33_0()
		{
			return ((::FAOLLLOFMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
