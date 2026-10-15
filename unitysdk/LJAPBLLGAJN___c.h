#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJAPBLLGAJN;
namespace System { class Object; }

#define LJAPBLLGAJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E975630)
#define LJAPBLLGAJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E975660)
#define LJAPBLLGAJN___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E975670)

	class LJAPBLLGAJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJAPBLLGAJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAPBLLGAJN___C_CTOR_OFFSET))(this);
		}

		::LJAPBLLGAJN* __cctor_b__68_0()
		{
			return ((::LJAPBLLGAJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAPBLLGAJN___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
