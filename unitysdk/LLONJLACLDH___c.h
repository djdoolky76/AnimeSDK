#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLONJLACLDH;
namespace System { class Object; }

#define LLONJLACLDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99FE00)
#define LLONJLACLDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99FE40)
#define LLONJLACLDH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E99FE50)

	class LLONJLACLDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLONJLACLDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH___C_CTOR_OFFSET))(this);
		}

		::LLONJLACLDH* __cctor_b__28_0()
		{
			return ((::LLONJLACLDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
