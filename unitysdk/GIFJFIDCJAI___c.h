#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFJFIDCJAI;
namespace System { class Object; }

#define GIFJFIDCJAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E496CA0)
#define GIFJFIDCJAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E496CE0)
#define GIFJFIDCJAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E496CF0)

	class GIFJFIDCJAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIFJFIDCJAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI___C_CTOR_OFFSET))(this);
		}

		::GIFJFIDCJAI* __cctor_b__28_0()
		{
			return ((::GIFJFIDCJAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFJFIDCJAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
